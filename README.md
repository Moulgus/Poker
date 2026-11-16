# Console Poker Game Prototype

A small console-based card game written in C++ as a learning project. The application models a deck, players, a game table, round flow, and winner selection using separate classes and STL containers.

## What the project demonstrates

- Object-oriented design with dedicated `Card`, `Deck`, `Player`, `Table`, `Game`, and `UI` classes
- Strongly typed enums with `enum class`
- STL containers and algorithms, including `std::vector` and `std::shuffle`
- Random number generation with `std::mt19937`
- References, const-correct member functions, range-based loops, and automatic type deduction
- Separation of game logic, data, and console input/output
- Visual Studio Debug/Release configurations for Win32 and x64

## Current functionality

- Creates and shuffles a standard 52-card deck
- Accepts player names through a console interface
- Deals five cards to each player
- Displays player hands
- Selects and announces the winner of the round

The current version is an educational prototype. Hand evaluation uses a simplified rank-based score rather than complete poker-hand classification.

## Project structure

- `Card` - card rank, suit, and text representation
- `Deck` - deck creation, shuffling, and dealing
- `Player` - player data and hand management
- `Table` - players, deck, and initial card distribution
- `Game` - round flow and winner selection
- `UI` - console input and output
- `main.cpp` - application entry point

## Building and running

### Requirements

- Visual Studio 2022
- Desktop development with C++ workload
- MSVC v143 toolset
- Windows 10 SDK

### Steps

1. Clone the repository:

   ```bash
   git clone https://github.com/Moulgus/Poker.git
   ```

2. Open `Poker.vcxproj` in Visual Studio.
3. Select a Debug or Release configuration and Win32 or x64 platform.
4. Build and run the project.

## Possible future improvements

- Complete poker-hand classification and comparison
- Betting and chip management
- AI-controlled opponents
- Multiple-round game flow
- Input validation and automated tests

## Author

Michał Jurewicz  
[GitHub profile](https://github.com/Moulgus)
