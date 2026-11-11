/* LEVEL_16:0x027EF8 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_001E4090[];
extern int D_001A1FC4;
extern int rand(void);
extern char *func_021620(char *g);
extern int func_021670(char *g, unsigned int i);
extern char *func_0220C8(unsigned int i, int v);
extern void func_021540(char *g, int v);

void func_027EF8(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_001E4090;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_021620(g) + 4) != 2) {
        return;
    }
    if (--D_001A1FC4 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_021670(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_0220C8(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_021540(g, list[rand() % n]);
    }
    D_001A1FC4 = 150;
}
