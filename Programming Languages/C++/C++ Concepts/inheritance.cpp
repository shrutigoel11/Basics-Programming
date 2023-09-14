//The mechanism of deriving new class from old is called inheritance. New class has properties of existing and additional.
// OLD CLASS: Base Class/Super Class   NEW CLASS: Derived Class/ Sub Class
//TYPES: 
/* 

SINGLE: 1 BASE 1 DERIVED;

MULTIPLE: 2 OR MORE BASE 1 DERIVED;

HIERARCHICAL : 1 BASE 2 OR MORE DERIVED;

MULTILEVEL : 1 DERIVED FROM ANOTHER DERIVED;

HYBRID : COMBO OF 2 OR MORE INHERITANCE;

*/

//DEFINING DERIVED CLASS :specify relationship with old and additional

/*
SYNTAX: 

class derived_class : visibility mode base_class
{
    //members of derived class;
}

Note: When visiblity:
PRIVATE: PUBLIC(base) = PRIVATE(derived)  (not accessible by objects of derived)

PUBLIC: PUBLIC(base) = PUBLIC(derived)    (accessible by objects of derived)

We create objects of derived class only;
*/