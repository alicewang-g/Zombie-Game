//
//  Zombie.h
//  cs32 project 1
//
//  Created by Alice Wang on 4/2/26.
//

#ifndef Zombie_h
#define Zombie_h

class Arena;

class Zombie
{
  public:
      // Constructor
    Zombie(Arena* ap, int r, int c);

      // Accessors
    int  row() const;
    int  col() const;
    bool isDead() const;

      // Mutators
    void move();

  private:
    Arena* m_arena;
    int    m_row;
    int    m_col;
    int    m_health;
    int    m_idleTurnsRemaining;
};

#endif /* Zombie_h */
