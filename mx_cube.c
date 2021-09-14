// mx_cube.c

void mx_printchar(char);

void mx_cube(int n) {
    if (n <= 1) return;
    
    // Top back edge
    for (int i = 0; i < n / 2 + 1; i++) {
        mx_printchar(' ');
    }
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');

    // Top face
    for (int j = 0; j < n / 2; j++) {
        for (int i = 0; i < n / 2 - j; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        for (int i = 0; i < j; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
    }
    
    // Top front edge
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    for (int i = 0; i < n / 2; i++) {
        mx_printchar(' ');
    }
    mx_printchar('|');
    mx_printchar('\n');

    // Front face
    for (int j = 0; j < (n - 1) / 2; j++) {
        mx_printchar('|');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        for (int i = 0; i < n / 2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
    }

    // Bottom back edge
    mx_printchar('|');
    for (int i = 0; i < n * 2; i++) {
        mx_printchar(' ');
    }
    mx_printchar('|');
    for (int i = 0; i < n / 2; i++) {
        mx_printchar(' ');
    }
    mx_printchar('+');
    mx_printchar('\n');

    // Bottom face
    for (int j = 0; j < n / 2; j++) {
        mx_printchar('|');
        for (int i = 0; i < n * 2; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        for (int i = 0; i < n / 2 - j - 1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        mx_printchar('\n');
    }

    // Bottom front edge
    mx_printchar('+');
    for (int i = 0; i < n * 2; i++) {
        mx_printchar('-');
    }
    mx_printchar('+');
    mx_printchar('\n');
}
