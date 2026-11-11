extern int func_110358(int);
extern char *D_001B5CDC;

int func_110318(int a) {
    if (func_110358(0) == 0) return 0;
    return (*(int *)(D_001B5CDC + 0x94) >> 14) & 1;
}
