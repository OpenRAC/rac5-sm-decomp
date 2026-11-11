/* LEVEL_02:0x019B20 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_00208C2C;
extern struct Q D_0024C650;
extern struct Sz *D_0021BD50;
extern struct Buf *D_0020404C;
extern int D_00220DA8;
extern int D_00246DA0;
extern int D_00246D90;
extern int D_0022F770;
extern int func_068A30(struct Q *q);
extern int func_027BF0(int a, int b);
extern void func_027C68(int a, int b, int c);
extern void func_0BF878(int *p, int n);
extern void func_0277C8(int *a, int *b, int c);
extern void func_029080(int a);
extern int func_139650(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_019B20(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_00208C2C->pair;
    if (func_068A30(&D_0024C650)) {
        if (D_0024C650.ma != 0) {
            p->a = *D_0024C650.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_0024C650.mb != 0) {
            p->b = *D_0024C650.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_00208C2C)->state == 1) {
            if (func_027BF0(0xA1, 0xFF) == 0) {
                func_027C68(0xA1, 1, 0xFF);
            } else {
                func_0BF878(&D_00220DA8, 0x2BC);
            }
        } else {
            do {
                func_0BF878(&D_00220DA8, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_0020404C->dst, D_0020404C->src, ((D_0021BD50->size + 0x1F) & ~0x1F) >> 3);
    func_0277C8(&D_00246DA0, &D_00246D90, 1);
    func_029080(D_0022F770);
    func_139650(D_0022F770);
}
