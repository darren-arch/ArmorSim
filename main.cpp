#include <iostream>
#include <cmath>

const float density = 1.2; 
const float DragCoefficent = 0.3;

float Drag(float V, float A){
    // uses the formula for drag
    return (DragCoefficent*density*std::pow(V, 2)*A)/2;
}

// given:
// initial velocity, mass, area
// time interval: calculate every 0.1 seconds

//  momentum = mass * velocity
// force = mass * acceleration
// force = the change of momentum / time
// the change of momentum = final momentum - initial momentum
// momentum = mass * velocity
// force of drag = (drag coefficent * density of fluid * velocity^2 * area)/2
// time = integral of (force - force of drag)
// distance = velocity * time
// velocity = momentum/mass
// the change of momentum = force * time
// final momentum = change of momentum + inital momentum
// distance = velocity * timeinterval

// acceleration inf f=ma can be replaced by the initial velocity because we can assume that it took 1 second for the object to achieve its speed
// no matter the acceleration it still would take the same amoutn of force to accelerate the object to that speed
// so for this experiment we can say force = mass * velocity to calculate the total amount of stored force an object has
// from here we would do force - force of drag that would find the force left in the system, then I would need to calculate the velocity from f = change momentum/time
// 

// The issue is calculating this over a period of time, because the force of drag changes as the velocity decreases, momentum decreases, etc

// float timeinterval = 0.1;
// float totaltime;
// float objforce = mass * velocity;
// float dragforce = Drag(velocity, area);
// objforce = objforce - dragforce;
// float initialmomentum = mass * velocity;
// float changeofmomentum = objforce * timeinterval;
// float finalmomentum = changeofmomentum + initialmomentum;
// velocity = finalmomentum/mass;


int main() {
    float area, velocity, mass, totaltime, objforce = 2, dragforce, initialmomentum = 2, changeofmomentum, finalmomentum, distance;
    float timeinterval = 0.1;

    std::cout << "What is the Area of the object in m^2: ";
    std::cin >> area;
    std::cout << "What is the velocity of the object in m/s: ";
    std::cin >> velocity;
    std::cout << "What is the mass of the object in kg: ";
    std::cin >> mass;
    std::cout << "initialmoementum: " << mass * velocity << "\n";
    while (initialmomentum > 1) {
        initialmomentum = mass * velocity;
        dragforce = Drag(velocity, area);
        // std::cout << "Dragforce: " << dragforce << "\n";
        changeofmomentum = dragforce * timeinterval;
        // std::cout << "changeofmomentum: " << changeofmomentum << "\n";
        finalmomentum = initialmomentum - changeofmomentum;
        velocity = finalmomentum/mass;
        distance += velocity * timeinterval;
    }


    std::cout << "The final velocity is: " << velocity << "m/s\n";
    std::cout << "The distance traveled was: " << distance << "m\n";

    return 0;
}