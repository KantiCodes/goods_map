# Abstract with implementation (derived class does not need to implement print)
```cpp
class base {
public:
    virtual void print() = {cout << "This does not need to be overriden, and can be treated as base class' default" };

    void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
    // This might be uncommented but does not have to
    // void show() { cout << "show derived class\n"; }
};
```

# Abstract without implementation (dervied class must implement print)
```cpp
class base {
public:
    virtual void print() = 0;

    void show() { cout << "show base class\n"; }
};

class derived : public base {
public:
    void show() { cout << "show derived class\n"; }
};
```

# Default constructor call
```cpp
SomeClass a = SomeClass()
// Not fully understand why would I use this instead of
// Pointer to abstract Base class
std::auto_ptr<abc> b( new xyz() );
```