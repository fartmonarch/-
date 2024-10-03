#include <iostream>
#include <cstring>

using namespace std;

class Student
{
    public:
        Student();
        Student(string , string , string , string );
        ~Student();
        Student(const Student &stu1);
        void SetStu(string, string, string, string);
        void ShowStu();

    private:
        string m_name;
        string m_ID;
        string m_college;
        string m_major;
};

class StuRoom
{
    public:
        StuRoom()
        {
            m_roomname = "һ������";
            m_roomNum = "10086";
            m_stu[0] = Student();
            m_stu[1] = Student();
            m_stu[2] = Student();
            m_stu[3] = Student();
        }

        StuRoom(string roomname, string roomNum, Student &s1, Student &s2, Student &s3, Student &s4)
        : m_roomname(roomname) , m_roomNum(roomNum)
        {
            m_stu[0] = s1;
            m_stu[1] = s2;
            m_stu[2] = s3;
            m_stu[3] = s4;
        }

        void changeRoomName(string roomname)
        {
            m_roomname = roomname;
        }
        
        void changeNum(string roomNum)
        {
            m_roomNum = roomNum;
        }

        void display()
        {
            cout << "��������:" << m_roomname << endl;
            cout << "���ҵ绰:" << m_roomNum << endl;
            cout << "���ҳ�Ա��:" << endl;
            for (int i = 0; i < 4; i++)
            {
                m_stu[i].ShowStu();
            }
        }
    private:
        string m_roomname;
        string m_roomNum;
        Student m_stu[4];
};
    Student::Student()
    {
        m_name = "С��";
        m_ID = "0000";
        m_college = "����ѧԺ";
        m_major = "�������ѧ";
    }
    Student::Student(string name, string ID, string college, string major)
    {
        m_name = name;
        m_ID = ID;
        m_college = college;
        m_major = major;
    }
    Student::~Student(){};
    void Student::SetStu(string name, string ID, string college, string major)
    {
        m_name = name;
        m_ID = ID;
        m_college = college;
        m_major = major;
    };
    void Student::ShowStu()
    {
        cout << "ѧ������:" << m_name << "  ѧ��ѧ��:" << m_ID << "  ѧ��ѧԺ:" << m_college << "  ѧ��רҵ:"
             << m_major << endl;
    }
int main()
{
    Student s1("С��", "1111", "����ѧԺ", "�������ѧ");
    Student s2("С��", "2222", "�����ѧԺ","��е");
    Student s3("С��", "3333", "����ѧԺ", "�������ѧ");
    Student s4("С��", "4444", "����ѧԺ", "Ӧ��ͳ��");
    StuRoom room1("Room 11", "12345", s1, s2, s3, s4);

    room1.display();
    system("pause");

    room1.changeRoomName("Room 22");
    room1.display();

    room1.changeNum("56789");
    room1.display();

    system("pause");
    return 0;
}