
Inheritance
	  -> It allows a class (called child or subclass) to inherit properties and methods from another class (called parent or superclass).
		
🔹 When to Use Inheritance ? 
	-> Multiple classes share common features (variables/methods).
		 -> You want to avoid code duplication.
			  -> You want to use polymorphism (calling methods from a common interface).


| Purpose                  | Benefit                                                    |
| ------------------------ | ---------------------------------------------------------- |
| **Code Reusability**     | Avoid rewriting common code.                               |
| **Extensibility**        | Easy to extend features in subclasses.                     |
| **Maintainability**      | Changes in one place reflect in all inherited classes.     |
| **Polymorphism Support** | Allows treating objects of different classes the same way. |


| Inheritance Type | Description                                                          | Example Syntax                             |
| ---------------- | -------------------------------------------------------------------- | ------------------------------------------ |
| **Single**       | One derived class from one base class                                | `class B : public A`                       |
| **Multiple**     | One derived class from multiple base classes                         | `class C : public A, public B`             |
| **Multilevel**   | Inheritance across multiple levels (A → B → C)                       | `class B : public A`, `class C : public B` |
| **Hierarchical** | Multiple classes inherit from the same base class                    | `class B : public A`, `class C : public A` |
| **Hybrid**       | A mix of two or more types (often involving multiple & hierarchical) | Complex combinations                       |
