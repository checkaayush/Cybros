# How You Should Have Approached Your Computer Programming Assignment

## Hello Y15!

Let's start on the premise that the assignment given to you, which I guess became a _nightmare_ for you people, was actually _awesome_. Their were a hell lot of things for you to learn from this assignment. 

Here are some insights from my side, which will give you some perspective alongside a possible approach.

## About the assignment
The assignment focusses on introducing you to the importance of user input validation, which is required to make your programs more robust.

And to top that, you were supposed to make your own library consisting of a generic set of input validation functions, which you could use in other programs as well. That was again a good idea.

## About this platform
Before moving further, let me tell you that the platform you are reading this on, **GitHub**, is one of the places where programmers and developers share their work for the rest of the world to use/improve/modify as required. Moreover, it helps them keep track of the progress of their projects, collaborate with others, and much more. 

Such a provision is called a **Version Control System**(VCS). I would suggest you to look VCS up and use this platform to showcase and keep track of all your programming assignments and future work.

## Code structure
The main program has some helper functions to take user input. Then you need to identify the required validation functions and their signatures. This is done in the _validations.h_ file. The definitions of these functions go into _validations.c_ file. 

Although these functions are specific to a registration scenario, you should identify that they all use a set of generic checks, like checking range, length and type of input. The declarations for these are there in the _utilities.h_ file, which you can include in other programs and use its member functions there.

But before being able to use them, you have to define what each function does in _utilities.c_ file. So, the main program includes _validations.h_ file, which in turn includes _utilities.h_ file, thereby enabling you to use these functions. 

## References

The approach mentioned in this post is far from being comprehensive in defining how static libraries in C are created. It's meant to be a starting point for you to be able to analyse and learn the approach for solving such problems. Here are some links to dive further into the topic:

1. http://www.thegeekstuff.com/2011/10/c-program-to-an-executable/
2. http://www.cs.swarthmore.edu/~newhall/unixhelp/howto_C_libraries.html


## Key Takeaways
Observe the code structure carefully to learn the importance of proper indentation, appropriate variable names and readable code. Try to imbibe them as habits to reflect in whatever code you write from now on.

That's it from my side. Hope you have gained a thing or two from this post. **Happy programming!** :)
