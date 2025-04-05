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

## 📁 Project Structure
├── main.cpp
├── Product.cpp / Product.h
├── CartItem.cpp / CartItem.h
├── Discount.cpp / Discount.h
├── ProductCatalog.cpp / ProductCatalog.h
├── DiscountManager.cpp / DiscountManager.h
├── ShoppingCart.cpp / ShoppingCart.h
├── Makefile
└── README.md

## Build & Run
make          # Compile all source files
./shopping_cart   # Run the application
make clean    # Remove all compiled objects and binaries

## In-App Commands
add_to_cart         # Add a product to the cart
remove_from_cart    # Remove a product from the cart
view_cart           # View current cart contents
list_discounts      # Show all available discounts
checkout            # Apply discounts and convert currency
quit                # Exit the program
