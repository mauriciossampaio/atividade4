int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Uso: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }
    int n = argc - 1;
    int *numbers = (int *)malloc(n * sizeof(int));

    for (int i = 1; i <= n; i++) {
        numbers[i - 1] = atoi(argv[i]);
    }
    return 0;
}
