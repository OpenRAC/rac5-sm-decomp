/* LEVEL_09:0x029318 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_0021C8C0[];
extern int D_001DE294;
extern int rand(void);
extern char *func_022E38(char *g);
extern int func_022EB0(char *g, unsigned int i);
extern char *func_023920(unsigned int i, int v);
extern void func_022D20(char *g, int v);

void func_029318(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_0021C8C0;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_022E38(g) + 4) != 2) {
        return;
    }
    if (--D_001DE294 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_022EB0(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_023920(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_022D20(g, list[rand() % n]);
    }
    D_001DE294 = 150;
}
