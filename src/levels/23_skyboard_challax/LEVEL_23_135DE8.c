/* LEVEL_23:0x135DE8 -- placement copy of LEVEL_22_10F2C8.c: tries each of four candidate targets and commits the first one that passes both checks. */
typedef struct A {
    char pad0[0x10];
    int *cand[4];
    float f20;
    float f24;
} A;
typedef struct B {
    char pad0[0x54];
    char f54[0xC];
    float f60;
    char pad64[0x20];
    char f84;
} B;
typedef struct O {
    char pad0[0x54];
    A *a;
    B *b;
} O;
extern int func_0146C0(void *buf, int *c, void *p, int z, float *f, float *x, float *y);
extern int func_136430(B *b, int *c, float *x, float *y, int z, float f);

int func_135DE8(O *o)
{
    float buf[4];
    float v;
    float x;
    float y;
    unsigned char i;
    A *a = o->a;
    B *b = o->b;

    v = a->f24;
    for (i = 0; i < 4; i++) {
        if (a->cand[i] != 0) {
            if (func_0146C0(buf, a->cand[i], b->f54, 0, &v, &x, &y)) {
                if (func_136430(b, a->cand[i], &x, &y, 0, a->f20)) {
                    b->f60 = 1.0f;
                    b->f84 = 1;
                    return 1;
                }
            }
        }
    }
    return 0;
}
