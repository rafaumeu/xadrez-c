# 🎮 Chess Piece Movement Simulator

<div align="center">

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

</div>

## 📖 About

This project simulates the movement of chess pieces (Rook, Bishop, and Queen) using different loop structures in C. Each piece demonstrates a specific type of movement using a different loop structure:

- **Rook**: Uses `for` loop to move 5 squares to the right
- **Bishop**: Uses `while` loop to move 5 squares diagonally (up and right)
- **Queen**: Uses `do-while` loop to move 8 squares to the left

## 🚀 Features

- Simulates three different chess pieces movements
- Implements three types of loop structures
- Console-based visualization of movements
- Clean and documented code

## 📋 Requirements

- GCC Compiler
- Git
- Operating System: Windows, Linux, or macOS

## 🛠️ Installation

1. Clone the repository:

```bash
git clone <https://github.com/yourusername/xadrez-c.git>
cd xadrez-c
```

2. Compile the program:

```bash
gcc -o xadrez main.c src/pecas/torre.c src/pecas/bispo.c src/pecas/rainha.c src/tabuleiro/tabuleiro.c -I.
```

3. Run the program:

```bash
./xadrez
```

## 📁 Project Structure

```
xadrez-c/
├── include/
│   ├── pecas.h
│   └── tabuleiro.h
├── src/
│   ├── pecas/
│   │   ├── torre.c
│   │   ├── bispo.c
│   │   └── rainha.c
│   └── tabuleiro/
│       └── tabuleiro.c
├── main.c
└── README.md
```

## 🎯 Usage

The program will simulate the movement of each piece sequentially:

1. The Rook will move 5 squares to the right
2. The Bishop will move 5 squares diagonally
3. The Queen will move 8 squares to the left

## 🤝 Contributing

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

<div align="center">
Made with ❤️ by Rafael Dias Zendron
</div>
<div align="center">
<img src="https://github.com/rafaumeu.png" width="100" height="100" style="border-radius: 50%;">

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/rafael-dias-zendron-528290132/)
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/rafaumeu)
</div>
