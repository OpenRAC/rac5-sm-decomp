/* LEVEL_23:0x17DFE8 -- placement copy of LEVEL_22_131308.c: advances one slot's state flag and refreshes its bookkeeping. */
typedef struct { char pad0[0x30]; float v[3]; char pad3C[0x46 - 0x3C]; unsigned char f46; } Obj;
typedef struct {
    char pad0[4];
    void *p4;
    void *p8;
    unsigned char fC;
} A;
typedef struct {
    char pad0[0x40];
    Obj *objs[4];
    int cnt[4];
    float f60[4];
    int i70[4];
    int i80[4];
    unsigned char flag[0x18];
    unsigned char a8;
    char padA9[4];
    unsigned char ad;
    char padAE[0xB6 - 0xAE];
    unsigned char b6;
    unsigned char b7;
    unsigned char b8;
    unsigned char b9;
} B;
typedef struct {
    char pad0[0x54];
    A *a;
    B *b;
} T;
extern unsigned char D_001DBE34;
extern int func_07AF58(void *p, float *v);
extern int func_17E370(T *t, int a, int b, float f);
extern int func_05BA28(unsigned char *p);
extern void func_17DB28(T *t, int idx);

void func_17DFE8(T *t, unsigned char idx)
{
    B *b;
    A *a;
    Obj *o;
    unsigned char *flag;
    unsigned char *base;

    b = t->b;
    a = t->a;
    o = b->objs[idx];
    o->f46 = 1;
    base = b->flag;
    flag = base + idx;
    if (*flag == 0) {
        if (func_07AF58(a->p8, o->v)) {
            *flag = 1;
            if (idx == b->ad) {
                if (b->b6 == 0) {
                    b->b7 = 1;
                }
                b->b6 = 0;
                if (b->b8 == 0) {
                    b->b9 = 1;
                }
                b->b8 = 0;
            }
        }
    } else {
        if (func_07AF58(a->p4, o->v)) {
            if (D_001DBE34 == 0) {
                b->cnt[idx]++;
            }
            *flag = 0;
            b->f60[idx] = -1.0f;
            b->i70[idx] = -1;
            b->i80[idx] = 0;
            if (idx == b->ad) {
                if (b->b6 == 0) {
                    b->b7 = 1;
                }
                b->b6 = 0;
                if (b->b8 == 0) {
                    b->b9 = 1;
                }
                b->b8 = 0;
                if (idx == b->ad) {
                    if (b->cnt[idx] != a->fC) {
                        func_17E370(t, 1, 2, 45.0f);
                    }
                }
            }
        }
    }
    if (func_05BA28(&b->a8)) {
        if (idx == b->ad) {
            b->f60[idx] = -1.0f;
        }
    }
    func_17DB28(t, idx);
}
