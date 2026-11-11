/* LEVEL_07:0x0E9A28 -- placement copy of LEVEL_01_0E88A8.c: allocates up to the configured number of objects, fills each from the source position and stores them into the output array. */

typedef struct Cfg0E88A8 {
    char pad_00[0x2C];
    unsigned int f_2C;
} Cfg0E88A8;

typedef struct Src0E88A8 {
    char pad_00[0x30];
    float v_30[3];
} Src0E88A8;

typedef struct Sub0E88A8 {
    char pad_00[0x0C];
    Cfg0E88A8 *cfg_0C;
    Src0E88A8 *src_10;
    char pad_14[0x19];
    unsigned char b_2D;
} Sub0E88A8;

typedef struct Obj0E88A8 {
    void (*fn_00)(struct Obj0E88A8 *);
    char pad_04[8];
    float v_0C[3];
    char pad_18[0x18];
    Sub0E88A8 sub_30;
} Obj0E88A8;

typedef struct Tab0E88A8 {
    char pad_00[0x78];
    unsigned short h_78;
} Tab0E88A8;

extern Tab0E88A8 D_002AD6C0;

void func_0E9B68(struct Obj0E88A8 *o);
void func_0E9CA8(Obj0E88A8 *o);
Obj0E88A8 *func_095A50(int a, int b, int c, int d, int e);

static inline void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

static inline void InitSub(Sub0E88A8 *s, Cfg0E88A8 *cfg, Src0E88A8 *src, int b)
{
    s->cfg_0C = cfg;
    s->src_10 = src;
    s->b_2D = b;
}

int func_0E9A28(Obj0E88A8 **out, Cfg0E88A8 *cfg, Src0E88A8 *src, int a3, int flag_a, int flag_b)
{
    unsigned int n;
    Obj0E88A8 *p;

    n = 0;
    while (n < cfg->f_2C) {
        if (n == 0 && flag_b) {
            p = func_095A50(1, 3, D_002AD6C0.h_78, 1, 1);
        } else {
            p = func_095A50(0, 1, D_002AD6C0.h_78, 1, 1);
        }
        if (p == 0) {
            break;
        }
        if (flag_a) {
            p->fn_00 = 0;
        } else {
            p->fn_00 = func_0E9B68;
        }
        Copy3(p->v_0C, src->v_30);
        n++;
        InitSub(&p->sub_30, cfg, src, a3);
        func_0E9CA8(p);
        *out = p;
        out++;
    }
    return n;
}
