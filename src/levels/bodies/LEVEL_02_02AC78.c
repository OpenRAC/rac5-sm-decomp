/* LEVEL_02:0x02AC78 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_0024C650[];
extern int D_00209114;
extern int rand(void);
extern char *func_024608(char *g);
extern int func_024680(char *g, unsigned int i);
extern char *func_024F88(unsigned int i, int v);
extern void func_0244F0(char *g, int v);

void func_02AC78(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_0024C650;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_024608(g) + 4) != 2) {
        return;
    }
    if (--D_00209114 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_024680(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_024F88(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_0244F0(g, list[rand() % n]);
    }
    D_00209114 = 150;
}
