/* LEVEL_04:0x029F58 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_0024F950[];
extern int D_0020D614;
extern int rand(void);
extern char *func_023928(char *g);
extern int func_0239A0(char *g, unsigned int i);
extern char *func_0242A8(unsigned int i, int v);
extern void func_023810(char *g, int v);

void func_029F58(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_0024F950;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_023928(g) + 4) != 2) {
        return;
    }
    if (--D_0020D614 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_0239A0(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_0242A8(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_023810(g, list[rand() % n]);
    }
    D_0020D614 = 150;
}
