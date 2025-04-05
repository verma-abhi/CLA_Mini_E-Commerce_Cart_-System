# 🛒 Shopping Cart System (C++)

A modular and object-oriented command-line shopping cart system written in C++. This project showcases clean architecture principles with components like `Product`, `CartItem`, `ShoppingCart`, and discount managers. Ideal for demonstrating real-world OOP design, discount logic, and Makefile-based builds.

---

## 🔧 Features
- 🛒 Add and remove items from cart
- 📦 View cart contents with real-time total cost
- 🎁 Apply automatic discounts:
  - **Buy 1 Get 1 Free**
  - **Percentage-based**
- 💱 Currency conversion at checkout (USD → EUR / GBP)
- ✅ Modular class structure for maintainability
- 🛠️ Compilable using `Makefile` with `clang++`

---

## Build & Run
make         &nbsp;&nbsp;&nbsp;&nbsp; ## Compile all source files   
./shopping_cart   &nbsp;&nbsp;&nbsp;&nbsp;## Run the application  
make clean    &nbsp;&nbsp;&nbsp;&nbsp;## Remove all compiled objects and binaries

## In-App Commands
add_to_cart         &nbsp;&nbsp;&nbsp;&nbsp;## Add a product to the cart  
remove_from_cart    &nbsp;&nbsp;&nbsp;&nbsp;## Remove a product from the cart  
view_cart           &nbsp;&nbsp;&nbsp;&nbsp; ## View current cart contents  
list_discounts     &nbsp;&nbsp;&nbsp;&nbsp; ## Show all available discounts  
checkout          &nbsp;&nbsp;&nbsp;&nbsp;  ## Apply discounts and convert currency  
quit               &nbsp;&nbsp;&nbsp;&nbsp; ## Exit the program  
