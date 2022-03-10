#include "entry.h"
#include "nkuch.h"
#include "dataset.h"
#include <fstream>
#include <QApplication>

const char* filepath = "D:\\git\\NKUCH\\NKUCH\\course.txt";//请自行修改文件路径！

//文件读取（C风格，自底向上）============================================================================================
void reader(std::string readhead, int& saver, std::fstream& a);
void reader(std::string readhead, QString& saver, std::fstream& a);
void reader(std::string readhead, bool& saver, std::fstream& a);
void reader(std::string readhead, double& saver, std::fstream& a);
void reader(std::string readhead, bool *saver, std::fstream& a);//读weekstate用
void ReaderForClass(ClassInfo*, std::fstream& a);
void ReaderForArrangeInfo(arrangeInfo*, std::fstream& a);
void ReaderForLessonGroups(expLessonGroups*, std::fstream& a);
void inputer(ArrayForClass &arr);
const std::string COMMA = ";";

void inputer(ArrayForClass& arr)                          //对整个文件操作用
{
    std::fstream a(filepath); //读取文件选择
    std::string lessonJSONsBack = "";
    if(a.is_open()){
    a >> lessonJSONsBack;
    a >> lessonJSONsBack;
    a >> lessonJSONsBack;
    a >> lessonJSONsBack;
    }
    while (COMMA != lessonJSONsBack) { //检测是否到了lessonJSONs尾部的分号
        ReaderForClass(arr.iterator->now, a);
        a >> lessonJSONsBack; //读到上一项的},
        a >> lessonJSONsBack; //读到下一项的{
        arr.add();
        ++arr;
    }
}

void ReaderForClass(ClassInfo* kecheng, std::fstream& a) {
    reader("id", kecheng->id, a);
    reader("no", kecheng->no, a);
    reader("name", kecheng->name, a);
    reader("limitCount", kecheng->limitCount, a);
    reader("planLimitCount", kecheng->planLimitCount, a);
    reader("unplanLimitCount", kecheng->unplanLimitCount, a);
    reader("code", kecheng->code, a);
    reader("credits", kecheng->credits, a);
    reader("courseId", kecheng->courseId, a);
    reader("startWeek", kecheng->startWeek, a);
    reader("endWeek", kecheng->endWeek, a);
    reader("courseTypeId", kecheng->courseTypeId, a);
    reader("courseTypeName", kecheng->courseTypeName, a);
    reader("courseTypeCode", kecheng->courseTypeCode, a);
    reader("scheduled", kecheng->scheduled, a);
    reader("hasTextBook", kecheng->hasTextBook, a);
    reader("period", kecheng->period, a);
    reader("weekHour", kecheng->weekHour, a);
    reader("withdrawable", kecheng->withdrawable, a);
    reader("langTypeName", kecheng->langTypeName, a);
    reader("textbooks", kecheng->textbooks, a);
    reader("teachers", kecheng->teachers, a);
    reader("teacherIds", kecheng->teacherIds, a);
    reader("campusCode", kecheng->campusCode, a);
    reader("campusName", kecheng->campusName, a);
    reader("classicRemark", kecheng->classicRemark, a);
    reader("remark", kecheng->remark, a);
    std::string cache;
    a >> cache;  //读到arrangeInfo:
    a >> cache;  //读到[{ ，或者，arrangeInfo为空时，读到[],
    int i = 0;
    bool arrangeInfoEmpty = true;
    while (*(cache.end() - 1) == '{') {
        ReaderForArrangeInfo(kecheng->arrange + i, a);
        arrangeInfoEmpty = false;
        a >> cache;   //这句可以读到arrangeInfo的}],
        a >> cache;   //这句可以读到expLessonGroups
        i++;
    }
    kecheng->arrangeSize=i; //获取arrangeInfo的长度
    i = 0;
    a >> cache; // 这句读到expLessonGroups后的[]
    if(arrangeInfoEmpty)
        a >> cache;
    while (*(cache.end() - 1) == '{') {
        ReaderForLessonGroups(kecheng->group + i, a);
        a >> cache;
        i++;
    }
    kecheng->expSize=i; //获取expLessonGroups的长度
    if (i != 0)
        a.seekg(-1, std::ios::cur);
}

void ReaderForArrangeInfo(arrangeInfo* kecheng, std::fstream& a) {
    reader("weekDay", kecheng->weekDay, a);
    reader("weekState", kecheng->weekState, a);
    reader("startUnit", kecheng->startUnit, a);
    reader("endUnit", kecheng->endUnit, a);
    reader("weekStateDigest", kecheng->weekStateDigest, a);
    reader("startTime", kecheng->startTime, a);
    reader("endTime", kecheng->endTime, a);
    reader("expLessonGroup", kecheng->expLessonGroup, a);
    reader("expLessonGroupNo", kecheng->expLessonGroupNo, a);
    reader("roomIds", kecheng->roomIds, a);
    reader("rooms", kecheng->rooms, a);
}

void ReaderForLessonGroups(expLessonGroups* kecheng, std::fstream& a) {
    reader("id", kecheng->id, a);
    reader("indexNo", kecheng->indexNo, a);
    reader("stdCount", kecheng->stdCount, a);
    reader("getStdCountLimit", kecheng->getStdCountLimit, a);
}

void reader(std::string readhead, int& saver, std::fstream& a) {
    std::string actualhead;
    a >> actualhead;
    readhead += ':';
    if (actualhead == readhead) {
        //a >> saver;
        saver = 0;
        std::string cache;
        a>>cache;
        cache.pop_back();
        if(cache != "null"){
            for(int i = 0;i < (int)cache.length();i++){
                saver *= 10;
                saver += cache[i] - '0';
            }
        }
    }
}

void reader(std::string readhead, bool& saver, std::fstream& a) {
    std::string actualhead;
    a >> actualhead;
    readhead += ':';
    if (actualhead == readhead) {
        a >> actualhead;
        if (actualhead == "true,")
            saver = true;
        else if(actualhead == "false,")
            saver = false;
        else
            return;
    }
}

void reader(std::string readhead, double& saver, std::fstream& a) {
    std::string actualhead;
    a >> actualhead;
    readhead += ':';
    if (actualhead == readhead) {
        a >> saver;
        a >> actualhead;
    }
}

void reader(std::string readhead, bool* saver, std::fstream& a) {
    std::string actualhead;
    a >> actualhead;
    readhead += ':';
    char cache;
    a >> cache;                 //吃掉头部的'
    if (actualhead == readhead) {
        for (int i = 1; i < 54; i++) //***
        {
            a >> cache;
            saver[i] = cache=='1'?true:false;
        }
        a >> actualhead;        //吃掉尾部的',
    }
}

void reader(std::string readhead, QString& saver, std::fstream& a)
{
    std::string actualhead;
    std::string _saver=saver.toStdString();
    a >> actualhead;
    readhead += ':';
    if (actualhead == readhead) {
        char* temp = new char[200];
        //a.seekg(1,std::ios::cur);
        a.std::fstream::getline(temp,200);//此处用作临时变量
        actualhead = temp;
        for (int i = 2; i < int(actualhead.length() - 2) || actualhead[i] != '\''; i++) {
            _saver += actualhead[i];
        }
    }
    saver = QString::fromStdString(_saver);
}
//程序入口======================================================================
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Entry entry;
    entry.show();
    if(entry.exec()==QDialog::Accepted){
        NKUCH ch;
        ch.initPersonalInfo(entry);
        entry.close();
        inputer(ch.course); //读取课程数据库
        ch.initialize();
        ch.show();
        return a.exec();
    }
    else{
        return a.exec();
    }
}
