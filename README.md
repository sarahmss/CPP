# 🐶 CPP 🐶

The goal of these modules is to introduce you to Object-Oriented Programming. This will be the starting point of your C++ journey. Many languages are recommended to learn OOP. We decided to choose C++ since it’s derived from your old friend C


# C00
<details>
  <summary>00.Namespaces</summary>


Defines a scope where every variable or function placed there can be assigned the same as an existing one without conflicting.
 
```cpp 
namespace first_space
{
    void    func()
    {
        std::cout << "inside first_space" << endl;
    }
}

namespace second_space
{
    void    func()
    {
        std::cout << "inside second_space" << endl;
    }
}

int main(void)
{
    first_space::func();
    second_space::func();    
}
```
</details>

<details>
  <summary>01.Stdio streams</summary>  

      std namespace gives to us access to std input and std output through use of: 

       1. cin and cout: objects which allow us to print in standard output and read from standard input.

       2. \>\> and <<: operands which control the access of stdio files.

       3. endl: simplified object to put a \n independent of OS. 

```cpp 
      int    main(void)
      {
          char   buff[200];

          std::cout << "Hello, input a word" << std::endl;
          std>>cin >> buff;
          std::cout << buff << std::endl;
      }
```
</details>

<details>
  <summary>02.Class and instance</summary>  

<details>
  <summary> in .hpp file we declare our class</summary>  
  
```cpp
          #ifndef SAMPLE_CLASS_H
          # define SAMPLE_CLASS_H

          class Sample // identifier of a class
          {
             public:
                 Sample(void); // Construction function
                 ~Sample(void); //  Destruction function
          };
```
</details>

<details>
  <summary> in .cpp  file we define the attributes of our class </summary>  
  
  a constructor and a detructor in cpp do not return.
  
```cpp
    #include <iostrem>
    #include "Sample.class.hpp"

    Sample::Sample(void)
    {
       std::cout << "Constructor called" << std::endl;
    }

    Sample::~Sample(void)
    {
       std::cout << "Destructor called" << std::endl;
    }
```
</details>
</details>



<details>
  <summary>03.Member attributes and Member functions</summary>  
in cpp we have the possibilitie to declare a function directly in our class.

<details>
  <summary> .hpp</summary>  
  
```cpp
          #ifndef SAMPLE_CLASS_H
          # define SAMPLE_CLASS_H

          class Sample 
          {
             private:
                 int foo; // attribute member
             public:
                 Sample(void); 
                 ~Sample(void); 
                 void    bar(void); // function member
          };
```
</details>

<details>
  <summary>.cpp </summary>  
  
```cpp
    #include <iostrem>
    #include "Sample.class.hpp"

    ... 

    void Sample::bar(void)
    {
       std::cout << "Member function called bar" << "endl";
    }
```
</details>
</details>
  
<details>
     <summary> 04.this </summary> 
  
  this is a self keywolrd which corresponds to a pointer in the current instance.
  
     <details>
  <summary>.cpp </summary>  
  
```cpp
    #include <iostrem>
    #include "Sample.class.hpp"

    ... 

    void Sample::bar(void)
    {
       std::cout << "Constructor called" << "std::endl";
       this->foo = 42;
       std::cout << "this->foo:" << this->foo << std::endl;
    }
```
</details>

</details>


  <details>
  <summary>05.initialization list</summary>  
    To classes with multiple attributes we can initiliaze all of then usin this keyworld and assinging a value to it.
    but is quite simple to use a initialization list which follows the syntax in .cpp file.
   <details>
  <summary> .hpp</summary>  
  
```cpp
          #ifndef SAMPLE_CLASS_H
          # define SAMPLE_CLASS_H

          class Sample 
          {
             public:
                 char a1;
                 int  a2;
                 float a3;
     
                 Sample(char p1, int p2, float p3); 
                 ~Sample(void); 
                 void    bar(void); // function member
          };
```
</details>
  
 <details>
  <summary>.cpp</summary> 
   
```cpp
    #include <iostrem>
    #include "Sample.class.hpp"

    ...
    void Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) // Initialization list syntax
    {
          std::cout << "Constructor called" << "std::endl";
          std::cout << "this->a1:" << this->a1 << std::endl;
          std::cout << "this->a2:" << this->a2 << std::endl;
          std::cout << "this->a3:" << this->a3 << std::endl;
       
    }
```
</details>
   
 </details>
 
  <details>
  <summary>06.Const </summary> 
  </details>
  
  <details>
  <summary>07.Visibility </summary> 
  </details>
  
  <details>
  <summary>08.Class vs Struct </summary> 
  The principle of structs was extendend in cpp. this way structs and class works exactly the same way in cpp. The difference is that the scope of a class is private by default.
  
   <details>
  <summary> struct.hpp</summary>  
  
```cpp
          #ifndef SAMPLE_CLASS_H
          # define SAMPLE_CLASS_H

          struct Sample 
          {
                 int foo;
                 Sample(void); 
                 ~Sample(void); 
                 void    bar(void) constr; 
          };
```
</details>
  
 <details>
  <summary>class.hpp</summary> 
   
```cpp
          #ifndef SAMPLE_CLASS_H
          # define SAMPLE_CLASS_H

          class Sample 
          {
                 int foo;
                 Sample(void); 
                 ~Sample(void); 
                 void    bar(void) constr; 
          };
```
</details>
 </details>

 <details>
 <summary>09.Accessors</summary> 
   in our calss often we have pprivate atttributes, however we want to know the value of this attributes without changing its value.
   Because getter will access on read only mod we must define it as const function;
  <details>
  <summary>class.hpp</summary> 
   
```cpp
          #ifndef SAMPLE_CLASS_H
          # define SAMPLE_CLASS_H

          class Sample 
          {
              private:
                 int foo;
      
              public:
                 Sample(void); 
                 ~Sample(void);
                void  SetFoo(int value);
                int   GetFoo(void);
                  
      };
```
 </details>
   
<details>
  <summary> class.cpp </summary> 
   
```cpp
  Sample::GetFoo(void) const
  {
      return (this->foo);
  }
      
  Sample::SetFoo(int value)
  {
      this->foo = value;
  }
```
 </details>
 </details>
    
 <details>
 <summary>10.Comparisons</summary> 
 </details>
   
  <details>
 <summary>11.Non member attributes and non member functions </summary> 
 </details>
    
 <details>
 <summary>12.Pointers to members </summary> 
 </details>
    
    
 # C01

