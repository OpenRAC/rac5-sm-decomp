/* LEVEL_09:0x018500 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_001DDDAC;
extern struct Q D_0021C8C0;
extern struct Sz *D_001F0890;
extern struct Buf *D_001D91CC;
extern int D_001F5A28;
extern int D_00217020;
extern int D_00217010;
extern int D_002043F0;
extern int func_0605B8(struct Q *q);
extern int func_026410(int a, int b);
extern void func_026488(int a, int b, int c);
extern void func_0B6218(int *p, int n);
extern void func_025FE8(int *a, int *b, int c);
extern void func_027728(int a);
extern int func_12C238(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_018500(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_001DDDAC->pair;
    if (func_0605B8(&D_0021C8C0)) {
        if (D_0021C8C0.ma != 0) {
            p->a = *D_0021C8C0.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_0021C8C0.mb != 0) {
            p->b = *D_0021C8C0.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_001DDDAC)->state == 1) {
            if (func_026410(0xA1, 0xFF) == 0) {
                func_026488(0xA1, 1, 0xFF);
            } else {
                func_0B6218(&D_001F5A28, 0x2BC);
            }
        } else {
            do {
                func_0B6218(&D_001F5A28, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_001D91CC->dst, D_001D91CC->src, ((D_001F0890->size + 0x1F) & ~0x1F) >> 3);
    func_025FE8(&D_00217020, &D_00217010, 1);
    func_027728(D_002043F0);
    func_12C238(D_002043F0);
}
