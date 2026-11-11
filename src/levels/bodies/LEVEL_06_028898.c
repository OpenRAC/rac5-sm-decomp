/* LEVEL_06:0x028898 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_00221EC0[];
extern int D_001E3394;
extern int rand(void);
extern char *func_022248(char *g);
extern int func_0222C0(char *g, unsigned int i);
extern char *func_022D30(unsigned int i, int v);
extern void func_022130(char *g, int v);

void func_028898(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_00221EC0;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_022248(g) + 4) != 2) {
        return;
    }
    if (--D_001E3394 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_0222C0(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_022D30(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_022130(g, list[rand() % n]);
    }
    D_001E3394 = 150;
}
