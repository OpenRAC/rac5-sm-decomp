/* LEVEL_16:0x005648 -- two-by-three matrix times vector: the matrix rows
   live in the global object reached through the pointer at 0x19ACDC.
   The declaration order of the two scale products is the one the pinned
   scheduler wants (the 0x29C value first, the 0x298 value second). */
typedef struct {
    char pad_00[0x60];
    float m0;
    float m1;
    float m2;
    char pad_01[0x298 - 0x6C];
    float d0;
    float d1;
} Obj;

extern char D_0014E5D4[];

void func_005648(float *out, float *in, float s)
{
    Obj *p = *(Obj **)D_0014E5D4;
    float *q = (float *)((char *)p + 0x54);
    float b = p->d1 * s;
    float a = p->d0 * s;
    float c = a * in[0] + b * q[3];
    float d = a * in[1] + b * q[4];
    float e = a * in[2] + b * q[5];

    out[0] = c;
    out[1] = d;
    out[2] = e;
}
