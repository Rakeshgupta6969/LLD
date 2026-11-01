#include<bits/stdc++.h>
using namespace std;

class Product{
    public:
    string product_Name;
    double product_Price;

    Product(string Name, double Price){
        this -> product_Name = Name;
        this -> product_Price = Price;
    }
};

class ShoppingCart{
    private:
    vector<Product*>products;
     
    public:
    void setProduct(Product* p){
        products.push_back(p);
    }

    vector<Product*> getProduct(){
        return products;
    }

    double calCulateTotalPrice(){
        int n = products.size();
        double total_Price = 0;
        for(int i = 0; i<n; i++){
          total_Price += products[i] -> product_Price;
        }
        cout<<"totalPrice of all the product is "<< total_Price<<"$"<<endl;
        return 0;
    }

};


class CartInvoicePrinter{
  private:
  ShoppingCart * S1;

  public:
  CartInvoicePrinter(ShoppingCart * c1){
    S1 = c1;
  }

  void PrintInvoice(){
    vector<Product*>product = S1 -> getProduct();
    int n = product.size();
    for(int  i = 0; i<n; i++){
        cout<<"the product Name is " << product[i] -> product_Name << " and Price is " << product[i] -> product_Price<<"$" << endl;
    }
  }
  
};

class CartDatabaseStorage{
  private:
  ShoppingCart * S1;

  public:
  virtual void Save(ShoppingCart * S1) = 0; // pure virtual functions
};

class SavetoMysql : public CartDatabaseStorage{
   public:
   void Save(ShoppingCart * S1) {
    cout<<"data is Saving into the MySql..."<<endl;
   }
};

class SavetoMongoDB : public CartDatabaseStorage{
  public:
  void Save(ShoppingCart * S1) {
      cout<<"data is Saving into the MongoDB.."<<endl;
  }
};

class SavetoPostgreSQL : public CartDatabaseStorage{
    public:
    void Save(ShoppingCart * S1) {
        cout<<"data is Saving into the PostgreSQL.."<<endl;
    }
};



int main(){
    ShoppingCart *S1 = new ShoppingCart();
    S1 -> setProduct(new Product("Laptop",220));
    S1 -> setProduct(new Product("Mobile",100));
    S1 -> calCulateTotalPrice();

    CartInvoicePrinter * C1 = new CartInvoicePrinter(S1);
    C1 -> PrintInvoice();

    
    SavetoMysql * sq  = new SavetoMysql();
    sq -> Save(S1);

    SavetoMongoDB * md = new SavetoMongoDB();
    md -> Save(S1);

    SavetoPostgreSQL * pg = new SavetoPostgreSQL();
    pg -> Save(S1);
   
    return 0;
}