/* LEVEL_02:0x0CC1E0 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_00342F18;
extern float D_00215B38;
extern unsigned short D_00215B50;
extern char D_00215AE8[];
extern float atan2f(float y, float x);
extern int func_02ABB8(int n);
extern int func_0B93C8(void *p);
extern void func_0B3BA0(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0AF9B8(void);

void func_0CC1E0(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_00342F18.x;
    p[1] = D_00342F18.y;
    p[2] = D_00342F18.z;
    p[3] = D_00342F18.w;



    if (func_02ABB8(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_00215B38 * 0.5f;
    h = func_0B93C8(D_00215AE8);
    func_0B3BA0(46, a, b, D_00215B50, D_00215B50, h, h, h, h, sc, sc, ang);
    func_0AF9B8();
}
