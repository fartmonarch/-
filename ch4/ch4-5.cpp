#include <iostream>
#include <string>
using namespace std;

enum CPU_Rank { P1 = 1, P2, P3, P4, P5, P6, P7 };

// CPU��
class CPU
{
public:
    CPU(CPU_Rank rank, int frequency, float voltage) 
        : m_rank(rank), m_frequency(frequency), m_voltage(voltage) {}

    ~CPU() {} 

    void display() const
    {
        cout << "CPU Rank: " << m_rank 
             << ", Frequency: " << m_frequency << " GHz"
             << ", Voltage: " << m_voltage << " V" << endl;
    }

private:
    CPU_Rank m_rank;      // CPU�ȼ�
    int m_frequency;      // CPUƵ�ʣ�GHz��
    float m_voltage;      // CPU��ѹ��V��
};

// ROM��
class ROM
{
public:
    ROM(int capacity) : m_capacity(capacity) {}

    ~ROM() {} 

    void display() const
    {
        cout << "ROM Capacity: " << m_capacity << " GB" << endl;
    }

private:
    int m_capacity; // ROM������GB��
};

// CDROM��
class CDROM
{
public:
    CDROM(int capacity) : m_capacity(capacity) {} // ʹ��������ʼ��

    ~CDROM() {} 

    void display() const
    {
        cout << "CDROM Capacity: " << m_capacity << " GB" << endl; // �޸�Ϊ��ʾ����
    }

private:
    int m_capacity; // CDROM������GB��
};

// Computer��
class Computer
{
public:
    Computer(const CPU& cpu, const ROM& rom, const CDROM& cdrom)
        : m_cpu(cpu), m_rom(rom), m_cdrom(cdrom) {}

    ~Computer() {} // ��������

    void display() const
    {
        cout << "Computer Specifications:" << endl;
        m_cpu.display();
        m_rom.display();
        m_cdrom.display();
    }

private:
    CPU m_cpu;       // CPU����
    ROM m_rom;       // ROM����
    CDROM m_cdrom;   // CDROM����
};

// ������
int main()
{
    CPU myCPU(P3, 3, 1.2f); 
    ROM myROM(256);
    CDROM myCDROM(1); 

    Computer myComputer(myCPU, myROM, myCDROM);
    myComputer.display();
    system("pause");

    return 0;
}
