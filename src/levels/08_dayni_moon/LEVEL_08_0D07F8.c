/* LEVEL_08:0x0D07F8 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_0037AC98;
extern float D_00249A38;
extern unsigned short D_00249A50;
extern char D_002499E8[];
extern float atan2f(float y, float x);
extern int func_02A968(int n);
extern int func_0BD750(void *p);
extern void func_0B7BC8(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0B39E0(void);

void func_0D07F8(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_0037AC98.x;
    p[1] = D_0037AC98.y;
    p[2] = D_0037AC98.z;
    p[3] = D_0037AC98.w;



    if (func_02A968(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_00249A38 * 0.5f;
    h = func_0BD750(D_002499E8);
    func_0B7BC8(46, a, b, D_00249A50, D_00249A50, h, h, h, h, sc, sc, ang);
    func_0B39E0();
}
