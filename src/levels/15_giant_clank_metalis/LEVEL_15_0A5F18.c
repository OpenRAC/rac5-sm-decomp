/* LEVEL_15:0x0A5F18 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_00243258;
extern float D_001557F8;
extern unsigned short D_00155810;
extern char D_001557A8[];
extern float atan2f(float y, float x);
extern int func_023BC8(int n);
extern int func_093380(void *p);
extern void func_08DB58(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_089970(void);

void func_0A5F18(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_00243258.x;
    p[1] = D_00243258.y;
    p[2] = D_00243258.z;
    p[3] = D_00243258.w;



    if (func_023BC8(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_001557F8 * 0.5f;
    h = func_093380(D_001557A8);
    func_08DB58(46, a, b, D_00155810, D_00155810, h, h, h, h, sc, sc, ang);
    func_089970();
}
