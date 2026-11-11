/* LEVEL_23:0x017E50 -- placement copy of LEVEL_01_019098.c: stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_001C73AC;
extern struct Q D_002025C0;
extern struct Sz *D_001DA190;
extern struct Buf *D_001C27CC;
extern int D_001DEFA8;
extern int D_001FCD20;
extern int D_001FCD10;
extern int D_001ED970;
extern int func_05D170(struct Q *q);
extern int func_025160(int a, int b);
extern void func_0251D8(int a, int b, int c);
extern void func_0AFD00(int *p, int n);
extern void func_024D38(int *a, int *b, int c);
extern void func_026450(int a);
extern int func_124A18(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_017E50(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_001C73AC->pair;
    if (func_05D170(&D_002025C0)) {
        if (D_002025C0.ma != 0) {
            p->a = *D_002025C0.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_002025C0.mb != 0) {
            p->b = *D_002025C0.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_001C73AC)->state == 1) {
            if (func_025160(0xA1, 0xFF) == 0) {
                func_0251D8(0xA1, 1, 0xFF);
            } else {
                func_0AFD00(&D_001DEFA8, 0x2BC);
            }
        } else {
            do {
                func_0AFD00(&D_001DEFA8, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_001C27CC->dst, D_001C27CC->src, ((D_001DA190->size + 0x1F) & ~0x1F) >> 3);
    func_024D38(&D_001FCD20, &D_001FCD10, 1);
    func_026450(D_001ED970);
    func_124A18(D_001ED970);
}
