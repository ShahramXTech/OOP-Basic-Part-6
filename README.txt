# CS112 Object-Oriented Programming — Lab Task #06

Advanced C++ implementations demonstrating **dynamic binding (runtime polymorphism)** and **static binding (compile-time polymorphism)** through virtual functions, pure virtual functions, and abstract classes. Five structured tasks showcasing polymorphic behavior in real-world systems.

## 🔑 Core Concepts Implemented

| Concept | Binding Type | Purpose | Implementation Insight |
|---------|--------------|---------|------------------------|
| **Static Binding** | Compile-time | Function selection via overloading | Resolved by compiler using parameter signatures |
| **Dynamic Binding** | Runtime | Function selection via overriding | Requires `virtual` keyword + base pointer/reference |
| **Pure Virtual Function** | Runtime | Enforce interface implementation | `virtual void func() = 0` → creates abstract class |
| **Abstract Class** | N/A | Blueprint for derived classes | Cannot be instantiated; mandates derived implementation |

## 📂 Task Implementation Summary

### Task 1: Static Binding via Overloading (`Shop`)
- Three overloaded `calculateDiscount()` variants:
  - `calculateDiscount(double price)` → no discount
  - `calculateDiscount(double price, bool apply)` → 10% if price ≥ 1000
  - `calculateDiscount(double price, int qty)` → tiered discounts (10%/15%/20%) × quantity
- Compiler selects correct version at **compile time** based on arguments

### Task 2: Abstract Class & Pure Virtual Function
- `Shop` base class declares pure virtual `calculateDiscount(double) = 0`
- `DiscountedShop` implements discount logic (10%/15%/20% tiers)
- Demonstrates **interface enforcement** — no `Shop` objects allowed

### Task 3: Function Overloading in `Car` Class
- Overloaded `increaseSpeed()` / `decreaseSpeed()`:
  - Default: ±500 units
  - Custom: accepts parameter for variable adjustment
- Safety check: warning when speed > 200
- Pure **static binding** — no inheritance/virtual functions

### Task 4: Dynamic Binding with Shapes (Runtime Polymorphism)
- Abstract `Shape` base class with pure virtual `calculateArea()`
- `Circle` & `Rectangle` override area calculation:
  - Circle: `π × r²`
  - Rectangle: `length × width`
- `Shape*` array stores mixed objects → correct `calculateArea()` called at **runtime**

### Task 5: Static Binding for 3D Solids
- `Solid` class with overloaded `calculateVolume()`:
  - Cylinder: `π × r² × h`
  - Cuboid: `l × w × h`
- Function selection resolved **at compile time** via parameter types

Developer Profile
Shahram Tariq | @ShahramXTech
BS Software Engineering — Air University Kamra
