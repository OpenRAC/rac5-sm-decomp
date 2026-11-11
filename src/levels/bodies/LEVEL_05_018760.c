/* LEVEL_05:0x018760 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_001E332C;
extern struct Q D_00220E40;
extern struct Sz *D_001F5E10;
extern struct Buf *D_001DE74C;
extern int D_001FAD28;
extern int D_0021B5A0;
extern int D_0021B590;
extern int D_002096F0;
extern int func_061620(struct Q *q);
extern int func_026148(int a, int b);
extern void func_0261C0(int a, int b, int c);
extern void func_0B7510(int *p, int n);
extern void func_025D20(int *a, int *b, int c);
extern void func_027538(int a);
extern void func_12EC18(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_018760(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_001E332C->pair;
    if (func_061620(&D_00220E40)) {
        if (D_00220E40.ma != 0) {
            p->a = *D_00220E40.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_00220E40.mb != 0) {
            p->b = *D_00220E40.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_001E332C)->state == 1) {
            if (func_026148(0xA1, 0xFF) == 0) {
                func_0261C0(0xA1, 1, 0xFF);
            } else {
                func_0B7510(&D_001FAD28, 0x2BC);
            }
        } else {
            do {
                func_0B7510(&D_001FAD28, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_001DE74C->dst, D_001DE74C->src, ((D_001F5E10->size + 0x1F) & ~0x1F) >> 3);
    func_025D20(&D_0021B5A0, &D_0021B590, 1);
    func_027538(D_002096F0);
    func_12EC18(D_002096F0);
}
