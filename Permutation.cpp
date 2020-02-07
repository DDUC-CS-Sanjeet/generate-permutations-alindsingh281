#include<iostream>
using namespace std;
void Perm(int,int,char* arr);
void swapw(char& ,char&);
int x=1;

void swapw(char &a,char &b)
{
    char temp=a;
    a=b;
    b=temp;
}

void Perm(int n,int fir,char arr[])
{
		
    if(fir==n)
    {
    	
        cout<<x++<<": "<<arr<<endl;
        
    }
    else
    {
        for(int i=fir;i<n;i++)
        {
            swapw(arr[fir],arr[i]);
            Perm(n,fir+1,arr);
            swapw(arr[fir],arr[i]);
        }
}
}

int main()
{
    int num;
    
    cout<<"No. of characters: ";
    cin>>num;
    char* arr=new char[num+1];
    char a='A';
    for(int i=0;i<num;i++)
    {
        arr[i]=a;
        arr[num]='\0';
        a++;
    }
    cout<<"Permutation:/n ";
    Perm(num,0,arr);
    return 0;
}
