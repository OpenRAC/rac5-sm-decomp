/* LEVEL_08:0x019A80 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_0023CB2C;
extern struct Q D_002843D0;
extern struct Sz *D_0024FC50;
extern struct Buf *D_00237F4C;
extern int D_00255AA8;
extern int D_0027EB20;
extern int D_0027EB10;
extern int D_00264470;
extern int func_0691E0(struct Q *q);
extern int func_027A30(int a, int b);
extern void func_027AA8(int a, int b, int c);
extern void func_0C3E58(int *p, int n);
extern void func_027608(int *a, int *b, int c);
extern void func_028E10(int a);
extern void func_1447D8(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_019A80(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_0023CB2C->pair;
    if (func_0691E0(&D_002843D0)) {
        if (D_002843D0.ma != 0) {
            p->a = *D_002843D0.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_002843D0.mb != 0) {
            p->b = *D_002843D0.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_0023CB2C)->state == 1) {
            if (func_027A30(0xA1, 0xFF) == 0) {
                func_027AA8(0xA1, 1, 0xFF);
            } else {
                func_0C3E58(&D_00255AA8, 0x2BC);
            }
        } else {
            do {
                func_0C3E58(&D_00255AA8, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_00237F4C->dst, D_00237F4C->src, ((D_0024FC50->size + 0x1F) & ~0x1F) >> 3);
    func_027608(&D_0027EB20, &D_0027EB10, 1);
    func_028E10(D_00264470);
    func_1447D8(D_00264470);
}
