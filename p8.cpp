#include <iostream>
using namespace std;
void printmenu();
void printagg(string s,float ,float ,float );
void comparemarks(string ,float ,string ,float );

int main() {
printmenu();
    string std1,std2;
    float mat1,mat2,inter1,inter2,ecat1,ecat2;
      cout<<"Enter your name without space :";
      cin>>std1;
      cout<<"Enter your Matric marks (/1100) :";
      cin>>mat1;
      cout<<"Enter your Inter marks (/550) :";
      cin>>inter1;
      cout<<"Enter your ECAT marks (/400) :";
      cin>>ecat1;
printagg(std1,mat1,inter1,ecat1);
      cout<<"Enter your name without space :";
      cin>>std2;
      cout<<"Enter your Matric marks (/1100) :";
      cin>>mat2;
      cout<<"Enter your Inter marks (/550) :";
      cin>>inter2;
      cout<<"Enter your ECAT marks (/400) :";
      cin>>ecat2;
printagg(std2,mat2,inter2,ecat2);
comparemarks(std1,ecat1,std2,ecat2);
if (mat1+ecat1+inter1>mat2+ecat2+inter2)
{
    cout<<"Roll no.1 : "<<std1<<endl;
    cout<<"Roll no.2 : "<<std2<<endl;
}
else
{
    cout<<"Roll no.1 ="<<std2<<endl;
    cout<<"Roll no.2 ="<<std1<<endl;
}

return 0;
}

void printmenu(){
cout<<"                 ##       ##        ## ## ##    # ## ## ## #           "<<endl;                          
cout<<"                 ##       ##        ##               ##                 "<<endl;                  
cout<<"                 ##       ##        ## ## #          ##                 "<<endl;                      
cout<<"                 ##       ##        ##               ##                 "<<endl;                          
cout<<"                 ##       ##        ##               ##                 "<<endl;                                  
cout<<"                 ## ## ## ##   ##   ## ## ##   ##    ##                 "<<endl;                                              
cout<<""<<endl;
cout<<""<<endl;                                                                                    
cout<<"##       ##              ###              ###       ###        ## ## ## ## "<<endl;                                                  
cout<<"##       ##             ## ##             ## ##   ## ##        ##          "<<endl;                                      
cout<<"##       ##            ##   ##            ##  ## ##  ##        ## ## ## ## "<<endl;                                                       
cout<<"##       ##           ## ### ##           ##   ###   ##                 ## "<<endl;                                              
cout<<"##       ##          ##       ##          ##         ##                 ## "<<endl;                        
cout<<"## ## ## ##   ##   ###         ###   ##   ##         ##   ##   ## ## ## ## "<<endl;                                                               
}              

void printagg(string name,float mat,float inter,float ecat){
      float agg;
      agg=30*mat/1100+30*inter/550+40*ecat/400;
      cout<<"Mr. "<<name<<" your aggregate is :"<<agg<<endl;
}

void comparemarks(string st1,float ecat1,string st2,float ecat2){
if (ecat1>ecat2)
{
    cout<<"Mr. "<<st1<<" has higher marks in ECAT than Mr. "<<st2<<endl;
}
else
{ 
    cout<<"Mr. "<<st2<<" has higher marks in ECAT than Mr. "<<st1<<endl;
}



}









