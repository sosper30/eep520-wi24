{\rtf1\ansi\ansicpg1252\cocoartf2759
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 /**\
 * @file Car.h\
 * @brief This file contains the Car class declaration.\
 * @author Sep Makhsous\
 * @date 2024-02-05\
 */\
\
#ifndef CAR_H\
#define CAR_H\
\
#include "Engine.h"\
\
/**\
 * @class Car\
 * @brief The Car class represents a car with an engine and provides functionalities to interact with the engine.\
 *\
 * This class demonstrates the usage of the Engine class, allowing the car to start or stop its engine, \
 * showcasing the relationship and interaction between different objects/classes.\
 * \
 * @author Sep Makhsous\
 * @date 2024-02-05\
 */\
class Car \{\
private:\
    Engine engine; ///< Engine object representing the car's engine.\
\
public:\
    /**\
     * @brief Constructor for the Car class.\
     * @param engine An Engine object.\
     */\
    Car(const Engine& engine);\
\
    /**\
     * @brief Starts the car's engine.\
     * @return void\
     */\
    void startEngine();\
\
    /**\
     * @brief Stops the car's engine.\
     * @return void\
     */\
    void stopEngine();\
\
    // Additional methods can be added here\
\};\
\
#endif // CAR_H\
}