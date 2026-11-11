/* LEVEL_19:0x027AA0 -- placement copy of LEVEL_01_02A4B0.c. */
/* LEVEL_01:0x2A4B0 -- when the countdown expires, picks one random eligible slot and starts it, then rearms the countdown. */
extern char D_001E4210[];
extern int D_001A3144;
extern int rand(void);
extern char *func_021260(char *g);
extern int func_0212B0(char *g, unsigned int i);
extern char *func_021D08(unsigned int i, int v);
extern void func_021180(char *g, int v);

void func_027AA0(void)
{
    int list[16];
    unsigned int i;
    int n;
    int cur;
    char *g;

    g = D_001E4210;
    cur = *(int *)(g + 0x9A0);
    if (cur == 1) {
        return;
    }
    if (*(int *)(func_021260(g) + 4) != 2) {
        return;
    }
    if (--D_001A3144 > 0) {
        return;
    }
    n = 0;
    for (i = 2; i < 16; i++) {
        if (i == cur) {
            continue;
        }
        if (func_0212B0(g, i) == 0) {
            continue;
        }
        if (*(int *)(func_021D08(i, *(int *)(g + 0xF8)) + 0x40) != 0 || i == 13 || i == 12) {
            list[n++] = i;
        }
    }
    if (n != 0) {
        func_021180(g, list[rand() % n]);
    }
    D_001A3144 = 150;
}
