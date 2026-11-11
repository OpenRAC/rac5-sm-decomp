/* LEVEL_09:0x0C2B80 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_00313198;
extern float D_001EA978;
extern unsigned short D_001EA990;
extern char D_001EA928[];
extern float atan2f(float y, float x);
extern int func_029258(int n);
extern int func_0AFD68(void *p);
extern void func_0AA540(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0A6358(void);

void func_0C2B80(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_00313198.x;
    p[1] = D_00313198.y;
    p[2] = D_00313198.z;
    p[3] = D_00313198.w;



    if (func_029258(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_001EA978 * 0.5f;
    h = func_0AFD68(D_001EA928);
    func_0AA540(46, a, b, D_001EA990, D_001EA990, h, h, h, h, sc, sc, ang);
    func_0A6358();
}
