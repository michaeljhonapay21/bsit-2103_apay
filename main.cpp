#include <iostream>
#include <stdlib.h>

using namespace std;
class Product{
    public:
    void addProduct( double Product_id, string Product_name ,int price ,double Price,string Expiration_date);
    void display_products();
    double addProduct(void);
    char answer;
    Product();
    private:
    string Product_name;
    string manufacturer;
    int price;
    string Expiration_date;
    double Product_id;
};

 Product::Product(void){


     string    answer;

    cout << "Welcome to the world of programming!"<< endl;
do {
    cout << "Please Enter the following : "<< endl;
    cout << "Product ID : ";
    cin >> Product_id;
    cout << "Enter Product Name :";
    cin >> Product_name;
    cout << "Enter the Price :" ;
    cin >> price;
    cout << "Manufacturer of the Product : ";
    cin >> manufacturer;
    cout << " Expiration date of the Produuct : ";
    cin >>Expiration_date;
    cout << "Do you wish to Enter more product? Y/N?"<< endl;
    cin >> answer;
}
 while (answer == "y" || answer == "Y");
 }



void Product :: display_products(){
       system ("CLS");
    cout << "Your Product ID is : "<<Product_id <<endl;
    cout << "Your Product Name is :"<<Product_name <<endl;
    cout << "Your Product Price :"<< price <<endl;
    cout << "Your Product Manufacturer is :"<< manufacturer <<endl;
    cout << "Your Product Expiration Date is  :"<< Expiration_date <<endl;


}


int main()
{
    Product product;
    product.display_products();

    return 0;

}

