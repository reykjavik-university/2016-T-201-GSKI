#include <iostream>
#include <cstdlib>  // for rand
#include "World.h"
#include "Ant.h"
#include "Bug.h"
using namespace std;

/********* Public functions *********/
World::World(unsigned int seed)  // default constructor: creates and initializes the world
{
    srand(seed); // seed the random generator
    // Create an empty world
    for (int i = 0; i < WORLDSIZE; i++) {
        for (int j = 0; j < WORLDSIZE; j++) {
            grid[i][j] = NULL;
        }
    }
    createOrganisms(ANT, INITIAL_ANTS); // creates the ants
    createOrganisms(BUG, INITIAL_BUGS); // creates the bugs
}

World::~World() { // destructor
    // Deallocate memory allocated to organisms

    /*** You have to implement this function ***/
}

// Return the organism at the given coordinates
// If the coordinates are not valid, returns NULL
Organism* World::getAt(int x, int y) const {
    if  ((x >= 0) && (x < WORLDSIZE) &&
         (y >= 0) && (y < WORLDSIZE)) {
            return grid[x][y];
    }
    else {
        return NULL;
    }
}

// Sets the entry at x,y to the value passed in.
void World::setAt(int x, int y, Organism* org) {
    if ((x >= 0) && (x < WORLDSIZE) &&
        (y >= 0) && (y < WORLDSIZE)) {
            grid[x][y] = org;
    }
}

// Displays the world in ASCII. "." for empty slot.
void World::display() const {
    int numAnts = 0;
    int numBugs = 0;
    for (int j = 0; j < WORLDSIZE; j++) {
        for (int i = 0; i < WORLDSIZE; i++) {
            if (grid[i][j] == NULL) {
                cout << ".";
            }
            else {
                if (grid[i][j]->getType() == ANT) {
                    numAnts++;
                }
                else if (grid[i][j]->getType() == BUG) {
                    numBugs++;
                }
                cout << grid[i][j]->representation();
            }
        }
        cout << endl;
    }
    cout << "Ants: " << numAnts << " Bugs: " << numBugs << endl << endl;
}

void World::simulateOneStep() {
// This is the main routine that simulates one turn in the world.
// First move bugs and then ants.
// Then make bugs starve (which happends under a certain condition) and, finally,
// make the organisms breed (again which happens under a certain condition).
    resetOrganisms();     // Reset all organisms to not moved
    moveOrganism(BUG);    // Move the bugs
    moveOrganism(ANT);    // Move the ants
    cleanup();            // Make the bugs starve
    breedOrganisms();     // Make them breed
}


void World::randomPosition(int& x, int& y) const {
    x = rand() % WORLDSIZE;
    y = rand() % WORLDSIZE;
}

Move World::randomMove() const {
    return static_cast<Move>(rand() % 4);
}

/********* Private functions *********/
void World::createOrganisms(OrganismType orgType, int count) { // creates count organisms of type orgType
    // Randomly create count many organisms

    /*** You have to implement this function ***/
}

void World::resetOrganisms() {  // Reset all organisms to not moved
// Marks all organisms as not moved.
// This is necessary because later we iterate through the grid starting from the top
// looking for an organism to move . If one moves down, we don't want
// to move it again when we reach it.

    /*** You have to implement this function ***/

}

void World::moveOrganism(OrganismType aType) { // Move all organisms of type aType
    // Loop through cells in order and move if it's a organism of type aType
    // Make sure to only move an organism if it hasn't moved already and then mark it as moved

    /*** You have to implement this function ***/

}

// Remove all dead organisms from this world.
void World::cleanup() {
    for (int i = 0; i < WORLDSIZE; i++) {
        for (int j = 0; j < WORLDSIZE; j++) {
            // Kill off any organisms that haven't eaten recently
            if ((grid[i][j] != NULL) && grid[i][j]->isDead()) {
                delete grid[i][j];
                grid[i][j] = NULL;
            }
        }
    }
}

void World::breedOrganisms() { // Make the organisms breed
    // Loop through cells in order and make the organism breed
    // Only breed organisms that have moved, since
    // breeding places new organisms on the map we
    // don't want to try and breed those

    /*** You have to implement this function ***/

}
