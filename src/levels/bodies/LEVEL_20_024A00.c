/* LEVEL_20:0x024A00 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_0013BA10[];
extern int D_001046A4;
extern int rand(void);
extern char *func_01E440(char *g);
extern int func_01E490(char *g, unsigned int i);
extern char *func_01EDC8(unsigned int i, int v);
extern void func_01E360(char *g, int v);

void func_024A00(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_0013BA10;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_01E440(g) + 4) != 2) {
        return;
    }
    if (--D_001046A4 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_01E490(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_01EDC8(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_01E360(g, list[rand() % n]);
    }
    D_001046A4 = 150;
}
