#include<iostream>
using namespace std;

class binary
{
    private:
        string s;
    public:
        void display(void);
        void chk_binary(void);
        void ones_compliment(void);
};

void binary :: display()
{
    for(int i = 0; i<s.length(); i++)
    cout<<s.at(i);
}
void binary :: chk_binary()
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0' && s.at(i) == '1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}
int main()
{
    string f;
    cout<< "enter a binary number: ";
    cin>>f;
    binary b;
    b.chk_binary();
    b.display();
}
