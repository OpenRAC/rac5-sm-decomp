/* LEVEL_05:0x0C3E78 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_003178D8;
extern float D_001EFEF8;
extern unsigned short D_001EFF10;
extern char D_001EFEA8[];
extern float atan2f(float y, float x);
extern int func_029068(int n);
extern int func_0B1078(void *p);
extern void func_0AB850(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0A7668(void);

void func_0C3E78(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_003178D8.x;
    p[1] = D_003178D8.y;
    p[2] = D_003178D8.z;
    p[3] = D_003178D8.w;



    if (func_029068(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_001EFEF8 * 0.5f;
    h = func_0B1078(D_001EFEA8);
    func_0AB850(46, a, b, D_001EFF10, D_001EFF10, h, h, h, h, sc, sc, ang);
    func_0A7668();
}
