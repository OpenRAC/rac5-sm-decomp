/* LEVEL_01:0x019098 -- stores a pair of 4x4 matrices in the global camera pair, then triggers the refresh sequence. */
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
extern struct Game *D_001F3FAC;
extern struct Q D_00235140;
extern struct Sz *D_00206D90;
extern struct Buf *D_001EF3CC;
extern int D_0020BE28;
extern int D_0022F8A0;
extern int D_0022F890;
extern int D_0021A7F0;
extern int func_0639B8(struct Q *q);
extern int func_027408(int a, int b);
extern void func_027480(int a, int b, int c);
extern void func_0B8F68(int *p, int n);
extern void func_026FE0(int *a, int *b, int c);
extern void func_028898(int a);
extern void func_1332A0(int a);
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_019098(struct Mat *m, unsigned char flag, int doit)
{
    struct Pair *p;

    p = &D_001F3FAC->pair;
    if (func_0639B8(&D_00235140)) {
        if (D_00235140.ma != 0) {
            p->a = *D_00235140.ma;
        }
        p->b = *m;
        p->n = 1;
    } else {
        p->a = *m;
        if (D_00235140.mb != 0) {
            p->b = *D_00235140.mb;
        }
        p->n = 0;
    }
    if (doit) {
        if (flag == 0 && ((struct Game2 *)D_001F3FAC)->state == 1) {
            if (func_027408(0xA1, 0xFF) == 0) {
                func_027480(0xA1, 1, 0xFF);
            } else {
                func_0B8F68(&D_0020BE28, 0x2BC);
            }
        } else {
            do {
                func_0B8F68(&D_0020BE28, 0x2BC);
            } while (0);
        }
    }
    p->flag = flag;
    p->one = 1;
    memcpy(D_001EF3CC->dst, D_001EF3CC->src, ((D_00206D90->size + 0x1F) & ~0x1F) >> 3);
    func_026FE0(&D_0022F8A0, &D_0022F890, 1);
    func_028898(D_0021A7F0);
    func_1332A0(D_0021A7F0);
}
