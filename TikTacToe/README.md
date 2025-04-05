# Terminal Tic-Tac-Toe in C

This is a simple terminal-based **Tic-Tac-Toe game** written in the C programming language. It is designed as a learning project to explore basic C concepts such as arrays, input/output, conditionals, loops, and functions.

---

## 🧠 What You'll Learn

- Working with 2D arrays in C
- Using `#define` macros for constants
- Writing modular functions (`main`, input, rendering, judging)
- Handling user input
- Basic game logic and flow
- Using simple terminal commands like `system("clear")`

---

## 🎮 How the Game Works

- The game is played by two players: Player 1 (`x`) and Player 2 (`o`).
- The board is a 3x3 grid, with positions labeled as:
- Players take turns entering a position code (e.g., `12` to mark row 1, column 2).
- The game updates the board, checks for a winner or a draw, and continues until a result is reached.

---

## ▶️ How to Compile and Run

1. Make sure you have `gcc` installed.
2. Compile the program:

```bash
gcc tic_tac_toe.c -o tic_tac_toe


./tic_tac_toe
Player 1 (x), enter your move: 11

x |   |
---
  |   |
---
  |   |

Player 2 (o), enter your move: 22

x |   |
---
  | o |
---
  |   |
```

---

## Future Improvements

- AI opponent mode (basic or minimax)
- Scoring and replay option
- Better UI with colored output
