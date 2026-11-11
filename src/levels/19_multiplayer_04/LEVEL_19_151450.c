/* LEVEL_19:0x151450 -- placement copy of LEVEL_03_178538.c: loads a table word and the four floats of a 20-byte entry, then calls a helper with the object when the word is nonzero. */
typedef struct {
    int w0;
    float f4;
    float f8;
    float fC;
    float f10;
} Elem20;

extern int D_002E5300[];
extern Elem20 D_001D4F80[];
extern void func_073660(char *a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7,
                        float f12, float f13, float f14, float f15);

void func_151450(char *a0, int a1)
{
    Elem20 *e;
    int t;
    float x;
    float y;
    float z;
    float w;

    e = &D_001D4F80[a1];
    t = D_002E5300[a1];
    x = e->f4;
    y = e->f8;
    z = e->fC;
    w = e->f10;
    if (t != 0) {
        func_073660(a0, t, 0, 0, 0, 0, 0, 1, x, y, z, w);
    }
}
