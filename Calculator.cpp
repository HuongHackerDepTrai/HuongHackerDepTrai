	#include <iostream>
	#include <conio.h>
	#include <time.h>
	#include <math.h>
	#include <dos.h> 
	#include <windows.h>
	using namespace std;
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD CursorPosition;
	int enemyY[3];
	int enemyX[3];
	int enemyFlag[3];
	void gotoxy(int x, int y){
		CursorPosition.X = x;
		CursorPosition.Y = y;
		SetConsoleCursorPosition(console, CursorPosition);
	}
void NormalMath(){
	system("cls");
	system("color f1");
	double so[255],kq,ns[254];
	gotoxy(0,5);cout<<"±--±--±--±--±--±--±--±--±--±--±--±";
	char dau,sl=0;
	int d[254];
	gotoxy(40,2);cout<<"   y_";
	gotoxy(40,2);cout<<"V: Vx";
	gotoxy(40,3);cout<<"^: x^y";
	gotoxy(40,4);cout<<"C: cos(x)";
	gotoxy(40,5);cout<<"S: sin(x)";
	gotoxy(40,6);cout<<"T: tan(x)";
	gotoxy(40,7);cout<<"L: log(x)";
	gotoxy(40,8);cout<<"|: |x|";
	gotoxy(40,9);cout<<"!: x!";
   gotoxy(40,10);cout<<"n: PI";
   gotoxy(40,11);cout<<"e: e";
   gotoxy(40,12);cout<<"%: x%";
	gotoxy(3,1);cout<<"X [1] = ";cin>>so[0];kq=so[0];
	for(int i=1;i<255;i++)
	{
		gotoxy(3,2);cout<<"   ";
		gotoxy(3,2);cin>>dau;d[i-1]=dau;
		if(dau=='+')	 {gotoxy(11,1);cout<<"            ";gotoxy(6,1);cout<<i+1<<"] = ";cin>>so[i];kq=kq+so[i];}
		else if(dau=='-'){gotoxy(11,1);cout<<"            ";gotoxy(6,1);cout<<i+1<<"] = ";cin>>so[i];kq=kq-so[i];}
		else if(dau=='*'){gotoxy(11,1);cout<<"            ";gotoxy(6,1);cout<<i+1<<"] = ";cin>>so[i];kq=kq*so[i];}
		else if(dau=='/'){gotoxy(11,1);cout<<"            ";gotoxy(6,1);cout<<i+1<<"] = ";cin>>so[i];kq=kq/so[i];}
		else if(dau=='^'){int somu;gotoxy(3,3);cin>>somu;i--;gotoxy(3,3);cout<<"   ";so[i]=pow(so[i],somu);}
		else if(dau=='V'||dau=='v'){
			i--;
			so[i]=sqrt(so[i]);
		}
		else if(dau=='L'||dau=='L'){
			i--;
			so[i]=log(so[i]);
		}
		else if(dau=='C'||dau=='c'){
			i--;
			so[i]=cos(so[i]);
		}
		else if(dau=='S'||dau=='s'){
			i--;
			so[i]=sin(so[i]);
		}
		else if(dau=='T'||dau=='t'){
			i--;
			so[i]=tan(so[i]);
		}
		else if(dau=='|'){
			i--;
			so[i]=abs(so[i]);
		}
		else if(dau=='!'){
			i--;int h=so[i];
			for(int j=1;j<h;j++)so[i]=so[i]*j;
		}
		else if(dau=='n'||dau=='N'){
			i--;
			so[i]=M_PI;
		}
		else if(dau=='e'||dau=='E'){
			i--;
			so[i]=M_E;
		}
		else if(dau=='%'){
			i--;
			so[i]=so[i]/100;
		}
		else if(dau=='='){
			gotoxy(5,2);cout<<kq;
			getche();
			break;
		}
	}
}
void TTPhanSo(){	
	system("cls");
	system("color f2");
	double tu[255],mau[255],kq=0,h=0;
	int n=2,d[127];char dau;
	gotoxy(n,3);cout<<"-----";
	gotoxy(n,2);cin>>tu[0];
	gotoxy(n,4);cin>>mau[0];
	double TT=1,TM=1;
	for(int i=1;i<255;i++)
	{
		gotoxy(n+(i)*8-2,3);cin>>dau;
		if((dau=='*'||dau=='/')&&i==1){TT=tu[0];TM=mau[0];};
		d[i-1]=dau;
		if(dau=='+'){
			gotoxy(n+i*8,3);cout<<"-----";
			gotoxy(n+i*8,2);cin>>tu[i];
			gotoxy(n+i*8,4);cin>>mau[i];
			TT=tu[i]*TM+TT*mau[i];
			TM=TM*mau[i];
		}
		else if(dau=='-'){
			gotoxy(n+i*8,3);cout<<"-----";
			gotoxy(n+i*8,2);cin>>tu[i];
			gotoxy(n+i*8,4);cin>>mau[i];
			TT=tu[i]*TM-TT*mau[i];
			TM=TM*mau[i];
		}
		else if(dau=='*'){
			gotoxy(n+i*8,3);cout<<"-----";
			gotoxy(n+i*8,2);cin>>tu[i];
			gotoxy(n+i*8,4);cin>>mau[i];
			TT=TT*tu[i];
			TM=TM*mau[i];
		}
		else if(dau=='/'){
			gotoxy(n+i*8,3);cout<<"-----";
			gotoxy(n+i*8,2);cin>>tu[i];
			gotoxy(n+i*8,4);cin>>mau[i];
			TT=TT*mau[i];
			TM=TM*tu[i];
		}
		else if(dau=='=')
		{
			gotoxy(n+i*8,3);cout<<"-----";
			gotoxy(n+i*8,2);cout<<TT;
			gotoxy(n+i*8,4);cout<<TM;
			getche();
			break;
		}
	}
}
void RutGon(){
	system("cls");
	system("color f5");
	int tu,mau;
	gotoxy(2,3);cout<<"-----";
	gotoxy(2,2);cin>>tu;
	gotoxy(2,4);cin>>mau;
	gotoxy(8,3);cout<<"= -----";
	for(int i=(tu+mau)/2;i>=0;i--)
	{
		if(tu%i==0&&mau%i==0){tu=tu/i;mau=mau/i;break;}
	}
	gotoxy(10,2);cout<<tu;
	gotoxy(10,4);cout<<mau;
	getche();
}
void MHPS(){
	while(1)
	{
		system("cls");
		system("color f0");
		gotoxy(3,3);cout<<"--------------";
		gotoxy(3,4);cout<<"| CALCULATOR |";
		gotoxy(3,5);cout<<"--------------";
		gotoxy(2,7);cout<<"1. Calculate";
		gotoxy(2,8);cout<<"2. Compact";
		char a=getche();
		if(a=='1')TTPhanSo();
		else if(a=='2')RutGon();
		else if(a==27)break;
	}
}
void Math(){
	do
	{
		system("cls");
		system("color f0");
		gotoxy(3,3);cout<<"--------------";
		gotoxy(3,4);cout<<"| CALCULATOR |";
		gotoxy(3,5);cout<<"--------------";
		gotoxy(2,7);cout<<"1. Real number";
		gotoxy(2,8);cout<<"2. Fraction";
		char a=getche();
		if(a=='1') NormalMath();
		else if(a=='2') MHPS();
		else if(a==27)break;
	}while(1);
}
void PhuongTrinhBac2(){
	system("cls");
	system("color fd");
    double a,b,c,delta,kq;
    cout<<"Import a: ";cin>>a;
    cout<<"Import b: ";cin>>b;
    cout<<"Import c: ";cin>>c;
    delta=pow(b,2)-(2*a*c);
    cout<<"Delta = b\253 - 4ac = "<<delta<<endl;
    if(a==0)cout<<"The equation has a solution: x = "<<-c/b;
    else
    {
        cout<<"  2                2\n";
        cout<<"ax  + bx + c = "<<a<<"x   ";
        if(b<0)cout<<"- "<<abs(b)<<"x ";
        else cout<<"+ "<<b<<"x ";
        if(c<0)cout<<"- "<<c<<endl;
        else cout<<"+ "<<c<<endl;
        if(delta<0)      cout<<"The equation has no solution\n";
        else if(delta==0)cout<<"Equation with double roots: x1 = x2 = "<<-b/(2*a)<<endl;
        else
        {
            cout<<"The equation has 2 distinct solutions:\n";
            cout<<"x1 = "<<((-b)+sqrt(delta))/(2*a)<<endl;
            cout<<"x2 = "<<((-b)-sqrt(delta))/(2*a)<<endl;
        }
    }
    getche();
}
void PhuongTrinhBac3(){
	system("cls");
	system("color f8");
	double a,b,c,d,delta,k,kq;
    cout<<"Import a: ";cin>>a;
    cout<<"Import b: ";cin>>b;
    cout<<"Import c: ";cin>>c;
    cout<<"Import d: ";cin>>d;
    delta=pow(b,2)-3*a*c;
    k=(9*a*b*c-2*pow(b,3)-27*pow(a,2)*d)/(sqrt(pow(abs(delta),3)));
    cout<<"         2"<<endl;
    cout<<"Delta = b  - 3ac = "<<delta<<endl;
    cout<<"k = "<<k<<endl;
    if(a!=0){
    	cout<<"  3     2\n";
    	cout<<"ax  + bx  + cx + d\n";
    	cout<<"  3    2\n";
		cout<<a<<"x ";
		if(b<0)cout<<"- "<<abs(b)<<"x ";
        else cout<<"+ "<<b<<"x ";
        if(c<0)cout<<"- "<<abs(c)<<"x";
        else cout<<"+ "<<abs(c)<<"x";
        if(d<0)cout<<"- "<<abs(d);
        else cout<<"+ "<<abs(d);
    	if(delta<0)cout<<"The equation has a solution: x = "<<((sqrt(abs(delta)))/(3*a))*(pow(k+sqrt(pow(k,2)+1),1/3)+pow(k-sqrt(pow(k,2)+1),1/3))-b/(3*a)<<endl;
		else if(delta==0)cout<<"The equation with multiple solutions: x = "<<(-b+pow(pow(b,3)-27*pow(a,2)*d,1/3))/(3*a)<<endl;
		else if(delta>0){
			if(abs(k)<=1){
				cout<<"The equation has 3 solutions: x1 = "<<(2*sqrt(delta)*cos(acos(k)/3)-b)/(3*a)<<endl;
				cout<<"                              x2 = "<<(2*sqrt(delta)*cos((acos(k)/3)-(2*M_PI/3))-b)/(3*a)<<endl;
				cout<<"                              x3 = "<<(2*sqrt(delta)*cos((acos(k)/3)+(2*M_PI/3))-b)/(3*a)<<endl;
			}
			else if(abs(k)>1)cout<<"The equation has a solution: x = ";cout<<((sqrt(delta)*abs(k))/(3*a))*(pow(abs(k)+sqrt(pow(k,2)-1),1/3)+(pow(abs(k)-sqrt(pow(k,2)-1),1/3))-b/(3*a))<<endl;
		}
	}
	getche();
}
void MHPhuongTrinh(){
	do
	{
		system("cls");
		system("color f0");
		gotoxy(3,3);cout<<"--------------";
		gotoxy(3,4);cout<<"| CALCULATOR |";
		gotoxy(3,5);cout<<"--------------";
		gotoxy(2,7);cout<<"Choose equation 2 ~ 3";
		char a=getche();
		if(a=='2') PhuongTrinhBac2();
		else if(a=='3') PhuongTrinhBac3();
		else if(a==27)break;
	}while(1);
}
void MHToanHoc(){
	do
	{
		system("cls");
		system("color f0");
		gotoxy(3,3);cout<<"--------------";
		gotoxy(3,4);cout<<"| CALCULATOR |";
		gotoxy(3,5);cout<<"--------------";
		gotoxy(2,7);cout<<"1. Normal calculate";
		gotoxy(2,8);cout<<"2. Equation";
		char a=getche();
		if(a=='1') Math();
		else if(a=='2') MHPhuongTrinh();
		else if(a==27)break;
	}while(1);
}
void Game1(){
	system("cls");
	system("color f4");
	srand(time(NULL));
	int n=rand()%100+1;
	int sodoan;bool w=false;
	gotoxy(1,1);cout<<"The robot takes the number 1 => 100. Guess the number of the robot 7 times.";
	for(int i=1;i<=7;i++){
		gotoxy(2,2);cout<<i<<": ";
		cin>>sodoan;gotoxy(5,2);cout<<"         ";
		if(n>sodoan){gotoxy(3,3);cout<<"                            ";gotoxy(3,3);cout<<"Robot's number > your number";}
		else if(n<sodoan){gotoxy(3,3);cout<<"                            ";gotoxy(3,3);cout<<"Robot's number < your number";}
		else if(sodoan==n){
			gotoxy(3,3);cout<<"                                                         ";
			gotoxy(3,3);cout<<"\\\\\\\\\\|/////";
			gotoxy(3,4);cout<<"> YOU WIN <";
			gotoxy(3,5);cout<<"/////|\\\\\\\\\\";
			break;
		}
		if(sodoan!=n&&i==7)w=true;
	}
	if(w==true){
		gotoxy(3,3);cout<<"\\\\\\\\\\\\//////";
		gotoxy(3,4);cout<<"> YOU LOSE <";
		gotoxy(3,5);cout<<"//////\\\\\\\\\\\\";
		gotoxy(3,6);cout<<"Robot's number: "<<n;
	}
	getche();
}
void Game2(){
	system("cls");
	system("color f6");
	srand(time(NULL));
	int so1,so2,dau,kq,diem=0;
	int NN;
	char d;
	gotoxy(5,1);cout<<"Score:";
	for(int i=0;;i++){
		so1=rand()%2001-1000;so2=rand()%2001-1000;dau=rand()%2;NN=rand()%5+1;
		if(dau==0)d='+';
		else d='-';
		gotoxy(12,1);cout<<i;
		gotoxy(2,2);cout<<so1<<" "<<d<<" "<<so2<<" =               ";
		gotoxy(2,2);cout<<so1<<" "<<d<<" "<<so2<<" = ";cin>>kq;
		if(d=='+'){if(kq!=so1+so2){diem=i;break;}}
		else if(d=='-'){if(kq!=so1-so2){diem=i;break;}}
	}
	system("cls");
	gotoxy(1,1);cout<<"                                                                  ";
	gotoxy(1,1);cout<<"\\\\\\\\\\\\\\\\\\/////////";
	gotoxy(1,2);cout<<"> YOUR SCORE: "<<diem<<"  ";gotoxy(18,2);cout<<"<";
	gotoxy(1,3);cout<<"/////////\\\\\\\\\\\\\\\\\\";getche();
}
void MHMinigames(){
	do
	{
		system("cls");
		system("color f0");
		gotoxy(3,3);cout<<"--------------";
		gotoxy(3,4);cout<<"| Mini games |";
		gotoxy(3,5);cout<<"--------------";
		gotoxy(2,7);cout<<"O: Random";
		gotoxy(2,8);cout<<"1. Number guessing game";
		gotoxy(2,9);cout<<"2. Math solver";
		int t=rand()%2+1;
		char a=getche();
		if(a=='o'||a=='O')a=t+48;
		if(a=='1') Game1();
		else if(a=='2') Game2();
		else if(a==27)break;
	}while(1);
}
int main(){
	do
	{
		system("cls");
		system("color f0");
		gotoxy(3,3);cout<<"-----------------";
		gotoxy(3,4);cout<<"| Program study |";
		gotoxy(3,5);cout<<"-----------------";
		gotoxy(2,7);cout<<"1. Calculator";
		gotoxy(2,8);cout<<"2. Mini games";
		gotoxy(2,9);cout<<"3. Code";
		gotoxy(2,10);cout<<"4. Exit";
		char a=getche();
		if(a=='1') MHToanHoc();
		else if(a=='2') MHMinigames();
		else if(a=='3'){
			system("cls");
			system("color b5");
			gotoxy(4,3);cout<<"Copy link";
			gotoxy(8,4);cout<<"|";
			gotoxy(8,5);cout<<"|";
			gotoxy(8,6);cout<<"|";
			gotoxy(8,7);cout<<"V";
			gotoxy(1,8);cout<<"https://github.com/HuongHackerDepTrai/HuongHackerDepTrai/blob/main/Calculator.cpp";
			gotoxy(4,9);cout<<"App: DEV C/C++    Link download:https://sourceforge.net/projects/orwelldevcpp/";
			gotoxy(4,10);cout<<"Language: C++";
			getche();
		}
		else if(a=='4')exit(1);
	}while(1);
    return 0;
}
