//  /*1.Writeaprogramthatacceptsanintegerfromtheuserinthemainfunction,passestheintegerto
//  anotherfunctionand
//  a.Countsthenumberofdigitsinanintegernumber(E.g.23,498hasfivedigits)
//  b.Printsthereversesthenumber(E.g.input=4637215Output=5217364)
//  c.Printsthefirstandthelastdigitoftheenteredinteger.
//  d.Findsthesumoffirstandlastdigitofanumber
//  e.Swapsthefirstandthelastdigitsofanumber
//  f.Computethesumofdigitsofanumber
//  g.Computetheproductofdigitsofanumber
//  h.Checkwhetheranumberispalindromeornot.
//  i.Findfrequencyofeachdigitinagiveninteger.
//  j.Sortthedigitsofagivennumberonlyusingloops.(E.g.input=4637215Output=1234567)
//  k.Printsitinwords*/
// //   a.Countsthenumberofdigitsinanintegernumber(E.g.23,498hasfivedigits)
//  #include<iostream>
// #include <cstring>
// using namespace std;
// int numofdigit(char n[]);
// void printthereverse(char n[]);
// int main(){
//     char num[50];
//     cout<<"enter the number: ";
//     cin>>num;

//    cout<<num<<" has "<<numofdigit(num)<<"digits"<<endl;
//    cout<<"the reverse of "<<num<<" is ";
//    printthereverse(num);
//    return 0;


// }
// int numofdigit(char *n)
// {
// return strlen(n);
// }
// void printthereverse(char *n){

// int length=strlen(n);
// for (int i = length-1; i >=0; i--)
// {
//    cout<<n[i];
// }

// }


// #include<iostream>
// using namespace std;
// float retailerprice(int product[], int quantity);

// int main(){
//    int productnum[50],quantity,n;
//    float totalretailer_price=0;
//    for(int i=0; i<5;i++){
//    cout<<"enter the product "<<i+1<<": ";
//    cin>>productnum[i];
//    cout<<"the quantity of product: ";
//    cin>>quantity;
//    cout<<"the retailer price of product "<<i+1<<" is = $"<<retailerprice(productnum,quantity)<<endl;
//    totalretailer_price+=retailerprice(productnum,quantity);
//    }

//    cout<<"total retailer price of product "<<n<<" is $"<<totalretailer_price;


// }
// // //  Product1, $2.98;
// // //  Product2, $4.50;
// // //  Product3, $9.98;
// // //  Product4, $4.49
// // //  Product5, $6.87.
// float retailerprice(int *product,int quantity)
// {
//   float retailer_price;
//   for(int i=0; i<5;i++){
//    if(product[i]==1){
//    retailer_price=2.98*quantity;
//    }
//       else if(product[i]==2){
//    retailer_price=4.50*quantity;
//    }
//    else if(product[i]==3){
//    retailer_price=9.98*quantity;
//    }
   
//    else if(product[i]==4){
//    retailer_price=4.49*quantity;
//    }
//    else if(product[i]==5){
//    retailer_price=6.87*quantity;
//    }
   
//   }
//   return retailer_price;
// }
#include<iostream> 
using  namespace std;

float retail_price(int qtt[],float ret_price[]){
  float tot_ret_price=0;
 ret_price[0]= 2.98*qtt[0];
 ret_price[1]= 4.50*qtt[1];
 ret_price[2]= 9.98*qtt[2];
 ret_price[3]= 4.49*qtt[3];
 ret_price[4]= 6.87*qtt[4];

    for (int i=0;i<5;){
        tot_ret_price = tot_ret_price + ret_price[i];
    }
return tot_ret_price;  
}
void display (float ret_price[],float tot_ret_price){
    for (int i=0;i<5;i++){
        cout<< "retail prict for product "<<i+1<<" is: "<<ret_price[i]<<endl;
    }
  cout<< "total retail prict for products is: "<<tot_ret_price<<endl;
}

int main(){
  int qtt[5],tot_ret_price;
  float ret_price[5];
    cout <<"enter the values for each product!!"<<endl;
    for (int i=0;i<5;i++){
        cout<<"enter the quantity for product "<<i+1<< " : ";
        cin >>qtt[i];
    }
    tot_ret_price=retail_price(qtt,ret_price);
    display(ret_price,tot_ret_price);


    return 0;
}

