/* LEVEL_22:0x1150B0 -- fills a vertex array from a packed coordinate table. */
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
extern unsigned D_002E76E4[];

void func_1150B0(O *o)
{
    unsigned char i;
    S *s;
    s = o->f58;
    for (i = 0; i < 60; i++) {
        s->f5C[i].x = (float)(D_002E76E4[i] & 0xFFFF) * 3.0517578125e-05f;
        s->f5C[i].y = (float)((D_002E76E4[i] >> 16) & 0xFFFF) * 3.0517578125e-05f;
        s->f5C[i].z = 1.0f;
    }
}
