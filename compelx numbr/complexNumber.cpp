#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class Complex
{
private:
		int real;
		int img;
public:
		void setReal(int r)
		{
			real=r;
		}
		int getReal()
		{
			return real;
		}
		void setImg(int i)
		{
			img=i;
		}
		int getImg()
		{
			return img;
		}
		Complex Add(Complex c)
		{
			Complex c1;
			c1.real=real+c.getReal();
			c1.img=img+c.getImg();
			return c1;
		}
		Complex(const Complex &c)
		{
			this->real=c.real;
			this->img=c.img;
		}
		void display()
		{
			cout<<getReal()<<"+"<<getImg()<<"i";
		}
		Complex()
		{
			real=img=0;
		}
		
		~Complex()
		{
		}
};

void main()
{
	Complex C1;
	Complex C2;
	Complex C3;
	C1.setReal(5);
	C1.setImg(10);
	C2.setReal(2);
	C2.setImg(5);
	Complex C4(C2);
	C3=C1.Add(C2);
	cout<<"C1= ";C1.display();
	cout<<endl;
	cout<<"C2= ";C2.display();
	cout<<endl;
	cout<<"C3= ";C3.display();
	cout<<endl;
	cout<<"C4= ";C4.display();
	cout<<endl;
	system("PAUSE");
}