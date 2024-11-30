// In c++, const qualifiers can be applied to:
// 1. Members function of a class
// 2. Function arguments
// 3. A class data member which is declared as static
// 4. Reference 

// When a function is declared as const, it cannit modify data members of its
// class. 
// When we dont want to modify an argument and pass it as a reference or pointer,
// we use const qualifier, so that the argument is not accidently modified
// in function.
// Class data memebrs can be declared as both const and static for class wide
// constansts.
// Reference variable can be const when thry refer to a cosnt location