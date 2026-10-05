Zombie (C++ Console Game)

The goal of this game is to place brains (using x) so that it kills off the zombies. To avoid them, move in of the four directions (n,e,s,w). If you get caught by a zombie, the game ends in a loss. Clicing h will give you the history of the board and it can be used to view where the zombie have eaten a brain.

Overview & Architecture
The project employs Object-Oriented Programming (OOP) in C++ to encapsulate the game state, arena rendering, entity behaviors, and player interactions.
Key Components
Game: Manages the main game loop, turn transitions, user input processing, and victory/defeat conditions.
Arena: Represents the bounded grid layout. It tracks all active entities (player and zombies), handles collision detection, and updates board boundaries.
Player: Represents the user-controlled character with attributes like position, health, and actions (e.g., move, drop pre-placed items, or attack).
Zombie: Controls AI-driven enemy behavior, moving towards the player each turn and registering attacks upon proximity.
History: Tracks and renders cumulative action events, board state history, or attack locations across the game session.

Game Rules & MechanicsBoard Setup: 
The game initializes an N x M grid arena containing the player and a designated number of zombies placed at random or preset locations.
Turn Flow:
On each turn, the player selects an action (move in a cardinal direction, stand still, or use an ability/item). After the player acts, all active zombies move according to their movement logic.
Combat & Damage: 
If a zombie moves into or occupies the same position as the player, the player takes damage.The player can attack adjacent zombies or use environmental mechanics to eliminate them.
End Game Conditions:
 The player successfully clears the arena of all zombies is victory. The player's health drops to zero after being overrun by zombies ends in defeat.

