
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

  vector<Product*> getProduct(){
    return product;
  }

  double calculatePrice(){
       int n = product.size();
       double totalPrice = 0;
       for(int  i = 0; i<n; i++){
        totalPrice += product[i] -> prod_Price;
       }
       cout<<"total Price of the products in $ :"<<totalPrice<<endl;
       return 0;
  }
};


class CartInvoicePrinter{
    private:
    ShoppingCart * S1;
    public:
    CartInvoicePrinter(ShoppingCart * cart){
        S1  = cart;
    }
    
    void PrintInvoice(){
         vector<Product*>product = S1 -> getProduct();
         int n = product.size();
         for(int i = 0; i<n; i++){
            cout<<"Name of the price is:"<<product[i] -> prod_Name << " and the Price of the product in $ :"<<product[i] -> prod_Price<<endl;
         }
    }

};

class CartDbStorage{
   private:
   ShoppingCart * S1;
   public:
    CartDbStorage(ShoppingCart * cart){
        S1 = cart;
    }

    void SaveDatatoDataBase(){
        cout<<"this is the data storage function "<<endl;
    }
};


int main(){
    ShoppingCart * S1  = new ShoppingCart();
    S1 -> setProduct(new Product("Laptop",220));
    S1 -> setProduct(new Product("Mobile",100));
    S1 -> calculatePrice();
    
    CartInvoicePrinter * S2 = new CartInvoicePrinter(S1);
    S2 ->PrintInvoice();
    
    CartDbStorage * D1 = new CartDbStorage(S1);
    D1 -> SaveDatatoDataBase();
    return 0;
}

