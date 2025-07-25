#include <iostream>
using namespace std;
class ProductInventor 
{
private:
    int stock;
    float price;
public:
    string productName;
    string category;
    ProductInventor(int s, float p, string pn,string c) {
        stock = s;
        price = p;
        productName = pn;
        category = c;
    }
    void setstock(int s){
		stock =s;
	}
	 void setprice(float p){
		price = p;
	}
	int getstock(){
		return stock;
	}
	float getprice(){
		return price;
	}
    void displayDetails() const {
        cout << "Product Name: " << productName << endl;
        cout << "Category   : " << category << endl;
        cout << "Price      : " << price << endl;
        cout << "Stock      : " << stock << endl;
    }
};
int main() {
    string c, pn;
    float p;
    int s;

    cout << "Enter the product name, category ,price and stock : ";
    cin >> pn >> c >> p >> s;

    ProductInventor p1(s, p, pn, c);

    p1.displayDetails();

    return 0;
}

