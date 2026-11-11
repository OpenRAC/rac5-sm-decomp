extern int func_10FCB8(int);
extern char *D_001B4B5C;

int func_10FC78(int a) {
    if (func_10FCB8(0) == 0) return 0;
    return (*(int *)(D_001B4B5C + 0x94) >> 14) & 1;
}
