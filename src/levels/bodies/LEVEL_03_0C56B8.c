/* LEVEL_03:0x0C56B8 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_00346898;
extern float D_002191F8;
extern unsigned short D_00219210;
extern char D_002191A8[];
extern float atan2f(float y, float x);
extern int func_02A1E8(int n);
extern int func_0B28A0(void *p);
extern void func_0AD010(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0A8E28(void);

void func_0C56B8(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_00346898.x;
    p[1] = D_00346898.y;
    p[2] = D_00346898.z;
    p[3] = D_00346898.w;



    if (func_02A1E8(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_002191F8 * 0.5f;
    h = func_0B28A0(D_002191A8);
    func_0AD010(46, a, b, D_00219210, D_00219210, h, h, h, h, sc, sc, ang);
    func_0A8E28();
}
