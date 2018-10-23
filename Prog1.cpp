#include<iostream.h>
#include<conio.h>
int check_no(int i)
{
		int j,flag=0;
		if (i%9==0)
		{
			flag=1;
		}
		else
		{
			while(i!=0)
			{
				j=i%10;
				i=i/10;
				if(j!=0 && j%9==0)
				{
					flag=1;
					break;
				}
			}
		}
		return flag;
}
void main()
{
	clrscr();
	int a,b,i,f,c=0;
	cout<<"Enter a range=";
	cin>>a>>b;
	for(i=a;i<=b;i++)
	{
		f=check_no(i);
		if (f!=1)
			c++;
			cout<<i<<"\n";
	}
	cout<<"\nTotal numbers printed="<<c;
	getch();

}