# Contributing to Xadrez-C

Thank you for considering contributing to Xadrez-C! This document outlines the process for contributing to the project.

## Commit Message Format

We follow the Conventional Commits specification for our commit messages:

- `feat:` - A new feature (e.g., new chess piece movement)
- `fix:` - A bug fix
- `docs:` - Documentation only changes
- `style:` - Changes that do not affect the meaning of the code
- `refactor:` - A code change that neither fixes a bug nor adds a feature
- `perf:` - A code change that improves performance
- `test:` - Adding missing tests or correcting existing tests
- `chore:` - Changes to the build process or auxiliary tools

## Pull Request Process

1. Fork the project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'feat: Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## Code Style

- Use consistent indentation (2 spaces)
- Use descriptive variable and function names
- Add comments for complex logic
- Follow the existing code structure
- Add proper documentation using Doxygen-style comments

## Project Structure

```
xadrez-c/
├── .github/workflows/   # GitHub Actions workflows
├── include/             # Header files
├── src/                 # Source files
│   └── pecas/           # Chess piece implementations
├── main.c               # Main program entry point
├── tabuleiro.c          # Chess board implementation
└── README.md            # Project documentation
```

## Adding New Chess Pieces

When adding a new chess piece:

1. Create a new file in `src/pecas/` for your implementation
2. Add function prototypes to `include/pecas.h`
3. Update `tabuleiro.c` with any new constants
4. Update `main.c` to include your new piece's movement

## Testing

Before submitting your changes, make sure:

1. Your code compiles without warnings
2. The program runs correctly with both basic and master level options
3. All chess piece movements work as expected
4. Documentation is updated to reflect your changes
