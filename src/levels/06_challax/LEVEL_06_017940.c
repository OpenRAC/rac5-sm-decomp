/* LEVEL_06:0x017940 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_001E2EAC;
extern struct Q D_00221EC0;
extern struct Sz *D_001F5990;
extern struct Buf *D_001DE2CC;
extern int D_001FACA8;
extern int D_0021C620;
extern int D_0021C610;
extern int D_00209670;
extern int func_060778(struct Q *q);
extern int func_0258B8(int a, int b);
extern void func_025930(int a, int b, int c);
extern void func_0B3868(int *p, int n);
extern void func_025490(int *a, int *b, int c);
extern void func_026CD0(int a);
extern int func_129970(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_017940(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_001E2EAC->pair;
    if (func_060778(&D_00221EC0)) {
        if (D_00221EC0.ma != 0) {
            p->a = *D_00221EC0.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_00221EC0.mb != 0) {
            p->b = *D_00221EC0.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_001E2EAC)->state == 1) {
            if (func_0258B8(0xA1, 0xFF) == 0) {
                func_025930(0xA1, 1, 0xFF);
            } else {
                func_0B3868(&D_001FACA8, 0x2BC);
            }
        } else {
            do {
                func_0B3868(&D_001FACA8, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_001DE2CC->dst, D_001DE2CC->src, ((D_001F5990->size + 0x1F) & ~0x1F) >> 3);
    func_025490(&D_0021C620, &D_0021C610, 1);
    func_026CD0(D_00209670);
    func_129970(D_00209670);
}
