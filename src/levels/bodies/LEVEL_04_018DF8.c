/* LEVEL_04:0x018DF8 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_0020D12C;
extern struct Q D_0024F950;
extern struct Sz *D_002201B0;
extern struct Buf *D_0020854C;
extern int D_002257A8;
extern int D_0024A0A0;
extern int D_0024A090;
extern int D_00234170;
extern int func_065420(struct Q *q);
extern int func_027098(int a, int b);
extern void func_027110(int a, int b, int c);
extern void func_0BE770(int *p, int n);
extern void func_026C70(int *a, int *b, int c);
extern void func_028388(int a);
extern void func_13F720(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_018DF8(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_0020D12C->pair;
    if (func_065420(&D_0024F950)) {
        if (D_0024F950.ma != 0) {
            p->a = *D_0024F950.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_0024F950.mb != 0) {
            p->b = *D_0024F950.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_0020D12C)->state == 1) {
            if (func_027098(0xA1, 0xFF) == 0) {
                func_027110(0xA1, 1, 0xFF);
            } else {
                func_0BE770(&D_002257A8, 0x2BC);
            }
        } else {
            do {
                func_0BE770(&D_002257A8, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_0020854C->dst, D_0020854C->src, ((D_002201B0->size + 0x1F) & ~0x1F) >> 3);
    func_026C70(&D_0024A0A0, &D_0024A090, 1);
    func_028388(D_00234170);
    func_13F720(D_00234170);
}
