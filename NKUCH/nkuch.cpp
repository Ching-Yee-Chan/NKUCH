#include "nkuch.h"
#include "ui_nkuch.h"

inline int campusConv(QString s){ //校区编号变整数
    if(s=="01") return 0;
    else if(s=="03") return 2;
    else if(s=="04") return 1;
    else return -1;
}

inline QString majorConv(QString s){ //把开课单位名转换成相应的四位英文代码
    if(s=="通识选修课") return "UPEC";
    else if(s=="公共英语教学部") return "ENTD";
    else if(s=="马克思主义基础理论教学部") return "IPTD";
    else if(s=="高等数学教学部") return "AMTD";
    else if(s=="人工智能学院") return "ARIN";
    else if(s=="商学院") return "BUSI";
    else if(s=="化学学院") return "CHEM";
    else if(s=="汉语言文化学院") return "CHIN";
    else if(s=="经济学院") return "ECON";
    else if(s=="计算机学院") return "COMP";
    else if(s=="公共计算机基础教学部") return "COTD";
    else if(s=="网络空间安全学院") return "CSSE";
    else if(s=="电子信息与光学工程学院") return "ELEC";
    else if(s=="环境科学与工程学院") return "ENVI";
    else if(s=="金融学院") return "FINA";
    else if(s=="外国语学院") return "FORE";
    else if(s=="周恩来政府管理学院") return "GOVE";
    else if(s=="法学院") return "LAWS";
    else if(s=="历史学院") return "HIST";
    else if(s=="生命科学学院") return "LIFE";
    else if(s=="文学院") return "LITE";
    else if(s=="数学科学学院") return "MATH";
    else if(s=="材料科学学院") return "MATE";
    else if(s=="军事教研室") return "MITD";
    else if(s=="马克思主义学院") return "MARX";
    else if(s=="医学院") return "MEDS";
    else if(s=="物理科学学院") return "PHYS";
    else if(s=="药学院") return "PHAR";
    else if(s=="哲学院") return "PHIL";
    else if(s=="旅游与服务学院") return "TOUR";
    else if(s=="统计与数据科学学院") return "STAT";
    else if(s=="软件学院") return "SOFT";
    else if(s=="天津大学管理与经济学部") return "TUDD";
    else if(s=="体育部") return "PETDS";
    else return "UPEC";
}

inline QString majorToWord(QString s){ //把四位英文代码转换成文字
    if(s=="UPEC") return "通识选修课";
    else if(s=="ENTD") return "公共英语教学部";
    else if(s=="IPTD") return "马克思主义基础理论教学部";
    else if(s=="AMTD") return "高等数学教学部";
    else if(s=="ARIN") return "人工智能学院";
    else if(s=="BUSI") return "商学院";
    else if(s=="CHEM") return "化学学院";
    else if(s=="CHIN") return "汉语言文化学院";
    else if(s=="ECON") return "经济学院";
    else if(s=="COMP") return "计算机学院";
    else if(s=="COTD") return "公共计算机基础教学部";
    else if(s=="CSSE") return "网络空间安全学院";
    else if(s=="ELEC") return "电子信息与光学工程学院";
    else if(s=="ENVI") return "环境科学与工程学院";
    else if(s=="FINA") return "金融学院";
    else if(s=="FORE") return "外国语学院";
    else if(s=="GOVE") return "周恩来政府管理学院";
    else if(s=="LAWS") return "法学院";
    else if(s=="HIST") return "历史学院";
    else if(s=="LIFE") return "生命科学学院";
    else if(s=="LITE") return "文学院";
    else if(s=="MATH") return "数学科学学院";
    else if(s=="MATE") return "材料科学学院";
    else if(s=="MITD") return "军事教研室";
    else if(s=="MARX") return "马克思主义学院";
    else if(s=="MEDS") return "医学院";
    else if(s=="PHYS") return "物理科学学院";
    else if(s=="PHAR") return "药学院";
    else if(s=="PHIL") return "哲学院";
    else if(s=="TOUR") return "旅游与服务学院";
    else if(s=="STAT") return "统计与数据科学学院";
    else if(s=="SOFT") return "软件学院";
    else if(s=="TUDD") return "天津大学管理与经济学部";
    else if(s=="PETDS") return "体育部";//其实没有体育
    else return "通识选修课";
}

NKUCH::NKUCH(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NKUCH)
{
    ui->setupUi(this);
}

NKUCH::~NKUCH()
{
    delete ui;
}

void NKUCH::initPersonalInfo(Entry& entry)
{
    grade=entry.grade;
    major=entry.major;
    subMajor=entry.subMajor;
    campus=entry.campus;
    intercampus=entry.intercampus;
}

void NKUCH::initialize()
{
    QString temp = major+" "+subMajor+" 大"+weekConv(grade)+" ";
    switch(campus){
    case 1:{temp+="津南校区";break;}
    case 2:{temp+="泰达校区";break;}
    default:{temp+="八里台校区";break;}
    }
    ui->info->setText(temp);
    ui->intercampus->setChecked(this->intercampus);
    resExec=false;
    searchExec=false;
    entryExec=false;
}
//参数值读取================================================================================================================
void NKUCH::getArgs()
{
    majorWeight = (double)(ui->majorPref->value())/100;
    teacherWeight = (double)(ui->teacherPref->value())/100;
    myMajorLoyalty = ui->myMajorLoyalty->value();
    otherMajorDecline = ui->otherMajorDecline->value();
    ECoursePref = ui->ECoursePref->value();
}
//读取学院偏好==============================================================================================================
void NKUCH::getPrefMajor()
{
    for(int i=0;i<ui->majorList->count();i++){ //遍历偏好专业列表
        int val=ui->majorList->item(i)->data(Qt::UserRole).value<Major>().priority;
        QString obj=majorConv(ui->majorList->item(i)->data(Qt::UserRole).value<Major>().name);
        for(course.iterator=course.begin;course.iterator!=course.end;course.iterator=course.iterator->next)
            if(course.iterator->now->code.indexOf(obj)>=0)
                course.iterator->now->priority+=val*majorWeight;
    }
}
//读取教师偏好
void NKUCH::getPrefTeacher()
{
    for(int i=0;i<ui->teacherList->count();i++){ //遍历偏好教师列表
        int val=ui->teacherList->item(i)->data(Qt::UserRole).value<Teacher>().priority;
        QString obj=ui->teacherList->item(i)->data(Qt::UserRole).value<Teacher>().teacherId;
        for(course.iterator=course.begin;course.iterator!=course.end;course.iterator=course.iterator->next)
            if(course.iterator->now->teacherIds.indexOf(val)>=0)
                course.iterator->now->priority+=val*teacherWeight;
    }
}
//读取选定课程
void NKUCH::getPrefCourse()
{
    for(int i=0;i<ui->courseList->count();i++){
        ClassInfo temp = ui->courseList->item(i)->data(Qt::UserRole).value<ClassInfo>();
        for(course.iterator=course.begin;course.iterator!=course.end;course.iterator=course.iterator->next)
            if(course.iterator->now->id == temp.id){
                course.iterator->now->isMajor = temp.isMajor;
                course.iterator->now->priority += temp.priority;
            }
    }
}
//不上课时段作为编号9999的必修课加入===============================================================================================
void NKUCH::spareTimeInit()
{
    for(int i=0;i<ui->exceptionList->count();i++){
        Duration temp=ui->exceptionList->item(i)->data(Qt::UserRole).value<Duration>();
        ClassInfo _temp;
        _temp.no=QString::number(9999);
        _temp.arrangeSize = 1;
        _temp.arrange[0].weekDay = temp.day;
        _temp.arrange[0].startUnit = temp.start;
        _temp.arrange[0].endUnit = temp.end;
        _temp.isMajor = true;
        std::vector<ClassInfo> tempVector;
        tempVector.push_back(_temp);
        majorList.push_back(tempVector);
    }
}
//读取选修课、必修课清单
void NKUCH::getCourseList()
{
    for(course.iterator=course.begin;course.iterator!=course.end;course.iterator=course.iterator->next){
        ClassInfo temp = *(course.iterator->now);
        if(temp.isMajor){//必修课，加入必修课清单
            bool find = false;
            for(int i = 0;i<majorList.size();i++){
                if(majorList[i][0].code == temp.code){//同一门课，不同老师
                    majorList[i].push_back(temp);
                    find = true;
                    break;
                }
            }
            if(find) continue;
            std::vector<ClassInfo> tempVector;
            tempVector.push_back(temp);
            majorList.push_back(tempVector);
        }
        else{
            if(temp.courseTypeName == E_COURSE) temp.priority += ECoursePref;//E类课增益
            if(temp.code.indexOf(majorConv(major))>=0){
                if(temp.courseTypeName==D_COURSE){//专业选修课，加分
                    temp.priority += myMajorLoyalty;
                }
                else if(!temp.isMajor&&temp.courseTypeName!=E_COURSE){//本专业必修课，且不是本学期安排的必修课，排除
                    temp.priority = 0;
                }
            }
            else if(temp.courseTypeName!=E_COURSE){//其他专业专业课，减分
                temp.priority -= otherMajorDecline;
            }
            if(temp.priority&&temp.id) minorList.push_back(temp);//加入选修课心愿单
        }
    }
}
//生成各时段分数最高选修课表（机会成本）=============================================================================
void NKUCH::costTableInit()
{
    memset(costTable, 0, 7 * 14 * 4);
    for (int i = 0;i<minorList.size();i++)
        for(int j = 0;j<minorList[i].arrangeSize;j++)
            for(int k=minorList[i].arrange[j].startUnit-1;k<minorList[i].arrange[j].endUnit;k++)
                if (minorList[i].priority > costTable[minorList[i].arrange[j].weekDay - 1][j])
                    costTable[minorList[i].arrange[j].weekDay - 1][j] = minorList[i].priority;
}
//核心算法一：必修课候选课表生成======================================================================================
void NKUCH::generateMajor()
{
    int tableCount=0; //生成课表的数目
    linkListQueue QUEUE;
    linkListNode* p = new linkListNode();
    QUEUE.insert(p);
    while (!QUEUE.isEmpty())
    {
        linkListNode* p = QUEUE.getElement(); //出队并返回该值
        int i = p->lessonAmount;
        for (std::vector<ClassInfo>::iterator it = majorList[i].begin();it < majorList[i].end();++it) //逐个必修课遍历
        {
            bool judge = true;//判断变量，false为冲突
            for(int i = 0;i<it->arrangeSize&&judge;i++)
            {
                for(int j = it->arrange[i].startUnit-1;j<it->arrange[i].endUnit;j++)
                    if(p->table[it->arrange[i].weekDay-1][j])
                    {
                        judge = false;
                        break;
                    }
            }
            if (judge) //不冲突的场合
            {
                linkListNode* p1 = new linkListNode(*p);
                p1->setData(*it); //注：同时lessonAmount++
                if(tableCount>=ui->maxRes->value()) return;
                else if (p1->lessonAmount == majorList.size())
                { //注：tableCount超过课表生成数上限limit时，不再新增课程
                    possibleTable m(p1->table);
                    m.scoringMajor(costTable);
                    majorResult.push(m); //计数接口处
                    tableCount++;
                }
                else
                    QUEUE.insert(p1);
            }
        }
        delete p;
    }
}
//核心算法二：加入选修课===============================================================================
void NKUCH::generateMinor()
{
    std::priority_queue<possibleTable> queue;
    while(!majorResult.empty())
    {
        possibleTable temp = majorResult.top();
        majorResult.pop();
        for(int i=0;i<minorList.size();i++){
            std::set<int> buffer;//待定课程回收站
            double score = 0;
            int count = 0;//总冲突课时数
            bool canReplace = true;
            for(int j = 0;j<minorList[i].arrangeSize;j++)
                for(int k = minorList[i].arrange[j].startUnit-1;k<minorList[i].arrange[j].endUnit;k++)
                    if(temp.table[minorList[i].arrange[j].weekDay-1][k]){//有课
                        int no = temp.table[minorList[i].arrange[j].weekDay-1][k];
                        ClassInfo info;
                        if(no!=9999){//不上课时段被排除，一定可以找到
                            for(course.iterator = course.begin;course.iterator!=course.end;course.iterator = course.iterator->next){
                                if(course.iterator->now->no.toInt()==no){
                                    info = *(course.iterator->now);
                                }
                            }
                        }
                        if(no==9999||info.isMajor){//不上课时段或必修课，标记
                            canReplace = false;
                        }
                        else{
                            score += info.priority/((double)info.period/(info.endWeek-info.startWeek+1));
                            buffer.insert(no);
                            count++;
                        }
                    }
            if(!canReplace) continue;//不上课时段或必修课，跳过
            double initScore = count?score/count:0;
            double newScore = (double)minorList[i].priority/((double)minorList[i].period/(minorList[i].endWeek-minorList[i].startWeek+1));
            if(newScore>initScore){
                for(int row = 0;row<7;row++)
                    for(int col = 0;col<14;col++)
                        if(buffer.find(temp.table[row][col])!=buffer.end())//在集合中
                            temp.table[row][col] = 0;//删除这些课程
                for(int j = 0;j<minorList[i].arrangeSize;j++)
                    for(int k = minorList[i].arrange[j].startUnit-1;k<minorList[i].arrange[j].endUnit;k++)
                        temp.table[minorList[i].arrange[j].weekDay-1][k] = minorList[i].no.toInt();
            }
        }
        //选修课添加完毕，开始排序
        temp.scoringMinor(course);
        queue.push(temp);
    }
    //排序完毕，将结果输出至minorResult
    while(!queue.empty())
    {
        minorResult.push_back(queue.top());
        queue.pop();
    }
}
//界面响应函数=======================================================================================
//偏好学院
void NKUCH::on_majorPush_clicked()
{
    Qitem *obj=new Qitem;
    if(ui->majorPf->currentIndex()){
        for(int i=0;i<ui->majorList->count();i++){ //查找表中是否已经包含该对象
            if(ui->majorList->item(i)->text().split(' ')[0]==ui->majorPf->currentText()){
                QMessageBox::StandardButton response =
                        QMessageBox::question(this,"重复","该课程已在列表中，是否修改分数？", QMessageBox::Yes | QMessageBox::Cancel, QMessageBox::Yes);
                if(response == QMessageBox::Yes)
                    obj = ui->majorList->item(i);
                else return;
            }
        }
        Major temp={ui->majorPf->currentText(),ui->majorNum->value()};
        obj->setData(Qt::UserRole,QVariant::fromValue(temp));
        obj->setText(temp.name+" "+QString::number(temp.priority)); //设置显示标题
        if(ui->majorList->selectedItems().empty()) //判定所选对象是否为空
            ui->majorList->addItem(obj);
        else
            ui->majorList->insertItem(ui->majorList->currentRow(),obj);
    }
}

void NKUCH::on_majorPop_clicked()
{
    if(!ui->majorList->selectedItems().empty())
        ui->majorList->takeItem(ui->majorList->currentRow());
}

void NKUCH::on_majorRate_clicked()
{
    if(!ui->majorList->selectedItems().empty()){
        QString str=ui->majorList->currentItem()->data(Qt::UserRole).value<Major>().name;
        Major temp={str,ui->majorNum->value()};
        ui->majorList->currentItem()->setData(Qt::UserRole,QVariant::fromValue(temp));
        ui->majorList->currentItem()->setText(temp.name+" "+QString::number(temp.priority));//设置显示标题
    }
}
//偏好教师~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void NKUCH::on_teacherPush_clicked()
{
    QString name=ui->teacherPf->toPlainText();
    if(name!=""){
        QVector<Teacher> teachers;
        Teacher temp;
        for(course.iterator=course.begin;course.iterator!=course.end;course.iterator=course.iterator->next){//检查该老师是否存在
            if(course.iterator->now->teachers.indexOf(name)>=0){
                QString dept = majorToWord(course.iterator->now->code.left(4));
                Teacher temp = {course.iterator->now->teachers, dept, course.iterator->now->teacherIds, 0};
                bool found = false;
                for(int i=0;i<teachers.size();i++){
                    if(temp.teacherId==teachers[i].teacherId){
                        found = true;
                        break;
                    }
                }
                if(!found)
                    teachers.append(temp);
            }
        }
        course.iterator=course.begin;
        if(teachers.empty()){
            QMessageBox::warning(this,"注意","该老师不存在，或是本学期没有安排课程。",QMessageBox::Ok);
            return;
        }
        if(teachers.size() == 1)
            temp = teachers[0];
        else
        {
            TeacherSearch resultTable;
            resultTable.initialize(teachers);
            resultTable.show();
            if(resultTable.exec()==QDialog::Accepted)
            {
                temp = resultTable.chosen;
            }
        }
        temp.priority = ui->teacherNum->text().toInt();
        Qitem *obj=new Qitem;
        for(int i=0;i<ui->teacherList->count();i++){ //查找表中是否已经包含该对象
            if(ui->teacherList->item(i)->text().split(' ')[1]==temp.teacherId){
                QMessageBox::StandardButton response =
                        QMessageBox::question(this,"重复","该教师已在列表中，是否修改分数？", QMessageBox::Yes | QMessageBox::Cancel, QMessageBox::Yes);
                if(response == QMessageBox::Yes)
                    obj = ui->teacherList->item(i);
                else return;
            }
        }
        obj->setData(Qt::UserRole,QVariant::fromValue(temp));
        obj->setText(temp.name+" "+temp.teacherId+" "+QString::number(temp.priority)+" "+temp.dept);//设置显示标题
        if(ui->teacherList->selectedItems().empty()) //判定所选对象是否为空
            ui->teacherList->addItem(obj);
        else
            ui->teacherList->insertItem(ui->teacherList->currentRow(),obj);
    }
    else QMessageBox::warning(this, "提示", "教师姓名不能为空！", QMessageBox::Ok);
}

void NKUCH::on_teacherRate_clicked()
{
    if(!ui->teacherList->selectedItems().empty()){
        Teacher temp = ui->teacherList->currentItem()->data(Qt::UserRole).value<Teacher>();
        temp.priority = ui->teacherNum->text().toInt();
        ui->teacherList->currentItem()->setData(Qt::UserRole,QVariant::fromValue(temp));
        ui->teacherList->currentItem()->setText(temp.name+" "+temp.teacherId+" "+QString::number(temp.priority)+" "+temp.dept);//设置显示标题
    }
}

void NKUCH::on_teacherPop_clicked()
{
    if(!ui->teacherList->selectedItems().empty())
        ui->teacherList->takeItem(ui->majorList->currentRow());
}
//不上课时段~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~·~~~~~~~
void NKUCH::on_exceptionPush_clicked()
{
    int day=ui->week->currentIndex()+1;
    int start=ui->start->currentIndex()+1;
    int end;
    if(ui->end->currentIndex()==0) end=start;
    else end=ui->end->currentIndex();
    Duration dur={day,start,end};
    Qitem *obj=new Qitem;
    obj->setData(Qt::UserRole,QVariant::fromValue(dur)); //注：自定义结构体不能直接setData
    for(int i=0;i<ui->exceptionList->count();i++) //查重
    {
        Duration _dur=ui->exceptionList->item(i)->data(Qt::UserRole).value<Duration>();
        int _day=_dur.day;
        if(_day==dur.day){
            int _start=_dur.start;
            int _end=_dur.end;
            if((_start<=start&&start<=_end+1)||(_start-1<=end&&end<=_end)){ //合并两个具有交集的时段
                int __start=_start>start?start:_start;
                int __end=_end<end?end:_end;
                Duration temp{_day,__start,__end};
                ui->exceptionList->item(i)->setData(Qt::UserRole,QVariant::fromValue(temp));
                if(__start!=__end) ui->exceptionList->item(i)->setText("星期"+weekConv(day)+" "+QString::number(__start)+"-"+QString::number(__end)+"节");
                else ui->exceptionList->item(i)->setText("星期"+weekConv(day)+" "+QString::number(__start)+"节");
                return;
            }
        }
    }
    if(start!=end) obj->setText("星期"+weekConv(day)+" "+QString::number(start)+"-"+QString::number(end)+"节");
    else obj->setText("星期"+weekConv(day)+" "+QString::number(start)+"节");
    if(ui->exceptionList->selectedItems().empty()) //判定所选对象是否为空
        ui->exceptionList->addItem(obj);
    else
        ui->exceptionList->insertItem(ui->exceptionList->currentRow(),obj);
}

void NKUCH::on_exceptionPop_clicked()
{
    if(!ui->exceptionList->selectedItems().empty())
        ui->exceptionList->takeItem(ui->exceptionList->currentRow());
}

void NKUCH::on_exceptionClear_clicked()
{
    ui->exceptionList->clear();
}
//周末不上课按钮
void NKUCH::on_exceptionWeekend_clicked()
{
    //先把原有的周末时段全部删除
    std::stack<int> del;
    for(int i=0;i<ui->exceptionList->count();i++)
    {
        if(ui->exceptionList->item(i)->data(Qt::UserRole).value<Duration>().day>=6)
            del.push(i);
    }
    while(!del.empty())
    {
        ui->exceptionList->takeItem(del.top());
        del.pop();
    }
    //插入新的周末时段
    Duration temp{6,1,14};
    Qitem *obj=new Qitem;
    obj->setData(Qt::UserRole,QVariant::fromValue(temp));
    obj->setText("星期六 1-14节");
    ui->exceptionList->addItem(obj);
    temp = {7,1,14};
    obj = new Qitem;
    obj->setData(Qt::UserRole,QVariant::fromValue(temp));
    obj->setText("星期日 1-14节");
    ui->exceptionList->addItem(obj);
}
//中午不上课按钮
void NKUCH::on_exceptionNoon_clicked()
{
    noClassInRange(5, 6);
}
//晚八以后不上课按钮
void NKUCH::on_exceptionNight_clicked()
{
    noClassInRange(13, 14);
}
//早八不上课按钮
void NKUCH::on_exceptionMorning_clicked()
{
    noClassInRange(1, 1);
}

void NKUCH::noClassInRange(int begin, int end)
{
    for(int day=1;day<8;day++){
        Duration dur={day,begin,end};
        Qitem *obj=new Qitem;
        for(int i=0;i<ui->exceptionList->count();i++) //开始遍历
        {
            Duration _dur=ui->exceptionList->item(i)->data(Qt::UserRole).value<Duration>();
            int _day=_dur.day;
            if(_day==dur.day){
                int _start=_dur.start;
                int _end=_dur.end;
                if((_start<=begin&&begin<=_end+1)||(_start-1<=end&&end<=_end)){ //合并两个具有交集的时段
                    Duration temp{_day,_start>begin?begin:_start,_end<end?end:_end};
                    ui->exceptionList->item(i)->setData(Qt::UserRole,QVariant::fromValue(temp));
                    ui->exceptionList->item(i)->setText("星期"+weekConv(day)+" "+QString::number(_start>begin?begin:_start)+"-"+QString::number(_end<end?end:_end)+"节");
                    delete obj;
                    goto label1;
                }
            }
        }
        obj->setData(Qt::UserRole,QVariant::fromValue(dur));
        obj->setText("星期"+weekConv(day)+" "+QString::number(begin)+"-"+QString::number(end)+"节");
        ui->exceptionList->addItem(obj);
        label1:;
    }
}
//必修课选课====================================================================================================
void NKUCH::on_search_clicked()
{
    if(searchExec){
        QMessageBox::warning(this,"警告","请不要同时打开两个相同的窗口。",QMessageBox::Ok);
        return;
    }
    searchExec=true;
    search sec(this);
    sec.campus0=(campus==0);
    sec.campus1=(campus==1);
    sec.campus2=(campus==2);
    sec.intercampus=intercampus;
    sec.course=course;
    sec.initialize();
    if(sec.exec()==QDialog::Accepted){
        QStack<ClassInfo> result=sec.res;
        sec.close();
        while(!result.empty())
        {
            ClassInfo temp = result.top();
            result.pop();
            Qitem *obj=new Qitem;
            QString text=QString::number(temp.priority)+" "
                    +temp.name+" "+temp.teachers
                    +" "+QString::number(temp.startWeek)+"-"+QString::number(temp.endWeek)+"周 ";
        for(int i=0;i<temp.arrangeSize;i++)
            if(temp.arrange[i].startUnit!=temp.arrange[i].endUnit)
            text+= "周"+weekConv(temp.arrange[i].weekDay)
                   +QString::number(temp.arrange[i].startUnit)+"-"+QString::number(temp.arrange[i].endUnit)+"节 ";
            else text+= "周"+weekConv(temp.arrange[i].weekDay)
                   +QString::number(temp.arrange[i].startUnit)+"节 ";
        text+=temp.courseTypeName+" "+temp.campusName;
        obj->setData(Qt::UserRole,QVariant::fromValue(temp));
        obj->setText(text);
        ui->courseList->addItem(obj);  //添加新课程
        searchExec=false;
        }
    }
    else{
        searchExec=false;
        sec.close();
    }
}

void NKUCH::on_courseRate_clicked()
{
    if(!ui->courseList->selectedItems().empty()){
        ClassInfo dup=ui->courseList->currentItem()->data(Qt::UserRole).value<ClassInfo>();
        dup.priority=ui->courseNum->value();
        QString text=QString::number(dup.priority)+" "
                    +dup.name+" "+dup.teachers
                    +" "+QString::number(dup.startWeek)+"-"+QString::number(dup.endWeek)+"周 ";
        for(int i=0;i<dup.arrangeSize;i++)
            if(dup.arrange[i].startUnit!=dup.arrange[i].endUnit)
            text+= "周"+weekConv(dup.arrange[i].weekDay)
                   +QString::number(dup.arrange[i].startUnit)+"-"+QString::number(dup.arrange[i].endUnit)+"节 ";
            else text+= "周"+weekConv(dup.arrange[i].weekDay)
                   +QString::number(dup.arrange[i].startUnit)+"节 ";
        text+=dup.courseTypeName+" "+dup.campusName;
        ui->courseList->currentItem()->setData(Qt::UserRole,QVariant::fromValue<ClassInfo>(dup)); //赋分操作
        ui->courseList->currentItem()->setText(text);
    }
}

void NKUCH::on_coursePop_clicked()
{
    if(!ui->courseList->selectedItems().empty())
        ui->courseList->takeItem(ui->courseList->currentRow());
}
//其他小的响应函数=================================================================================================
void NKUCH::on_intercampus_stateChanged(int arg1)
{
    intercampus=ui->intercampus->isChecked();
}

void NKUCH::on_start_currentIndexChanged(int index)
{
    if(ui->end->currentIndex()!=0 && index>=ui->end->currentIndex())
        ui->end->setCurrentIndex(0);
}

void NKUCH::on_end_currentIndexChanged(int index)
{
    if(index!=0 && index<=ui->start->currentIndex())
        ui->end->setCurrentIndex(0);
}

void NKUCH::on_cancel_clicked()
{
    QApplication::quit();
}

void NKUCH::on_reChoose_clicked()
{
    if(entryExec){
        QMessageBox::warning(this,"警告","请不要同时打开两个相同的窗口。",QMessageBox::Ok);
        return;
    }
    entryExec=true;
    Entry ent;
    ent.grade=grade;
    ent.major=major;
    ent.subMajor=subMajor;
    ent.campus=campus;
    ent.intercampus=intercampus;
    ent.show();
    if(ent.exec()==QDialog::Accepted){
        grade=ent.grade;
        major=ent.major;
        subMajor=ent.subMajor;
        campus=ent.campus;
        intercampus=ent.intercampus;
        ent.close();
        initialize();
        entryExec=false;
    }
    else{
        entryExec=false;
        ent.close();
    }
}

void NKUCH::refresh()
{
    for(course.iterator = course.begin;course.iterator != course.end;course.iterator = course.iterator->next)
        course.iterator->now->priority = 0;
    resExec = false;
}
//启动！=======================================================================================================
void NKUCH::on_run_clicked()
{
    if(resExec){ //防止同时打开两个生成窗口
        QMessageBox::warning(this,"警告","请不要同时打开两个相同的窗口。",QMessageBox::Ok);
        return;
    }
    if(ui->courseList->size().isEmpty()){
        QMessageBox::warning(this,"警告","必修课表不能为空！",QMessageBox::Ok);
        return;
    }
    resExec=true;
    //渲染加载窗口
    Loading* loading = new Loading();
    loading->show();
    //调用视图层与逻辑层接口
    getArgs();
    getPrefMajor();
    getPrefTeacher();
    getPrefCourse();
    spareTimeInit();
    //核心算法所需数据准备
    getCourseList();
    costTableInit();
    //核心算法
    generateMajor();
    if(majorResult.empty()){
        QMessageBox::warning(this,"警告","没有满足条件的课程！",QMessageBox::Ok);
        refresh();
        return;
    }
    generateMinor();
    //运算结束，关闭加载提示框
    loading->close();
    this->show();
    //显示结果
    ShowResult resWin;
    resWin.initialize(minorResult, course);
    if(resWin.exec()==QDialog::Accepted){ //关闭窗口的处理
        int i=0;
    }
    else{
        refresh();
    }

}
