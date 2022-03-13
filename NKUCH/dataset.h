#ifndef DATASET_H
#define DATASET_H
#include<QWidget>
namespace Ui { struct ClassInfo; struct arrangeInfo; struct expLessonGroups;}

static inline QString weekConv(int a){ //数字变汉字
    switch(a){
    case 1:return "一";
    case 2:return "二";
    case 3:return "三";
    case 4:return "四";
    case 5:return "五";
    case 6:return "六";
    case 7:return "日";
    default:return "?";
    }
}

struct arrangeInfo {
    int weekDay = 0;
    bool weekState[54] = {};//[1]为第一周
    int startUnit = 0;//节数，1为第一节
    int endUnit = 0;
    QString weekStateDigest;//节数文字化
    int startTime = 800;
    int endTime = 2200;
    int expLessonGroup = 0;//实验课4位代码
    int expLessonGroupNo = 0;//机房编码
    QString roomIds;
    QString rooms;

};
Q_DECLARE_METATYPE(arrangeInfo)

struct expLessonGroups {
    int id=0;//实验课4位代码
    int indexNo=1;//机房编码
    int stdCount=0;//已选人数
    int getStdCountLimit=0;//人数上限
};
Q_DECLARE_METATYPE(expLessonGroups)

struct ClassInfo
{
    int id = 0;//原生数据库主键
    QString no;//四位课号
    QString name;
    int limitCount = 0;//人数上限
    int planLimitCount = 0;//培养计划内人数上限
    int unplanLimitCount = 0;//培养计划外人数上限
    QString code;//八位课程代码，有重复值
    double credits = 0;//学分数
    int courseId = 0;//五位课程代码，是code的键值
    int startWeek = 0;
    int endWeek = 0;
    int courseTypeId = 0;//courseTypeName的键值
    //221为A，222为E，223为B，225为C，226为D，127为法学模块
    QString courseTypeName;
    QString courseTypeCode;//对应规则繁琐，弃用
    bool scheduled=true;
    bool hasTextBook=false;
    int period = 0;//学时
    int weekHour = 0;//弃用
    bool withdrawable=true;
    QString langTypeName;
    QString textbooks;
    QString teachers;
    QString teacherIds;
    QString campusCode;//01八里台，03泰达，04津南
    QString campusName;
    QString classicRemark;//弃用（null教师:0）
    QString remark;
    struct arrangeInfo arrange[12];
    struct expLessonGroups group[12];
    int arrangeSize = 0;
    int expSize = 0;
    int priority = 0;
    bool isMajor = false;
//以下为课程详情=====================================================================
    QString examType;//考核方式
    QString gradeType;//成绩记录方式
    QString intro;//课程简介
    QString enIntro;//英文简介
    QString goal;//教学目标
    QString plan;//教学安排
    QString suggestion;//要求建议
    QString reference;//参考文献
//==================================================================================
    friend bool operator==(ClassInfo _a,ClassInfo _b){
        return _a.id==_b.id;
    }
};
Q_DECLARE_METATYPE(ClassInfo)

class ArrayForClassMember {
public:
    ClassInfo* now;
    ArrayForClassMember* next;
    ArrayForClassMember* previous;
    ArrayForClassMember() {
        now = new ClassInfo;
        next = this;
        previous = 0;
    }
    ArrayForClassMember(ArrayForClassMember& m){
        now = new ClassInfo; *now = *m.now;
        next = new ArrayForClassMember; *next=*m.next;
        previous = new ArrayForClassMember; *previous=*m.previous;
    }
};

class ArrayForClass {
public:
    ArrayForClassMember* iterator;
    ArrayForClassMember* cache = 0;
    bool add() {
        cache = end;
        end = new ArrayForClassMember;
        cache->next = end;
        end->previous = cache;
        return end != 0;
    }
    ArrayForClassMember* begin;
    ArrayForClassMember* end;
    ArrayForClass() {
        begin = new ArrayForClassMember;
        end = begin;
        iterator = end;
        cache = 0;
    }
    ArrayForClass(ArrayForClass& a){
        begin = new ArrayForClassMember; *begin = *a.begin;
        end = new ArrayForClassMember; *end = *a.end;
        iterator = new ArrayForClassMember; *iterator = *a.iterator;
        cache = new ArrayForClassMember; *cache = *a.cache;
    }
    void push(ArrayForClassMember* obj){
        obj->next=obj;
        if(end!=begin){
            cache=end;
            end=new ArrayForClassMember;
            end=obj;
            cache->next = end;
            end->previous = cache;
        }
        else{
            end=new ArrayForClassMember;
            end=obj;
            end->previous=0;
            begin=end;
        }
    }
    void del(){
        if(iterator==begin){
            ArrayForClassMember*& it=begin;
            begin = begin->next;
            begin->previous=0;
            iterator=begin;
            delete it;
        }
        else if(iterator==end){
            ArrayForClassMember*& it=end;
            end = end->previous;
            end->next=end;
            iterator=end;
            delete it;
        }
        else{
            iterator->previous->next=iterator->next;
            iterator->next->previous=iterator->previous;
            ArrayForClassMember*& it=iterator;
            iterator=iterator->previous;
            delete it;
        }
    }
    ArrayForClassMember* operator ++() {
        iterator->previous = iterator;
        iterator = iterator->next;
        return iterator;
    }
    ArrayForClassMember* operator --() {
        iterator->next = iterator;
        iterator = iterator->previous;
        return iterator;
    }
};

struct Major{//用于偏好学院
    QString name;
    int priority;
};
Q_DECLARE_METATYPE(Major)

struct Teacher{//用于偏好教师
    QString name;
    QString dept;
    QString teacherId;
    int priority;
};
Q_DECLARE_METATYPE(Teacher)

struct Duration{//用于不上课时段
    int day;//1-7
    int start;//1-14
    int end;
};
Q_DECLARE_METATYPE(Duration)
#endif // DATASET_H
