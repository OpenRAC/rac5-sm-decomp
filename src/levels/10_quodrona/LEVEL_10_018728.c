/* LEVEL_10:0x018728 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_001FCFAC;
extern struct Q D_0023E540;
extern struct Sz *D_0020F9F0;
extern struct Buf *D_001F83CC;
extern int D_00214DA8;
extern int D_00238CA0;
extern int D_00238C90;
extern int D_00223780;
extern int func_0627E8(struct Q *q);
extern int func_026CE8(int a, int b);
extern void func_026D60(int a, int b, int c);
extern void func_0BA2B0(int *p, int n);
extern void func_0268C0(int *a, int *b, int c);
extern void func_0280F0(int a);
extern int func_131120(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_018728(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_001FCFAC->pair;
    if (func_0627E8(&D_0023E540)) {
        if (D_0023E540.ma != 0) {
            p->a = *D_0023E540.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_0023E540.mb != 0) {
            p->b = *D_0023E540.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_001FCFAC)->state == 1) {
            if (func_026CE8(0xA1, 0xFF) == 0) {
                func_026D60(0xA1, 1, 0xFF);
            } else {
                func_0BA2B0(&D_00214DA8, 0x2BC);
            }
        } else {
            do {
                func_0BA2B0(&D_00214DA8, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_001F83CC->dst, D_001F83CC->src, ((D_0020F9F0->size + 0x1F) & ~0x1F) >> 3);
    func_0268C0(&D_00238CA0, &D_00238C90, 1);
    func_0280F0(D_00223780);
    func_131120(D_00223780);
}
