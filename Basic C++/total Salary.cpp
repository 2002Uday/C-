#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    double totalSalary,basic,hra,da,allow,pf;
    char grade;
    cin>>basic;
    cin>>grade;
    hra = (basic * 20) / 100;
    da = (basic * 50) /100;
    pf = (basic * 11) / 100;
    if (grade == 'A'){
        allow = 1700;
    }
    else if (grade == 'B'){
        allow = 1500;
    }
    else if (grade == 'C'){
        allow = 1300;
    }
    else{
        allow = 1300;
    }
    totalSalary = basic+hra+da+allow-pf;
    cout<<round(totalSalary);
}
