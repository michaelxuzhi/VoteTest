#include "string.h" 
#include "iostream.h" 
struct candidate{
 char name1[20];
 char name2[20];
 char name3[20];
};
int main(){
  candidate can;//填空
  cout<<"请输入候选人名单："<<endl;
  cin>>can.name1>>can.name2>>can.name3;
  char a[20];
  int p,q,r,count;
  p=0;//候选人1的票数
  q=0; //候选人2的票数
  r=0; //候选人3的票数
  cout<<"输入投票人数："<<endl;
  cin>>count;
  cout<<"请输入选票："<<endl;
  for(int i=0;i<count;i++)  {
    cin>>a;
    if(strcmp(can.name1,a)==0)  //填空
      p=p+1;
    if(strcmp(can.name2,a)==0)  //填空
      q=q+1;
    if(strcmp(can.name3,a)==0)  //填空
      r=r+1; 
   }
   cout<< can.name1<<"票数"<<p;              //填空
   cout<< can.name2<<"票数"<<q;              //填空
   cout<< can.name3<<"票数"<<r<<endl;       //填空
   return 0;
}
