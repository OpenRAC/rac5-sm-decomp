/* LEVEL_18:0x0CB698 -- placement copy of LEVEL_01_0DD080.c: packs a level, table entry and flags into one command word and submits it through the two-step queue helpers and returns the submit result. */
extern void func_086E78(void *, unsigned int, void *, int, int, int, void *);
extern int func_087050(void *);
extern int D_0024E5C0[];
extern char D_000CC430[];
extern char D_000CCFA0[];

int func_0CB698(int a, int b, int c, int d)
{
    char buf[16];
    int level;
    int v;
    int flag;
    int notflag;
    unsigned int word;
    unsigned int bits;

    flag = (d != 0);
    if (a == 4) {
        v = 9;
    } else {
        level = 3;
        if (a < 3) {
            level = a;
        }
        if (level < 0) {
            level = 0;
        }
        notflag = flag ^ 1;
        v = (notflag ? 0x17 : 0x13) - level;
    }
    bits = ((unsigned int)c << 6) | 0x7000;
    word = ((unsigned int)v << 27) | ((unsigned int)D_0024E5C0[b] << 16);
    word |= bits;
    word |= 5;
    func_086E78(buf, word, D_000CC430, 0x38, 0, -1, D_000CCFA0);
    return func_087050(buf);
}
