/* LEVEL_18:0x17F300 -- placement copy of LEVEL_16_17ECC8.c: randomizes three float fields of a part, mirrors two of them by a mode, then finishes with a status result. */

struct Part17ECC8 {
    int w0;
    char pad4[4];
    float f08;
    float f0C;
    float f10;
};

struct Obj17ECC8 {
    char pad0[0x45];
    unsigned char b45;
    char pad46[0x12];
    struct Part17ECC8 *p58;
    char pad5C[0x14];
    int w70;
};

extern unsigned char D_001BF90C;
extern int rand(void);
extern int func_17FC90(struct Obj17ECC8 *o);

static __inline__ float RandRange(float base, float range)
{
    return (float)rand() * 4.656612873077393e-10f * range + base;
}

int func_17F300(struct Obj17ECC8 *o)
{
    struct Part17ECC8 *p;
    unsigned int mode;

    p = o->p58;
    p->f0C = RandRange(4.0f, -2.0f);
    p->f08 = RandRange(1.0f, 1.5f);
    p->f10 = RandRange(1.0f, 1.5f);
    mode = D_001BF90C & 3;
    if (mode == 1 || mode == 2) {
        p->f08 = -p->f08;
    }
    if (mode == 2 || mode == 3) {
        p->f10 = -p->f10;
    }
    o->w70 = 0;
    if (func_17FC90(o) != 0) {
        o->b45 = 2;
        p->w0 = 0;
        return 1;
    }
    return 0;
}
