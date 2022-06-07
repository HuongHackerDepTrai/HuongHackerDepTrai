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
	char dau;
	int d[254];
	gotoxy(40,1);cout<<"   y_";
	gotoxy(40,2);cout<<"V: Vx";
	gotoxy(40,3);cout<<"^: x^y";
//	gotoxy(40,4);cout<<"C: cos(x)";
//	gotoxy(40,5);cout<<"S: sin(x)";
//	gotoxy(40,6);cout<<"T: tan(x)";
//	gotoxy(40,7);cout<<"L: log(x)";
//	gotoxy(40,4);cout<<"|: |x|";
	gotoxy(40,4);cout<<"!: x!";
//   gotoxy(40,10);cout<<"n: PI";
//   gotoxy(40,11);cout<<"e: e";
//   gotoxy(40,6);cout<<"%: x%";
	gotoxy(3,1);cout<<"X [1] = ";cin>>so[0];kq=so[0];
	for(int i=1;i<255;i++)
	{
		gotoxy(3,2);cout<<"   ";
		gotoxy(3,2);cin>>dau;d[i-1]=dau;
		if(dau=='+'||dau=='-'||dau=='*'||dau=='/'){gotoxy(11,1);cout<<"            ";gotoxy(6,1);cout<<i+1<<"] = ";cin>>so[i];}
		else if(dau=='^'){
			i--;int somu;gotoxy(3,3);cin>>somu;gotoxy(3,3);cout<<"   ";
			so[i]=pow(so[i],somu);
		}
		else if(dau=='V'||dau=='v'){
			i--;float bac;gotoxy(3,3);cin>>bac;gotoxy(3,3);cout<<"   ";bac=1/bac;
			so[i]=pow(so[i],bac);
		}
		else if(dau=='!'){
			i--;int h=so[i];
			for(int j=1;j<h;j++)so[i]=so[i]*j;
		}
		else if(dau=='='){
			kq=so[0];
			for(int j=0;j<i;j++){
				if(d[j]==43)kq=kq+so[j+1];
				if(d[j]==45)kq=kq-so[j+1];
				if(d[j]==42)kq=kq*so[j+1];
				if(d[j]==47)kq=kq/so[j+1];
			}
			gotoxy(5,2);cout<<kq;
			getche();
			break;
		}
//		else if(dau=='L'||dau=='l'){
//			i--;
//			so[i]=log(so[i]);
//		}
//		else if(dau=='C'||dau=='c'){
//			i--;
//			so[i]=cos(so[i]);
//		}
//		else if(dau=='S'||dau=='s'){
//			i--;
//			so[i]=sin(so[i]);
//		}
//		else if(dau=='T'||dau=='t'){
//			i--;
//			so[i]=tan(so[i]);
//		}
//		else if(dau=='|'){
//			i--;
//			so[i]=abs(so[i]);
//		}
//		else if(dau=='%'){
//			i--;
//			so[i]=so[i]/100;
//		}
	}
}
void TTPhanSo(){	
	system("cls");
	system("color f2");
	int tu[255],mau[255];char dau;
	gotoxy(1,3);cout<<"X [1]";
	gotoxy(7,3);cout<<"-------";
	gotoxy(7,2);cin>>tu[0];
	gotoxy(7,4);cin>>mau[0];
	int TT=tu[0],TM=mau[0];
	for(int i=1;i<255;i++)
	{
		gotoxy(1,3);cout<<"X ["<<i+1<<"]";
		gotoxy(15,3);cin>>dau;
		gotoxy(7,2);cout<<"        ";
		gotoxy(7,4);cout<<"        ";
		if(dau=='+'){
			gotoxy(7,3);cout<<"-------";
			gotoxy(7,2);cin>>tu[i];
			gotoxy(7,4);cin>>mau[i];
			TT=tu[i]*TM+TT*mau[i];
			TM=TM*mau[i];
		}
		else if(dau=='-'){
			gotoxy(7,3);cout<<"-------";
			gotoxy(7,2);cin>>tu[i];
			gotoxy(7,4);cin>>mau[i];
			TT=tu[i]*TM-TT*mau[i];
			TM=TM*mau[i];
		}
		else if(dau=='*'){
			gotoxy(7,3);cout<<"-------";
			gotoxy(7,2);cin>>tu[i];
			gotoxy(7,4);cin>>mau[i];
			TT=TT*tu[i];
			TM=TM*mau[i];
		}
		else if(dau=='/'){
			gotoxy(7,3);cout<<"-------";
			gotoxy(7,2);cin>>tu[i];
			gotoxy(7,4);cin>>mau[i];
			TT=TT*mau[i];
			TM=TM*tu[i];
		}
		else if(dau=='=')
		{
			for(int j=(abs(TT)+abs(TM))/2;j>=0;j--){
				if(TT%j==0&&TM%j==0){TT=TT/j;TM=TM/j;break;}
			}
			gotoxy(17,3);cout<<"-------";
			gotoxy(17,2);cout<<TT;
			gotoxy(17,4);cout<<TM;
			getche();
			break;
		}
	}
}
void PhuongTrinhBac2(){
	system("cls");
	system("color fd");
    double a,b,c,delta,kq;
    cout<<"Import a: ";cin>>a;
    cout<<"Import b: ";cin>>b;
    cout<<"Import c: ";cin>>c;
    delta=pow(b,2)-(4*a*c);
    cout<<"         2\n";
    cout<<"Delta = b - 4ac = "<<delta<<endl;
    if(a==0)cout<<"The equation has a solution: x = "<<-c/b;
    else
    {
        cout<<"  2               2\n";
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
//	system("cls");
//	system("color f8");
//	double a,b,c,d,delta,k,kq;
//    cout<<"Import a: ";cin>>a;
//    cout<<"Import b: ";cin>>b;
//    cout<<"Import c: ";cin>>c;
//    cout<<"Import d: ";cin>>d;
//    delta=pow(b,2)-3*a*c;
//    k=(9*a*b*c-2*pow(b,3)-27*pow(a,2)*d)/(sqrt(pow(abs(delta),3)));
//    cout<<"         2"<<endl;
//    cout<<"Delta = b  - 3ac = "<<delta<<endl;
//    cout<<"k = "<<k<<endl;
//    if(a!=0){
//    	cout<<"  3     2\n";
//    	cout<<"ax  + bx  + cx + d\n";
//    	cout<<"  3    2\n";
//		cout<<a<<"x ";
//		if(b<0)cout<<"- "<<abs(b)<<"x ";
//        else cout<<"+ "<<b<<"x ";
//        if(c<0)cout<<"- "<<abs(c)<<"x";
//        else cout<<"+ "<<abs(c)<<"x";
//        if(d<0)cout<<"- "<<abs(d);
//        else cout<<"+ "<<abs(d);
//    	if(delta<0)cout<<"The equation has a solution: x = "<<((sqrt(abs(delta)))/(3*a))*(pow(k+sqrt(pow(k,2)+1),1/3)+pow(k-sqrt(pow(k,2)+1),1/3))-b/(3*a)<<endl;
//		else if(delta==0)cout<<"The equation with multiple solutions: x = "<<(-b+pow(pow(b,3)-27*pow(a,2)*d,1/3))/(3*a)<<endl;
//		else if(delta>0){
//			if(abs(k)<=1){
//				cout<<"The equation has 3 solutions: x1 = "<<(2*sqrt(delta)*cos(acos(k)/3)-b)/(3*a)<<endl;
//				cout<<"                              x2 = "<<(2*sqrt(delta)*cos((acos(k)/3)-(2*M_PI/3))-b)/(3*a)<<endl;
//				cout<<"                              x3 = "<<(2*sqrt(delta)*cos((acos(k)/3)+(2*M_PI/3))-b)/(3*a)<<endl;
//			}
//			else if(abs(k)>1)cout<<"The equation has a solution: x = ";cout<<((sqrt(delta)*abs(k))/(3*a))*(pow(abs(k)+sqrt(pow(k,2)-1),1/3)+(pow(abs(k)-sqrt(pow(k,2)-1),1/3))-b/(3*a))<<endl;
//		}
//	}
//	getche();
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
int main(){
	do
	{
		system("cls");
		system("color f0");
		gotoxy(3,3);cout<<"-----------------";
		gotoxy(3,4);cout<<"| Program study |";
		gotoxy(3,5);cout<<"-----------------";
		gotoxy(2,7);cout<<"1. Calculate real numbers";
		gotoxy(2,8);cout<<"2. Calculate fractions";
		gotoxy(2,9);cout<<"3. Solving quadratic equations";
		gotoxy(2,10);cout<<"4. Mini games - Guess number game";
		gotoxy(2,11);cout<<"5. Code";
		gotoxy(2,12);cout<<"6. Exit";
		char a=getche();
		if(a=='1') NormalMath();
		else if(a=='2') TTPhanSo();
		else if(a=='3') PhuongTrinhBac2();
		else if(a=='4') Game1();
		else if(a=='5'){
			system("cls");
			system("color b5");
			gotoxy(4,3);cout<<"Copy link";
			gotoxy(8,4);cout<<"|";
			gotoxy(8,5);cout<<"|";
			gotoxy(8,6);cout<<"|";
			gotoxy(8,7);cout<<"V";
			gotoxy(1,8);cout<<"https://github.com/HuongHackerDepTrai/HuongHackerDepTrai/blob/main/CalculatorBHN.cpp";
			gotoxy(4,9);cout<<"App: DEV C/C++    Link download:https://sourceforge.net/projects/orwelldevcpp/";
			gotoxy(4,10);cout<<"Language: C++";
			getche();
		}
		else if(a=='6')exit(1);
	}while(1);
    return 0;
}
