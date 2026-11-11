/* LEVEL_23:0x13C468 -- placement copy of LEVEL_22_1150B0.c: fills a vertex array from a packed coordinate table. */
typedef struct Out {
    float x;
    float y;
    float z;
    char pad[0x24];
} Out;
typedef struct S {
    char pad0[0x5C];
    Out *f5C;
} S;
typedef struct O {
    char pad0[0x58];
    S *f58;
} O;
extern unsigned D_003632FC[];

void func_13C468(O *o)
{
    unsigned char i;
    S *s;
    s = o->f58;
    for (i = 0; i < 60; i++) {
        s->f5C[i].x = (float)(D_003632FC[i] & 0xFFFF) * 3.0517578125e-05f;
        s->f5C[i].y = (float)((D_003632FC[i] >> 16) & 0xFFFF) * 3.0517578125e-05f;
        s->f5C[i].z = 1.0f;
    }
}
