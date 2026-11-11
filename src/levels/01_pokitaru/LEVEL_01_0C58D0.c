/* LEVEL_01:0x0C58D0 -- spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_0032BA18;
extern float D_00200B78;
extern unsigned short D_00200B90;
extern char D_00200B28[];
extern float atan2f(float y, float x);
extern int func_02A3F0(int n);
extern int func_0B2AB8(void *p);
extern void func_0AD290(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0A90A8(void);

void func_0C58D0(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_0032BA18.x;
    p[1] = D_0032BA18.y;
    p[2] = D_0032BA18.z;
    p[3] = D_0032BA18.w;



    if (func_02A3F0(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_00200B78 * 0.5f;
    h = func_0B2AB8(D_00200B28);
    func_0AD290(46, a, b, D_00200B90, D_00200B90, h, h, h, h, sc, sc, ang);
    func_0A90A8();
}
