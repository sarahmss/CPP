# 🐶 CPP 🐶

The goal of these modules is to introduce you to Object-Oriented Programming. This will be the starting point of your C++ journey. Many languages are recommended to learn OOP. We decided to choose C++ since it’s derived from your old friend C

<details>
  <summary>00 namespaces</summary>


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
  <summary>01 stdio streams</summary>  

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
  <summary>02 class and instance</summary>  

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



