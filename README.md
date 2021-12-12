# OnlineShippingSystem
Online Shipping System Final Project

This project is a Graphical User Interface GUI application for an Online Shipping System.  The system allows the user to enter the customer’s name, customer id, number of cookware sets for each customer order, and shipping priority.  The order id is assigned automatically by the system.  The Customer class holds customer’s name and customer id.  The Cookware class holds number of cookware sets and inherits Customer class members.  The Shipping class holds shipping priority and inherits Cookware class members.  The ShippingDepartment class holds order id and inherits Shipping class members.  The ShippingDepartment class has access to all members of all classes due to multi-level inheritance.  Required functionality and GUI with the data structures are implemented for the system.  The Online Shipping System uses an array to store the customer and order information.  Further, a priority queue is used to determine the order of how customer orders should be sent by the shipping department.  Insertion sort is used to sort the customer id or order id.  The shipping department can view the orders report sorted by customer id, order id, or the orders priority placed by the customer.
Online Shipping System folder contains the GUI to run for the program.  TestsOnlineShippingSystem folder contains the tests to run for the program.

How to Run this Project in Visual Studio?
This project is developed in C++/CLI graphical user interfaces using visual studio 2019. To run this project in visual studio you just need to clone it by following the steps as follows:

1. Open Visual Studio and select "Clone a repository" as given below in the screenshot.
 ![image](https://user-images.githubusercontent.com/92899974/145697916-3c1bb467-2d1d-46f3-be0e-01d431207a4d.png)

2. Now copy the project github URL and paste as in the screenshot given below
  Project Git URL: https://github.com/pj00tech/OnlineShippingSystem.git
  ![image](https://user-images.githubusercontent.com/92899974/145698072-be8f73b7-9d00-4dcd-97b4-26ae0bb3d5cf.png)

3. Then Select "Clone" and project will be imported into Visual Studio and you will be able to run.
4. Here is the Final GUI after the execution
![image](https://user-images.githubusercontent.com/92899974/145698172-85d9e079-71a6-4c6d-a5b4-35c4992d28ba.png)




