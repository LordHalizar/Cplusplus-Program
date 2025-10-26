# Alexander Crosby CS-210 Project 2 Submission
CS - 210 Programing Languages
10/26/2025

8 - 1 Journal: Portfolio Submission

**Introduction:**

In my time throughout this course, I've learned quite a bit in the C++ programming language. Even though I came into this course with some base level knowledge, from the previous courses I've taken for my earned SNHU degree in programming and game developement, there were a number of lessons and projects this semester that really helped in expanding my knowledge and experience with the C++ programming language. One project that stood out to me in particular was Project Submission 2: AIRGEAD BANKING.

**What problem is this program solving?**

This particular programming project had me develop a basic interactive interface for calculating compound interest. Meant for use as an educational tool to help students understand investment and fiscal responsibility, this program helped users understand and see how their investments grow over time. 

**What did you do particularly well?**

Over the course of this project, the functions I believe I best implemented was the looping menu input and switch case functions. Acting as the base interface for the program, these functions help present menu and input options for the users in an easily digestable format. In addition, these functions are used to bring to together functions used for interest calculation, menu display managment, as well as all Set and Get functions.

**Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?**

One area of improvement for my program would be the removal of the runProgram function. As my professor has mentioned to me, while not necessarily detrimental to the overall functionality of the program, such processing should be handled by the program's main function. 

In addition, there were a few functions I designed that are currently responsible for too many tasks (namely the printDataInput function). As my professor impressed upon me, " [it's important for you to] realize the importance of functions having just one purpose. Remember, the more things done in the function, the more difficult it is to fix any errors." I couldn't agree with this statement more, from my professor. By off loading some of these extra funcitonality of my printDataInput function into other new external functions, I would simplify bug fixing, simplify future updates made to my code, and overall make code management cleaner and simpler moving forward.

**Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?**

The part of code I had particular trouble with was my printDataInput function. On top of it being the largest function in my program, this function also includes and implements the largest amount of features. I had previously attempted to off load some of the redundant code in this function into dedicated helper functions, but I was (for whatever reason) unable to get them to function properly. This might have been due to lack of understanding of the nuances of variable inheritence across member functions, but I ultimately had to scrap this idea and stick with a somewhat overly complicated and redundant printDataInput function.

**What skills from this program will be particularly transferable to other projects or course work?**

The skills I used in this project that will be particularly tranferable would be as follows: use of public and private member functions, variable inheritance, as well as the creation and use of helper functions. 

As mentioned previously, my understanding of proper variable inheritance across member functions is still a bit fuzzy, and not entirely developed. But, overall, I've made quite a few strides forward in understanding these concepts over the course of this project. This has also been true for my understanding/use of variable inheritance and helper functions. 

**How did you make this program maintainable, readable, and adaptable?**

To make this program more maintainable, readable, and adaptable, I used a number of standard coding practices. The first and most obvious thing I did to make the program more maintainable and readable was to comment my code. Regardless of how simplistic or overly complicated a program can be, hainvg proper programming documentation can mean the difference between easily maintainable code or an unfixable mess. Proper code commenting helps both the original creator and proceeding programmers understand a programs individual variables, functions, and structure. 

Another thing I did was to separate (to the best of my ability) individual tasks into unique member functions. This allows for increased code readability and helps to simplify any future repairs/updates to the program's code.

**Conclusion:**

Overall, this project has both been a frustrating and highly satisfying learning experience for me. It's taught quite a bit about programming in the C++ programming langauge and has seriously helped in improving my overall confidence as a programmer. There's still so much for me to learn and improve upon as a programmer, but this project has helped to instill that level of confidence to make those next steps forward. Thanks again for reading and grading this assignment, and I hope you have a great rest of your day, professor!
