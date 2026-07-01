# UNIXゼミ 2026 - Cプログラムデバッグ演習

このリポジトリには、UNIXゼミのデバッグ演習用のサンプルコードが含まれています。

## 演習ファイル

### 演習1: 最適化オプションの効果を体験
- **ファイル**: `fibonacci.c`
- **コンパイル**:
  ```bash
  gcc -O0 fibonacci.c -o fib_O0
  gcc -O2 fibonacci.c -o fib_O2
  gcc -O3 fibonacci.c -o fib_O3
  ```

### 演習2: 警告オプションでバグを早期発見する
- **ファイル**: `warning_test.c`
- **コンパイル**:
  ```bash
  gcc warning_test.c -o warning_test
  gcc -Wall warning_test.c -o warning_test
  gcc -Wall -Wextra warning_test.c -o warning_test
  ```

### 演習3: printfデバッグ vs GDB
- **ファイル**: `bug_hunt.c`
- **コンパイル**:
  ```bash
  gcc -g -O0 bug_hunt.c -o bug_hunt
  gdb ./bug_hunt
  ```

### 演習4: Segmentation Faultの解析
- **ファイル**: `crash.c`
- **コンパイル**:
  ```bash
  gcc -g -O0 crash.c -o crash
  gdb ./crash
  ```

### 演習5: 条件付きバグの追跡
- **ファイル**: `conditional_bug.c`
- **コンパイル**:
  ```bash
  gcc -g -O0 conditional_bug.c -o conditional_bug
  gdb ./conditional_bug
  ```

### 演習6: 総合演習 - メモリリークとパフォーマンス分析
- **ファイル**: `network_sim.c`
- **コンパイル**:
  ```bash
  # AddressSanitizer
  gcc -g -fsanitize=address,leak network_sim.c -o network_sim
  ./network_sim

  # gprof
  gcc -g -O0 -pg network_sim.c -o network_sim
  ./network_sim
  gprof network_sim gmon.out
  ```

## 使用するツール

- **GCC/Clang**: Cコンパイラ
- **GDB**: GNU Debugger
- **AddressSanitizer**: メモリエラー検出
- **gprof**: プロファイラ

## 注意事項

これらのプログラムには**意図的にバグが含まれています**。演習の目的は、これらのバグをデバッグツールを使って発見することです。
