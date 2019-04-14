/**
 * @file mainpage.h
 *
 * @copyright 2019 Kadin Schermers
 */

#ifndef PROJECT_SRC_MAINPAGE_H_
#define PROJECT_SRC_MAINPAGE_H_

/*! \mainpage My Personal Index Page
   *
   * \section intro_sec Introduction
   *
   * This project is for CSCI 3081. The base of the code is written in C++,
   * a language that I have some experience in, but not fully fluent with.
   * The objective of the project is to implement feature extensions and
   * structural redesignens to the pre-existing code base through a series of
   * iterations, each with a list of objectives to achieve by the end of each,
   * similar to an agile development methodology. The project is loosely based
   * on the Model-Viewer-Controller design pattern. There are three types of
   * models for this program; BraitenbergVehicle s, Food, and Light s.
   * These exist in an Arena, which handles their interactions.
   *
   * The viewer is the GraphicsArenaViewer, which utilizes OpenGL to draw all
   * the models and allows the user to view their interactions and select
   * different parameters that modify certain models behaviors. These behaviors
   * are defined by five possibilities; Love, Coward, Aggressive, Explore,
   * and None. They effect how Braitenberg Vehicles interact when they encounter
   * other entities in the Arena. This link explains the motivation
   * behind BVs well:
   * https://academics.skidmore.edu/wikis/vehicles/images/Pfeifer1996.pdf

   * The controller is the Controller class, which ties all these together and
   * uses JSON scene files to generate different scenes with different entities
   * to see our interactions take place.

   * The most important thing I had to do to understand the project before I
   * began to work on it was understand the structure of the existing code base.
   * One of the very first requirements for the project was to generate a UML
   * diagram for the project. We had to write up the structures for all of the
   * classes and draw a complete diagram of how they are all used within the
   * project. This dramatically increased my comprehension of the project
   * compared to a long list of files. Understanding which files were used where
   * and writing out all the method names and variables allowed to see the
   * project in a ‘collapsed view’ where the most important information was
   * there, but I did not have to scroll through all the code of the methods
   * that can make it harder to comprehend.

   * For working with this project, a tip is that helped me is that 80% of the
   * classes do not even have to be looked at to implement new features. To make
   * changes to BVs, the only files that really need to be touched are the BV
   * classes themselves, and maybe Arena and GAV if you need to create new
   * interactions. To implement larger changes, more files will probably have to
   * modified, but it is easy to do so by following pre-existing code in the
   * files.
   */


#endif  // PROJECT_SRC_MAINPAGE_H_
