#include "string.h" 
#include "iostream.h" 
struct candidate{
 char name1[20];
 char name2[20];
 char name3[20];
};
int main(){
  candidate can;//���
  cout<<"�������ѡ��������"<<endl;
  cin>>can.name1>>can.name2>>can.name3;
  char a[20];
  int p,q,r,count;
  p=0;//��ѡ��1��Ʊ��
  q=0; //��ѡ��2��Ʊ��
  r=0; //��ѡ��3��Ʊ��
  cout<<"����ͶƱ������"<<endl;
  cin>>count;
  cout<<"������ѡƱ��"<<endl;
  for(int i=0;i<count;i++)  {
    cin>>a;
    if(strcmp(can.name1,a)==0)  //���
      p=p+1;
    if(strcmp(can.name2,a)==0)  //���
      q=q+1;
    if(strcmp(can.name3,a)==0)  //���
      r=r+1; 
   }
   cout<< can.name1<<"Ʊ��"<<p;              //���
   cout<< can.name2<<"Ʊ��"<<q;              //���
   cout<< can.name3<<"Ʊ��"<<r<<endl;       //���
   return 0;
}
