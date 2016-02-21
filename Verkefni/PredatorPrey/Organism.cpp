#include <iostream>
#include "Organism.h"
#include "World.h"

// Create an organism at the given coordinates in the given world
Organism::Organism(World* aWorld, int xcoord, int ycoord) {
    world = aWorld;
    x = xcoord;
    y = ycoord;
    breedTicks = 0;
    moved = false;
    world->setAt(x, y, this);
}


void Organism::setMoved(bool hasMoved) {   // flags the organism as moved or not
    moved = hasMoved;
}

bool Organism::hasMoved() const {  // has the organism moved or not?
    return moved;
}

// Makes a random move by calling movesTo().  Called by move() in the subclasses
void Organism::moveRandomly()    
{
        /*** You have to implement this function ***/   
}

void Organism::movesTo(int xNew, int yNew) // moves the organism from coordinates (x,y) to (xNew,yNew)
{
        /*** You have to implement this function ***/
}

void Organism::breedAtAdjacentCell()  { // breeds an organism at an adjacent cell
	// Tries to produce one new organism in UP, DOWN, LEFT, or RIGHT cell (in that order)
	// Makes sure not to breed off the grid
    // This method calls the generateOffspring() method

        /*** You have to implement this function ***/
}

bool Organism::isDead() const { // Returns true if organism is dead, false otherwise.
    return false;
}
