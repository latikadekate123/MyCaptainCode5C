#include <iostream>
#include <iomanip>
 
using namespace std;
 
class Time
{
    private:
        int seconds,hh,mm,ss;
    public:
        void getTime(void)
        {
            cout<<"\n Enter Time: \n";
            cout<<" Hours? ";          
            cin>>hh;
            cout<<" Minutes? ";          
            cin>>mm;
            cout<<" Seconds? ";          
            cin>>ss;
        }
        void convertSeconds(void)
        {
            seconds=hh*3600+mm*60+ss;
        }
        void displayTime(void)
        {
            cout<<" The time is = "<<setw(2)<<setfill('0')<<hh<<":"
                                     <<setw(2)<<setfill('0')<<mm<<":"
                                     <<setw(2)<<setfill('0')<<ss<<endl;
            cout<<" Time in total seconds: "<<seconds;
        }
}; 
 
int main()
{
    Time T; 
    T.getTime();
    T.convertSeconds();
    T.displayTime();
    return 0;
}
