/* LEVEL_03:0x018EA0 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
struct Mat {
    float f[16];
};
struct Pair {
    struct Mat a;
    struct Mat b;
    short n;
    unsigned char flag;
    unsigned char one;
};
struct Game {
    char pad[0x10490];
    struct Pair pair;
};
struct Game2 {
    char pad[0x1C6C];
    int state;
};
struct Q {
    char pad[0x5B0];
    struct Mat *ma;
    struct Mat *mb;
};
struct Sz {
    char pad[0x48];
    unsigned int size;
};
struct Buf {
    char pad[0xC];
    void *dst;
    void *src;
};
extern struct Game *D_0020C62C;
extern struct Q D_0024FFC0;
extern struct Sz *D_0021F410;
extern struct Buf *D_00207A4C;
extern int D_00224D28;
extern int D_0024A720;
extern int D_0024A710;
extern int D_002336F0;
extern int func_062340(struct Q *q);
extern int func_0272E8(int a, int b);
extern void func_027360(int a, int b, int c);
extern void func_0B8D50(int *p, int n);
extern void func_026EC0(int *a, int *b, int c);
extern void func_0286B0(int a);
extern void func_131668(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_018EA0(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_0020C62C->pair;
    if (func_062340(&D_0024FFC0)) {
        if (D_0024FFC0.ma != 0) {
            p->a = *D_0024FFC0.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_0024FFC0.mb != 0) {
            p->b = *D_0024FFC0.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_0020C62C)->state == 1) {
            if (func_0272E8(0xA1, 0xFF) == 0) {
                func_027360(0xA1, 1, 0xFF);
            } else {
                func_0B8D50(&D_00224D28, 0x2BC);
            }
        } else {
            do {
                func_0B8D50(&D_00224D28, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_00207A4C->dst, D_00207A4C->src, ((D_0021F410->size + 0x1F) & ~0x1F) >> 3);
    func_026EC0(&D_0024A720, &D_0024A710, 1);
    func_0286B0(D_002336F0);
    func_131668(D_002336F0);
}
