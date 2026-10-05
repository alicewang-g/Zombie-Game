//
//  Game.h
//  cs32 project 1
//
//  Created by Alice Wang on 4/2/26.
//

#ifndef Game_h
#define Game_h

#include <string>

class Arena;

class Game
{
  public:
      // Constructor/destructor
    Game(int rows, int cols, int nZombies);
    ~Game();

      // Mutators
    void play();
    bool decodeDirection(char ch, int& dir);
    bool recommendMove(const Arena& a, int r, int c, int& bestDir);
    int computeDanger(const Arena& a, int r, int c);
    
  private:
    Arena* m_arena;
    int    m_turns;

      // Helper functions
    std::string takePlayerTurn();
};

#endif /* Game_h */
