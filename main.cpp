#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:   cat
//  action 1: purr 
cat.purr();
//  action 2: sleep
cat.sleep();
//  action 3: eat
cat.eat();
//  2)
//  Noun: computer
//  action 1: checks emails
computer.checkEmail();
//  action 2: watch youtube
computer.watchYoutube();
//  action 3: opens visual studio
computer.openVS();
//  3) 
//  Noun: House
//  action 1: shelters family
house.shelterFamily();
//  action 2: casts shadow
house.castShadow();
//  action 3: makes a home
house.makeHome();
//  4)
//  Noun:Bird
//  action 1:Fly
bird.Fly();
//  action 2: eats a worm
bird.eatWorm();
//  action 3: makes a nest
bird.makeNest();
//  5)
//  Noun: satellite
//  action 1: orbits the earth
satelitte.orbitEarth();
//  action 2: sends location
satelitte.sendLocation
//  action 3: recives a message
satellite.receivesMessage 
//  6)
//  Noun: coffee
//  action 1: warms my mouth
coffee.warmMouth();
//  action 2: stains teeth
coffee.stainTeeth();
//  action 3: wakes me up
coffee.wakeUP();
//  7)
//  Noun: Doctor
//  action 1: prescribe medicine
doctor.prescribeMedicine();
//  action 2: treat patient
doctor.treatPatient();
//  action 3: operate
 doctor.operate();
//  8)
//  Noun:window
//  action 1:opens
window.open();
//  action 2: closes
window.close();
//  action 3: lets in light
window.letInLight();
//  9)
//  Noun: Government
//  action 1:makes laws
government.makeLaw();
//  action 2:takes taxes
government.takeTaxes();
//  action 3: passes bills
government.passBill();
//  10)
//  Noun: guitar
//  action 1:body resonates
guitar.bodyResonate();
//  action 2: strings vibrate
guitar.stirngVibrate();
//  action 3: machine head tighten
 guitar.machineheadTighten();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
