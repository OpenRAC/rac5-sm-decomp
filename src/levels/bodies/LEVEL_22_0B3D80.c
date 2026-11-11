/* LEVEL_22:0x0B3D80 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_002815D8;
extern float D_0015FEF8;
extern unsigned short D_0015FF10;
extern char D_0015FEA8[];
extern float atan2f(float y, float x);
extern int func_024988(int n);
extern int func_0A1138(void *p);
extern void func_09B8A0(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0976B8(void);

void func_0B3D80(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_002815D8.x;
    p[1] = D_002815D8.y;
    p[2] = D_002815D8.z;
    p[3] = D_002815D8.w;



    if (func_024988(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_0015FEF8 * 0.5f;
    h = func_0A1138(D_0015FEA8);
    func_09B8A0(46, a, b, D_0015FF10, D_0015FF10, h, h, h, h, sc, sc, ang);
    func_0976B8();
}
