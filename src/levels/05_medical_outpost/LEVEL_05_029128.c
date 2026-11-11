/* LEVEL_05:0x029128 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_00220E40[];
extern int D_001E3814;
extern int rand(void);
extern char *func_022C40(char *g);
extern int func_022CB8(char *g, unsigned int i);
extern char *func_0235C0(unsigned int i, int v);
extern void func_022B28(char *g, int v);

void func_029128(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_00220E40;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_022C40(g) + 4) != 2) {
        return;
    }
    if (--D_001E3814 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_022CB8(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_0235C0(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_022B28(g, list[rand() % n]);
    }
    D_001E3814 = 150;
}
