/* LEVEL_06:0x0C01D0 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_00318798;
extern float D_001EFA78;
extern unsigned short D_001EFA90;
extern char D_001EFA28[];
extern float atan2f(float y, float x);
extern int func_0287D8(int n);
extern int func_0AD2F8(void *p);
extern void func_0A7A60(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0A3878(void);

void func_0C01D0(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_00318798.x;
    p[1] = D_00318798.y;
    p[2] = D_00318798.z;
    p[3] = D_00318798.w;



    if (func_0287D8(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_001EFA78 * 0.5f;
    h = func_0AD2F8(D_001EFA28);
    func_0A7A60(46, a, b, D_001EFA90, D_001EFA90, h, h, h, h, sc, sc, ang);
    func_0A3878();
}
