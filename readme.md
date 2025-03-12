# 🎮 Chess Piece Movement Simulator

<div align="center">

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![CodeQL](https://github.com/rafaumeu/xadrez-c/actions/workflows/codeql.yml/badge.svg)](https://github.com/rafaumeu/xadrez-c/actions/workflows/codeql.yml)
![GitHub last commit](https://img.shields.io/github/last-commit/rafaumeu/xadrez-c)
![GitHub issues](https://img.shields.io/github/issues/rafaumeu/xadrez-c)
![GitHub pull requests](https://img.shields.io/github/issues-pr/rafaumeu/xadrez-c)
[![Educational](https://img.shields.io/badge/Educational-Project-blue)](https://github.com/rafaumeu/xadrez-c)

</div>

## 📖 About

This project simulates the movement of chess pieces (Rook, Bishop, Queen, and Knight) using different loop structures and recursion in C. The project has two challenge levels:

### Basic Level

Each piece demonstrates a specific type of movement using a different loop structure:

- **Rook**: Uses `for` loop to move 5 squares to the right
- **Bishop**: Uses `while` loop to move 5 squares diagonally (up and right)
- **Queen**: Uses `do-while` loop to move 8 squares to the left
- **Knight**: Uses nested loops (`for` and `while`) to move in an "L" shape (2 squares down, 1 square left)

### Master Level

Advanced implementations using recursion and complex loops:

- **Rook**: Uses recursion to move 5 squares to the right
- **Bishop**: Implemented with both recursion and nested loops for diagonal movement
- **Queen**: Uses recursion to move 8 squares to the left
- **Knight**: Uses complex nested loops with multiple conditions to move in an "L" shape (2 squares up, 1 square right)

## 🚀 Features

- Simulates four different chess pieces movements
- Implements various loop structures including nested loops
- Demonstrates recursive implementations of movement patterns
- Console-based visualization of movements
- Clean and documented code

## 📋 Requirements

- GCC Compiler
- Git
- Operating System: Windows, Linux, or macOS

## 🛠️ Installation

1. Clone the repository:

```
git clone <repository-url>
cd xadrez-c
```

2. Compile the program:

```
gcc -o xadrez main.c tabuleiro.c src/pecas/*.c -Iinclude
```

3. Run the program:

```
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
│   │   ├── rainha.c
│   │   ├── cavalo.c
│   │   ├── torre_recursivo.c
│   │   ├── bispo_recursivo.c
│   │   ├── rainha_recursivo.c
│   │   ├── bispo_loops_aninhados.c
│   │   └── cavalo_complexo.c
├── tabuleiro.c
├── main.c
└── README.md
```

## 🎯 Usage

When you run the program, you'll be prompted to choose a challenge level:

1. **Basic Level**: Uses simple loop structures
   - The Rook will move 5 squares to the right
   - The Bishop will move 5 squares diagonally
   - The Queen will move 8 squares to the left
   - The Knight will move in an "L" shape (2 squares down, 1 square left)

2. **Master Level**: Uses recursion and complex loops
   - The Rook will move 5 squares to the right using recursion
   - The Bishop will move 5 squares diagonally using both recursion and nested loops
   - The Queen will move 8 squares to the left using recursion
   - The Knight will move in an "L" shape (2 squares up, 1 square right) using complex loops

## 💻 Code Examples

### Recursive Implementation (Rook)

```c
void moverTorreRecursivo(int casasRestantes) {
  // Caso base: quando não há mais casas para mover
  if (casasRestantes <= 0) {
    printf("\n=== Fim do movimento da TORRE (Recursivo) ===\n");
    return;
  }
  
  // Caso inicial: imprime o cabeçalho apenas na primeira chamada
  if (casasRestantes == TORRE_CASAS) {
    printf("\n=== Movimento da Torre (Recursivo - %d casas para a direita) ===\n", 
           TORRE_CASAS);
  }
  
  // Imprime a direção do movimento
  printf("Direita\n");
  
  // Chamada recursiva para mover a próxima casa
  moverTorreRecursivo(casasRestantes - 1);
}
```

### Complex Loops Implementation (Knight)

```c
void moverCavaloComplexo(int numMovimentos) {
  printf("\n=== Movimento do Cavalo (Loops Complexos - %d movimentos em \"L\") ===\n", 
         numMovimentos);
  
  int movimentosCompletos = 0;
  
  // Loop externo para controlar o número total de movimentos em "L"
  for (int i = 0; i < numMovimentos; i++) {
    // Loop aninhado para simular o movimento em "L" (2 para cima, 1 para direita)
    for (int j = 0; j < 3; j++) {
      // Verifica se estamos nos primeiros dois passos (movimento para cima)
      if (j < 2) {
        printf("Cima\n");
      } 
      // Último passo (movimento para direita)
      else if (j == 2) {
        printf("Direita\n");
        
        // Incrementa o contador de movimentos completos
        movimentosCompletos++;
        
        // Se já completamos todos os movimentos, saímos do loop
        if (movimentosCompletos >= numMovimentos) {
          break;
        }
      }
      
      // Se for o último passo do movimento em "L", reiniciamos o loop interno
      if (j == 2) {
        // Usamos continue para pular para a próxima iteração do loop externo
        continue;
      }
    }
  }
  
  printf("\n=== Fim do movimento do CAVALO (Loops Complexos) ===\n");
}
```

## 🤝 Contributing

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## Contributing

We welcome contributions to this project! Please see [CONTRIBUTING.md](CONTRIBUTING.md) for details on how to contribute, our code of conduct, and the process for submitting pull requests.

## Security

For information about security policies and how to report vulnerabilities, please see our [Security Policy](.github/SECURITY.md).
<div align="center">
Made with ❤️ by Rafael Dias Zendron
</div>
<div align="center">
<img src="https://github.com/rafaumeu.png" width="100" height="100" style="border-radius: 50%;">

[![LinkedIn](https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/rafael-dias-zendron-528290132/)
[![GitHub](https://img.shields.io/badge/GitHub-100000?style=for-the-badge&logo=github&logoColor=white)](https://github.com/rafaumeu)
</div>
