#include <iostream>

using namespace std;

int main(){
    int r,p;
    cout<<"\n\n\t\tEnter the number of resources\n\t\t:";
    cin>>r;
    cout<<"\n\n\t\tEnter the number of process :\n\t\t";
    cin>>p;
    int total_res[r];
    for(int i=0;i<r;i++){
        cout<<"\n\n\t\tEnter the total quantity of resource no "<<i+1<<" available :\n\t\t";
        cin>>total_res[i];
    }
    int allocated_res[p][r];
    for(int i=0;i<p;i++){
        cout<<"\n\n\t\tEnter the quantity  of allocated resources to process no"<<i+1<<"\n\t\t";
        for(int j=0;j<r;j++){
            cin>>allocated_res[i][j];
        }
    }
    int max[p][r];
    for(int i=0;i<p;i++){
        cout<<"\n\n\t\tEnter the maximum quantity  of resources to process no"<<i+1<<"\n\t\t";
        for(int j=0;j<r;j++){
            cin>>max[i][j];
        }
    }
    int a[r];
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<p;j++){
            sum+=allocated_res[j][i];
        }
        cout<<"\n\n\tThe value of sum is \n\n\t\t:"<<sum<<endl;
        a[i]=total_res[i]-sum;
        cout<<"\n\n\tThe value of a array at index "<<i<<" is : "<<a[i]<<endl;
        sum=0;
    }
    cout<<"\n\n\t\tThe available resources are :\n\t\t";
    for(int i=0;i<r;i++){
        cout<<a[i]<<"    ";
    }
    
    int rem[p][r];
    for(int i=0;i<p;i++){
        for(int j=0;j<r;j++){
            rem[i][j]=max[i][j]-allocated_res[i][j];
        }
    }
    
    cout<<endl<<"The remaning task of each process is :"<<endl;
    for(int i=0;i<p;i++){
        cout<<"\n\nFor process "<<i+1<<"  :";
        for(int j=0;j<r;j++){
            cout<<rem[i][j]<<"    ";
        }
        cout<<endl;
    }
    int flag[p];
    for(int i=0;i<p;i++)
    {
        flag[i]=0;
        cout<<endl<<flag[i];
    }
    int dlf[p];
    int flagc=-1,countf=0;
    do{
        flagc=-1;
        for(int i=0;i<p;i++){
            if(flag[i]==1)
                continue;
            for(int j=0;j<r;j++){
                if(rem[i][j]>a[j])
                {
                    cout<<"\n\nDead lock is there at process :"<<i+1;
                    break;
                }
                if(rem[i][j]<=a[j]&&j==r-1){
                    flag[i]=1;
                    flagc=1;
                    dlf[countf++]=i+1;
                    for(int k=0;k<r;k++){
                        a[k]+=allocated_res[i][k];
                    }
                }
            }
        }
    }while(flagc==1);
    

        for(int j=0;j<r;j++){
            cout<<a[j]<<"  ";
        }
    cout<<"\n\n\t\tThe deadlock free sequence of process are \n\n\t\t:";
    
    for(int i=0;i<p;i++){
        cout<<"P->"<<dlf[i]<<"   ";
    }
    return 0;
}
