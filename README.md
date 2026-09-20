# Number Guessing Game

A simple command-line game written in C. The program picks a random number between 1 and 100, and you try to guess it — with a hint after each try telling you whether to go higher or lower.

## How to Play

1. Run the program.
2. Enter a guess when prompted.
3. The game tells you if your guess is too low, too high, or correct.
4. Keep guessing until you find the number. The game then reports how many attempts it took.

## Requirements

- A C compiler (e.g. `gcc`)

## Build & Run

```bash
gcc game.c -o game
./game
```

On Windows, run `game.exe` instead.

## Example

```
Welcome to the Number Guessing Game!
I have selected a random number between 1 and 100.
Try to guess the number!
Enter your guess: 50
Too high! Try again.
Enter your guess: 25
Too low! Try again.
Enter your guess: 37
Congratulations! You guessed the number in 3 attempts.
```

## Future Scope

Some quick improvements planned for this game:

1. Guess limit — add a maximum number of attempts (e.g. 10) so the game can end in a "loss" state, not just a win.
2. Custom range — let the player choose the guessing range instead of it being fixed at 1–100.

## License

Feel free to use, modify, and share this project.
