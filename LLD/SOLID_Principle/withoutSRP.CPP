
/*
1.Every class should have single responsibility.
*/


#include<bits/stdc++.h>
using namespace std;

class Product{
    public:
    string prod_Name;
    double prod_Price;

    Product(string name,double price){
        this -> prod_Name = name;
        this -> prod_Price = price;
    }
};


class ShoppingCart{
  private:
  vector<Product*>product;

  public:
  void setProduct(Product*p){
    product.push_back(p);
  }

  vector<Product*> getData(){
    return product;
  }

  double calculatePrice(){
       int n = product.size();
       double totalPrice = 0;
       for(int  i = 0; i<n; i++){
        totalPrice += product[i] -> prod_Price;
       }
       cout<<"total Price of the all product in $ : "<<totalPrice<<endl;
       return 0;
  }

  void PrintInvoice(){
         int n = product.size();
         for(int i = 0; i<n; i++){
            cout<<"Name of the price is:"<<product[i] -> prod_Name << " and the Price of the product in $ :"<<product[i] -> prod_Price<<endl;
         }
    }

     void SaveDatatoDataBase(){
        cout<<"this is the data storage function "<<endl;
    }
};


int main(){
    ShoppingCart *S1 = new ShoppingCart();
    S1 -> setProduct(new Product("Laptop",220));
    S1 -> setProduct(new Product("Iphone",100));
    S1 -> calculatePrice();
    S1 -> PrintInvoice();
    S1 -> SaveDatatoDataBase();

    return 0;
}