#include<iostream>
using namespace std;
class Time
{
    double hr,min,sec,totHr,totMin,totSec;
    public:
        void SetTime()
        {
            cout<<"Enter the Hours : ";
            cin>>hr;
            cout<<"Enter the Minutes : ";
            cin>>min;
            cout<<"Enter the Seconds : ";
            cin>>sec;
        }
        void calculateTime()
        {
            totHr=hr*3600;
            totMin=min*60;
            totSec= sec + totHr + totMin;
        }
        void TotTimeInSec()
        {
            if(hr<10 || min<10 || sec<10)
            {
                if( min<10 )
                {
                    if (sec<10)
                    {
                        cout<<"The time is = 0"<<hr<<":"<<"0"<<min<<":"<<"0"<<sec<<endl;
                        cout<<"Time in total seconds:"<<totSec;
                    }
                    else
                    {
                        cout<<"The time is = 0"<<hr<<":"<<"0"<<min<<":"<<sec<<endl;
                        cout<<"Time in total seconds:"<<totSec;
                    }
                }
                else
                {
                    cout<<"The time is = 0"<<hr<<":"<<min<<":"<<"0"<<sec<<endl;
                    cout<<"Time in total seconds:"<<totSec;
                }
                
            }
            else
            {
                cout<<"The time is = "<<hr<<":"<<min<<":"<<sec<<endl;
                cout<<"Time in total seconds:"<<totSec;
            }
        }

};
int main()
{
    Time t;
    t.SetTime();
    t.calculateTime();
    t.TotTimeInSec();
    return 0;
}
