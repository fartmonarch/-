#include <iostream>

using namespace std;
// ��Ҫ�õ�vs ��vscode�����в��ɹ�
class intarr
{
public:
    intarr(int size) : m_size(size)
    {
        for (int i = 0; i < m_size; i++)
        {
            m_a[i] = 0;
        }
    }

    void setvalues(int value, int j)
    {
        m_a[j] = value;
    }

    void display()
    {
        for (int i = 0; i < m_size; i++)
        {
            cout << m_a[i] << ' ';
        }
        cout << endl;
    }

    void showsum()
    {
        int sum = 0;
        for (int i = 0; i < m_size; i++)
        {
            sum += m_a[i];
        }
        cout << "����Ԫ��֮��Ϊ��" << sum << endl;
    }

    void showaverage()
    {
        int sum = 0;
        for (int i = 0; i < m_size; i++)
        {
            sum += m_a[i];
        }
        cout << "ƽ��ֵΪ��" << static_cast<float>(sum) / m_size << endl;
    }

    void showmax()
    {
        int max = m_a[0];
        for (int i = 1; i < m_size; i++)
        {
            max = m_a[i] > max ? m_a[i] : max;
        }
        cout << "���ֵΪ��" << max << endl;
    }

    void showmin()
    {
        int min = INT_MAX;
        for (int i = 0; i < m_size; i++)
        {
            min = m_a[i] < min ? m_a[i] : min;
        }
        cout << "��СֵΪ��" << min << endl;
    }

    ~intarr() {}

private:
    int m_a[10];
    int m_size;
};

int main()
{
    int n;
    cout << "��������Ҫ���뼸���������10������";
    cin >> n;

    if (n < 1 || n > 10)
    {
        cout << "������һ���� 1 �� 10 ֮������֣�" << endl;
        return 1;
    }

    intarr a(n);
    cout << "������Ҫ���������������";
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        a.setvalues(value, i);
    }

    a.display();
    a.showsum();
    a.showaverage();
    a.showmax();
    a.showmin();

    return 0;
}
