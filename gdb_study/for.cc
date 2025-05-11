int main() {
  int buf[8];
  for (int i = 0; i < 8; i++) {
    buf[i] = i;
  }
  int *p = buf;
  int *q = buf + 8;
}