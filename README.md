# 505matrix

A little digital rain, written in C++.

Inspired by the iconic Matrix terminal effect, built for fun, and named **505matrix**.

## Preview

```text
  7   3 Q   9   A   1
X   4   8 M   2   7
  1 0   K   3   5 Z
9   2   6 R   1   4
```

## Features

- Randomized ASCII characters and digits
- Independent column cooldowns and speeds
- Green terminal output
- Rolling history capped at 30 rows
- Lightweight C++ implementation

## Requirements

- C++11 or later
- A Unix-like operating system
- A terminal supporting ANSI escape sequences

## Build

```bash
g++ main.cpp -o 505matrix -std=c++11
```

## Run

```bash
./505matrix
```

Press `Ctrl+C` to stop the animation.

## Configuration

| Setting | Value |
|---|---:|
| Columns | 50 |
| Maximum stored rows | 30 |
| Frame delay | 100 ms |
| Column cooldown | 8–32 frames |
| Column speed | 1–4 |

These values can be adjusted directly in the source code.

## Built with

- C++ and prayers

A small experiment in terminal animation and randomness.