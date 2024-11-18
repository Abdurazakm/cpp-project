#include<iostream>
#include<vector>
using namespace std;
template<typename T>
void search_element(vector<T>&values, T se_element,T size){
    bool found=false;
    for(int i=i;i<size;i++){

        if(se_element==values[i]){
            cout<<"the element foud at index "<<i+1<<endl;
            found=true;
        }
    }
    if(found==false){
        cout<<"the element not found"<<endl;
    }


}
template<typename T>
void sort(vector<T>&values,T size){
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
       T temp;
        if(values[i]>values[j])
        temp=values[i];
        values[i]=values[j];
        values[j]= temp;
    }
   
}
cout<<"sort value is ";
 for(int i=0;i<size;i++){
        cout<<values[i]<<" ";
    }

}
int main(){
    int n; 
    cout<<"enter the number of value: ";
    cin>>n;
    vector<int>values(n);
    for(int i=0;i<n;i++){
       // int valu;
        cout<<"enter the volue: ";
        cin>>values[i];
        //values.push_back(value);
    }


int element;
cout<<"enter search  element: ";
cin>>element;
search_element(values,element,n);
sort(values,n);
    return 0;
    
}








/*

    #include<iostream>
#include<vector>
using namespace std;

template<typename t>
void searc(vector<t>&arg,t sear_el,int size){
  int check=0;
    for(int i=0;i<size;i++){
        if (sear_el==arg[i]){
            cout<<"element found!!"<<endl;
            cout<<"it's index is "<<i<<endl;
            check=1;
        }  
    }
     if(check==0) {
        cout<<"element not found!!"<<endl;}
};

template <typename b>
b sortelements(vector<b> &arg, int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            if (arg[i]<arg[j]){
                swap(arg[i],arg[j]);
            }
        }
    }
}

int main(){
    int n;
    double x;
    cout<<"how many values? ";
    cin>>n;
    vector<double> valu(n);
   // cout<<valu.size();
    
    for (int i=0;i<n;i++){
        cout<<"value "<<i+1<<": ";
        cin >>valu[i];
    }
    cout<<"Enter the value to search for an element: ";
    cin>>x;
    searc(valu,x,n);
    cout<<"now lets sort the vector"<<endl;
    sortelements(valu,n);

    for (int i=0;i<n;i++){
        cout<<"value["<<i<<"]= "<<valu[i]<<endl;
    }
    

    return 0;
}*/