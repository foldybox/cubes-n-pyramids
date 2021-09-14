// mx_pyramid.c

void mx_printchar(char c);

void mx_pyramid(int n) {
    if ((n % 2 != 0) || (n <= 1)) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        mx_printchar(' ');
    }
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');

    for (int j = 0; j < n / 2 - 1; j++) {
        for (int i = 0; i < n - j - 2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');

        for (int i = 0; i < j * 2 + 1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('\\');

        for (int i = 0; i < j + 1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('\\');
        mx_printchar('\n');
    }
    
    for (int j = 0; j < n / 2 - 1; j++) {
        for (int i = 0; i < n - j - n / 2 - 1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');

        for (int i = 0; i < n + j * 2 - 1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('\\');

        for (int i = 0; i < n / 2 - j - 1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
    }

    mx_printchar('/');
    for (int i = 0; i < n * 2 - 3; i++) {
        mx_printchar('_');
    }
    mx_printchar('\\');
    mx_printchar('|');
    mx_printchar('\n');
}
