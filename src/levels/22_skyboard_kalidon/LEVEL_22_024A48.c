/* LEVEL_22:0x024A48 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_00186D40[];
extern int D_00153814;
extern int rand(void);
extern char *func_01EBE8(char *g);
extern int func_01EC60(char *g, unsigned int i);
extern char *func_01F460(unsigned int i, int v);
extern void func_01EAD0(char *g, int v);

void func_024A48(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_00186D40;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_01EBE8(g) + 4) != 2) {
        return;
    }
    if (--D_00153814 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_01EC60(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_01F460(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_01EAD0(g, list[rand() % n]);
    }
    D_00153814 = 150;
}
