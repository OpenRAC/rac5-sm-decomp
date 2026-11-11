/* LEVEL_04:0x0CB0E8 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_00346218;
extern float D_0021A038;
extern unsigned short D_0021A050;
extern char D_00219FE8[];
extern float atan2f(float y, float x);
extern int func_029E98(int n);
extern int func_0B8068(void *p);
extern void func_0B24E0(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0AE2F8(void);

void func_0CB0E8(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_00346218.x;
    p[1] = D_00346218.y;
    p[2] = D_00346218.z;
    p[3] = D_00346218.w;



    if (func_029E98(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_0021A038 * 0.5f;
    h = func_0B8068(D_00219FE8);
    func_0B24E0(46, a, b, D_0021A050, D_0021A050, h, h, h, h, sc, sc, ang);
    func_0AE2F8();
}
