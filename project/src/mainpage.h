/**
 * @file mainpage.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef PROJECT_SRC_MAINPAGE_H_
#define PROJECT_SRC_MAINPAGE_H_

/*! \mainpage CSCI3081 Project Documentation Landing Page

* \section intro Introduction
* The objective of the project is to implement feature extensions and structural redesigns to the pre-existing code base, written in C++, through a series of iterations, each with a list of objectives to achieve by the end of each, similar to an agile development methodology. 

* \subsection mvc Model-View-Controller 
* The project is loosely based on the Model-View-Controller design pattern. There are three types of models for this program; BraitenbergVehicle, Food, and Light. These exist in an Arena, which handles their interactions.

* The viewer is the GraphicsArenViewer, which utilizes OpenGL to draw all the models and allows the user to view their interactions and select different parameters that modify certain models behaviors. These behaviors are defined by five possibilities; Love, Coward, Aggressive, Explore, and None. They effect how  * Braitenberg Vehicles interact when they encounter other entities in the Arena. This link explains the motivation behind BVs well: https://academics.skidmore.edu/wikis/vehicles/images/Pfeifer1996.pdf

* To see how this is implemented in the actual project look at the Update() method of the BraitenbergVehicle class here (lines 105-320):  https://github.umn.edu/umn-csci-3081-S19/repo-scher528/blob/master/project/src/braitenberg_vehicle.cc

* The controller is the Controller class, which ties all these together and uses JSON scene files to generate different scenes with different entities to see our interactions take place.

* \subsection personnel Personnel Note
* The most important thing I had to do to understand the project before I began to work on it was understand the structure of the existing code base. One of the very first requirements for the project was to generate a UML diagram for the project. We had to write up the structures for all of the classes and draw a 
* complete diagram of how they are all used within the project. This dramatically increased my comprehension of the project compared to a long list of files. Understanding which files were used where and writing out all the method names and variables allowed to see the project in a ‘collapsed view’ where the most 
* important information was there, but I did not have to scroll through all the code of the methods that can make it harder to comprehend.

* For working with this project, a tip is that helped me is that 80% of the classes do not even have to be looked at to implement new features. To make changes to BraitenbergVehicle, the only files that will most likely require modification are the BraitenbergVehicle classes themselves, and also Arena and 
* GraphicsArenaViewer if new interactions need to be implemented as well. To implement larger changes, more files will probably have to modified, but it is easy to do so by following pre-existing code in the files and using the UML diagrams to help keep track of what classes interact with each other.

* \subsection run Running the Project
* To run this project, first, ensure that you are on a linux machine. Navigate to the project directory from a terminal window. Once there, simply type the command
\code
* $ make
\endcode
* This will compile all necessary files and create all object files needed for the project to run correctly. Next, use the command 
\code
* $ ./build/bin/arenaviewer scenes/xyz.json 
\endcode
* where xyz is the name of the json (or potentially .csv with the implementation done in iteration 3) that you wish to run. This will open the graphics interface that allows you to view the arena, it will look something like this:
* \image html viewer.png "Graphics Viewer" width=1000

* You may see more entities in the arena, here I am just using the default configuration file for simplicity. You can see on the left hand side the options to select different entities. In the image above, the BraitenbergVehicle is selected so that its options can be easily discussed. You can choose its behavior for
* Light, Food, and other BVs. You can also observe its WheelVelocity for each of these behaviors and how they are actively affecting the BV. Once all choices have been selected, click the ‘Run’ button at the bottom of the left side to watch the entities interact!

* \subsection config Building a Configuration File
* Though the project provides you with a few choices of configuration files to use run, you may want to create your own to test expanded functionality later on. There are two ways in which this can be done, in a .json file or a .csv file

* To do so with a .json file, let us look at the default.json file provided in the beginning of the project to gain an understanding of the proper formatting. 

\code{.json}
* {"entities": [ 

*      {"type": "Braitenberg", "x":270, "y":270, "r":15, "theta": 215, "light_behavior": "None", "food_behavior": "Explore" },

*      {"type": "Food", "x":200, "y":200, "r":20, "theta": 0.0 },

*      {"type": "Light", "x":150, "y":300, "r":25 } ]

* }
\endcode

* You can see that the file is very simply laid out, with a list of entities to be included, and each entity has a list of its necessary parameters following it. As few or as many entities can be included that you wish. To create a .csv type file, you follow the same general format of the .json file, but only need 
* the right-hand-side values of each parameter, separated by commas. The default.csv file looks like:
\code
* “Braitenberg”,270,270,15,215,”None”,”Explore”,

* “Food”,200,200,20,0.0,“Light”,150,300,25
\endcode

*/
#endif  // PROJECT_SRC_MAINPAGE_H_
