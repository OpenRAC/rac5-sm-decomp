/* LEVEL_10:0x02A288 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_0023E540[];
extern int D_001FD494;
extern int rand(void);
extern char *func_0234A8(char *g);
extern int func_023520(char *g, unsigned int i);
extern char *func_023F90(unsigned int i, int v);
extern void func_023390(char *g, int v);

void func_02A288(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_0023E540;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_0234A8(g) + 4) != 2) {
        return;
    }
    if (--D_001FD494 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_023520(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_023F90(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_023390(g, list[rand() % n]);
    }
    D_001FD494 = 150;
}
