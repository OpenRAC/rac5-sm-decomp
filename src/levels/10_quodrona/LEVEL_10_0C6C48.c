/* LEVEL_10:0x0C6C48 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_00334E18;
extern float D_00209B78;
extern unsigned short D_00209B90;
extern char D_00209B28[];
extern float atan2f(float y, float x);
extern int func_02A1C8(int n);
extern int func_0B3C90(void *p);
extern void func_0AE3A8(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0AA1C0(void);

void func_0C6C48(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_00334E18.x;
    p[1] = D_00334E18.y;
    p[2] = D_00334E18.z;
    p[3] = D_00334E18.w;



    if (func_02A1C8(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_00209B78 * 0.5f;
    h = func_0B3C90(D_00209B28);
    func_0AE3A8(46, a, b, D_00209B90, D_00209B90, h, h, h, h, sc, sc, ang);
    func_0AA1C0();
}
