# OnlineShippingSystem
Online Shipping System Final Project

This project designed and developed a Graphical User Interface GUI application for an Online Shipping System.  The system allows the user to enter the customer’s name, customer id, number of cookware sets for each customer order, and shipping priority.  The order id is assigned automatically by the system.  The Customer class holds customer’s name and customer id.  The Cookware class holds number of cookware sets and inherits Customer class members.  The Shipping class holds shipping priority and inherits Cookware class members.  The ShippingDepartment class holds order id and inherits Shipping class members.  The ShippingDepartment class has access to all members of all classes due to multi-level inheritance.  Required functionality and GUI with the data structures are implemented for the system.  The Online Shipping System uses an array to store the customer and order information.  Further, a priority queue is used to determine the order of how customer orders should be sent by the shipping department.  Insertion sort is used to sort the customer id or order id.  The shipping department can view the orders report sorted by customer id, order id, or the orders priority placed by the customer.
