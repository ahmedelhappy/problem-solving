let N = 5;
row = 1;

while (row <= N) {
  process.stdout.write(" ".repeat(N - row));
  process.stdout.write("*".repeat(2 * row - 1));
  process.stdout.write("\n");
  row ++;
}

while (--row) {
  process.stdout.write(" ".repeat(N - row));
  process.stdout.write("*".repeat(2 * row - 1));
  process.stdout.write("\n");
}
