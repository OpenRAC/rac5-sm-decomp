/* LEVEL_24:0x0BF198 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_002F78D8;
extern float D_001D17F8;
extern unsigned short D_001D1810;
extern char D_001D17A8[];
extern float atan2f(float y, float x);
extern int func_027930(int n);
extern int func_0AC330(void *p);
extern void func_0A6B08(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0A2920(void);

void func_0BF198(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_002F78D8.x;
    p[1] = D_002F78D8.y;
    p[2] = D_002F78D8.z;
    p[3] = D_002F78D8.w;



    if (func_027930(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_001D17F8 * 0.5f;
    h = func_0AC330(D_001D17A8);
    func_0A6B08(46, a, b, D_001D1810, D_001D1810, h, h, h, h, sc, sc, ang);
    func_0A2920();
}
