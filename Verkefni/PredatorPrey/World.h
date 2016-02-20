#ifndef WORLD_H
#define WORLD_H
#include "Organism.h"

// The possible moves
enum Move {UP = 0, DOWN, LEFT, RIGHT};

// The size of this world
const int WORLDSIZE = 20;

// Number of initial ants
const int INITIAL_ANTS = 100;

// Number of initial bugs
const int INITIAL_BUGS = 5;

// Time steps between breeding of ants
const int BREED_ANTS = 3;

// Time steps between breeding of bugs
const int BREED_BUGS = 8;

// Time steps until bugs die if they have not eaten
const int STARVE_BUGS = 3;

class World
{
    public:
        // Constructor: creates and initializes this world. the seed is used for
        // seeding the random behaviour.
        World(unsigned int seed);

        // Destructor.
        ~World();

        // Returns the organism at the given coordinates.
        Organism* getAt(int x, int y) const;

        // Sets the organism org at position (x,y).
        void setAt(int x, int y, Organism* org);

        // Displays this world.
        void display() const;

        // Simulates one time step in this world.
        void simulateOneStep();

        // Returns a random position in the grid.
        void randomPosition(int& x, int& y) const;

        // Returns a random move (UP, DOWN, LEFT or RIGHT).
        Move randomMove() const;

    private:
        // The grid in which the organisms live. According the to image below,
        // the correct iteration order through grid starts at the top left
        // corner (i.e. grid[0][0]), loops through one column at a time and ends
        // at the bottom right corner (i.e. grid[WORLDSIZE-1][WORLDSIZE-1]).
        //
        // grid[0, 0]          , grid[1, 0],      ...,      grid[WORLDSIZE-1, 0]
        // grid[0, 1]          , grid[1, 1],      ...,      grid[WORLDSIZE-1, 1]
        //    .                                                     .
        //    .                                                     .
        //    .                                                     .
        // grid[0, WORLDSIZE-2], grid[1, WORLDSIZE-2], ..., grid[WORLDSIZE-1, WORLDSIZE-2]
        // grid[0, WORLDSIZE-1], grid[1, WORLDSIZE-1], ..., grid[WORLDSIZE-1, WORLDSIZE-1]
		//
		Organism* grid[WORLDSIZE][WORLDSIZE];

        // Randomly create `count` many organisms of type `orgType`.  This
        // method uses the parameterized constructor in Ant and Bug.
        void createOrganisms(OrganismType orgType, int count);

        // Reset all organisms to not moved. This is necessary because later we
        // iterate through the grid starting from the top left moving to the
        // bottom right looking for an organism to move. Say if an organism
        // moves down, we don't want to move the organism again when we reach
        // it.
        void resetOrganisms();

        // Make every organisms in this world of type aType move. Make sure to
        // to iterate through grid in order as specified above and only move an
        // organism if it hasn't moved already.
        void moveOrganism(OrganismType aType);

        // Remove all dead organism from this world. Iterates through the grid
        // and uses the method Organism::isDead() to test if an organism is
        // dead. For this assignment in this method, only starved bugs will be
        // removed.
        void cleanup();

        // Make every organism in this world breed. Make sure to iterate
        // through grid in order as specified above and to only breed organisms
        // that have moved, since breeding places new organisms on the map we
        // don't want to try and breed those.
        void breedOrganisms();
};

#endif // WORLD_H
