extern int func_10E968(int);
extern char *D_001B5FDC;

int func_10E928(int a) {
    if (func_10E968(0) == 0) return 0;
    return (*(int *)(D_001B5FDC + 0x94) >> 14) & 1;
}
