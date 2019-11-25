#include <iostream>
using namespace std;
class Time {
	public:
		Time(int h=0,int m=0,int s=0) {
			hour=h,minute=m,second=s;
		}
		void SetTime();
		void Display();
		Time operator + (Time &a);
		Time operator - (Time &a);
		friend ostream & operator<<(ostream &out,const Time &b);
	private:
		int hour,minute,second;
};
void Time::SetTime() {
	do {
		cout<<"input hour:"<<endl;
		cin>>hour;
	} while(hour<=0||hour>24);
	do {
		cout<<"input minute:"<<endl;
		cin>>minute;
	} while(minute<0||minute>=60);
	do {
		cout<<"input second:"<<endl;
		cin>>second;
	} while(second<0||second>=60);
}
void Time::Display() {
//	cout<<hour<<":"<<minute<<":"<<second<<endl;
}
Time Time::operator + (Time &a) {
	int h,m,s;
	h=hour,m=minute,s=second;
	if(second+a.second>=60) {
		s=second+a.second-60;
		m=minute+1;
	} else s=s+a.second;
	if(m+a.minute>=60) {
		m=m+a.minute-60;
		h=hour+1;
	} else m=m+a.minute;
	if(h+a.hour>24) {
		h=h+a.hour-24;
	} else h=h+a.hour;
	return(Time(h,m,s));
}
Time Time::operator - (Time &a) {
	int h,m,s;
	h=hour,m=minute,s=second;
	if(second-a.second<0) {
		s=second-a.second+60;
		m=minute-1;
	} else s=second-a.second;
	if(m-a.minute<0) {
		m=m-a.minute+60;
		h=hour-1;
	} else m=m-a.minute;
	if(h-a.hour<0) {
		h=h-a.hour+24;
	} else h=h-a.hour;
	return(Time(h,m,s));
}
ostream & operator<<(ostream &out,const Time &b){
	out<<"("<<b.hour<<':'<<b.minute<<':'<<b.second<<")";
	return out;
}
int main() {
	Time a,b,c;
	cout<<"请输入A的时间："<<endl;
	a.SetTime();
	cout<<"请输入B的时间："<<endl;
	b.SetTime();
	cout<<"A的时间为："<<a<<endl;
	a.Display();
	cout<<"B的时间为："<<b<<endl;
	b.Display();
	cout<<"c=a+b=";
	c=a+b;
	cout<<c<<endl;
	c.Display();
	cout<<endl<<"c=a-b=";
	c=a-b;
	cout<<c<<endl;
	c.Display();
	return 0;
}
