#ifndef ALGORITHM_H
#define ALGORITHM_H
#include "dataset.h"

struct possibleTable
{
    int table[7][14];
    int score = 0;
    possibleTable(int init[][14]) //拷贝构造
    {
        for (int i = 0;i < 7;i++)
            for (int j = 0;j < 14;j++)
                table[i][j] = init[i][j];
    }
    bool operator <(const possibleTable& table)const
    {
        return table.score < this->score;
    }
    void scoringMajor(int scoreTable[][14])//必修课打分函数，减去成本
    {
        for (int i = 0;i < 7;i++)
            for (int j = 0;j < 14;j++)
                if (!table[i][j])
                    score -= scoreTable[i][j];
    }
    void scoringMinor(ArrayForClass& course)//选修课打分函数，加上收益
    {
        std::set<int> allCourse;
        for (int i = 0;i < 7;i++)
            for (int j = 0;j < 14;j++)
                if (!table[i][j]&&table[i][j]!=9999){
                    allCourse.insert(table[i][j]);
                }
        for(course.iterator = course.begin;course.iterator!=course.end;course.iterator = course.iterator->next)
            if(allCourse.count(course.iterator->now->no.toInt()))//该课程被选
                score += course.iterator->now->priority;
    }
};
//Q_DECLARE_METATYPE(possibleTable)

class linkListNode
{
    friend class linkListQueue;
public:
    linkListNode()
    {
        memset(table, 0, 7 * 14 * 4);
        next = NULL;
        lessonAmount = 0;
    }
    linkListNode(linkListNode& prev)//深拷贝
    {
        for(int i=0;i<7;i++)
            for(int j = 0;j<14;j++)
                table[i][j] = prev.table[i][j];
        next = NULL;
        lessonAmount = prev.lessonAmount;
    }
    void setData(const ClassInfo info)
    {
        for(int k = 0;k<info.arrangeSize;k++)
        {
            for (int j = info.arrange[k].startUnit-1;j < info.arrange[k].endUnit;j++)
                table[info.arrange[k].weekDay-1][j] = info.no.toInt();
        }
        lessonAmount++;
    }
    int table[7][14];
    linkListNode* next;
    int lessonAmount;
};
//自定义链表================================================================================
class linkListQueue
{
public:
    linkListQueue()
    {
        front = rear = NULL;
    }
    void insert(linkListNode* node)
    {
        if (front == NULL)
            front = rear = node;
        else
        {
            rear->next = node;
            rear = node;
        }
    }
    linkListNode* getElement()
    {
        if (front == 0)
        {
            assert(false);
            return NULL;
        }
        else
        {
            linkListNode* p = front;
            front = front->next;
            return p;
        }
    }
    bool isEmpty()
    {
        return front == 0;
    }
private:
    linkListNode* front, *rear;
};

#endif // ALGORITHM_H
