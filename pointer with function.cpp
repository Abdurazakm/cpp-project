#include<iostream>
using namespace std;
void calcu_IBM(float w,float h, float *ibm){
    *ibm=w/(h*h);
}
float *findmax(float *A, int n){
    float themax=A[0];
    for(int i=1;i<n;i++){
        if(A[i]>themax)
        themax=A[i];
    }
    return themax;
}
int main(){
    float weight,height,MYIBM;
    float A[5]={0.0,3.0,1.5,2.0,4.1};
    float *maxA;
    maxA=findmax(A,5);
    cout<<"the max is: "<<*maxA<<endl;
    cout<<"enter your weight and height: ";
    cin>>weight>>height;
    calcu_IBM(weight,height,&MYIBM);
    cout<<"your ibm is: "<<MYIBM;

    return 0;

}
#include<iostream>
using namespace std;

float *findMax(float *A, int N) {
    float *theMax = new float; // Dynamically allocate memory
    *theMax = A[0];
    for (int i = 1; i < N; i++) {
        if (A[i] > *theMax) {
            *theMax = A[i];
        }
    }
    return theMax;
}

int main() {
    float A[5] = {0.0, 3.0, 1.5, 2.0, 4.1};
    float *maxA;
    maxA = findMax(A, 5);
    cout << "The Max is: " << *maxA << endl;

    // Don't forget to delete the dynamically allocated memory
    delete maxA;

    return 0;
}
