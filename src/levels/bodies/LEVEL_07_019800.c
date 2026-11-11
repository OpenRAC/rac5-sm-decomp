/* LEVEL_07:0x019800 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_002082AC;
extern struct Q D_0024AA40;
extern struct Sz *D_0021B090;
extern struct Buf *D_002036CC;
extern int D_00220B28;
extern int D_002451A0;
extern int D_00245190;
extern int D_0022F4F0;
extern int func_0646C0(struct Q *q);
extern int func_027768(int a, int b);
extern void func_0277E0(int a, int b, int c);
extern void func_0BAFC8(int *p, int n);
extern void func_027340(int *a, int *b, int c);
extern void func_028BF8(int a);
extern int func_1362A0(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_019800(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_002082AC->pair;
    if (func_0646C0(&D_0024AA40)) {
        if (D_0024AA40.ma != 0) {
            p->a = *D_0024AA40.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_0024AA40.mb != 0) {
            p->b = *D_0024AA40.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_002082AC)->state == 1) {
            if (func_027768(0xA1, 0xFF) == 0) {
                func_0277E0(0xA1, 1, 0xFF);
            } else {
                func_0BAFC8(&D_00220B28, 0x2BC);
            }
        } else {
            do {
                func_0BAFC8(&D_00220B28, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_002036CC->dst, D_002036CC->src, ((D_0021B090->size + 0x1F) & ~0x1F) >> 3);
    func_027340(&D_002451A0, &D_00245190, 1);
    func_028BF8(D_0022F4F0);
    func_1362A0(D_0022F4F0);
}
