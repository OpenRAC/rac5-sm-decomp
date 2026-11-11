/* LEVEL_24:0x0279F0 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_00201040[];
extern int D_001C5114;
extern int rand(void);
extern char *func_021A20(char *g);
extern int func_021A98(char *g, unsigned int i);
extern char *func_022400(unsigned int i, int v);
extern void func_021908(char *g, int v);

void func_0279F0(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_00201040;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_021A20(g) + 4) != 2) {
        return;
    }
    if (--D_001C5114 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_021A98(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_022400(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_021908(g, list[rand() % n]);
    }
    D_001C5114 = 150;
}
