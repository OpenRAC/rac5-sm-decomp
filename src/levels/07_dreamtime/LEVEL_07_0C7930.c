/* LEVEL_07:0x0C7930 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_00341318;
extern float D_00214E78;
extern unsigned short D_00214E90;
extern char D_00214E28[];
extern float atan2f(float y, float x);
extern int func_02A730(int n);
extern int func_0B4B18(void *p);
extern void func_0AF290(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_0AB0A8(void);

void func_0C7930(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_00341318.x;
    p[1] = D_00341318.y;
    p[2] = D_00341318.z;
    p[3] = D_00341318.w;



    if (func_02A730(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_00214E78 * 0.5f;
    h = func_0B4B18(D_00214E28);
    func_0AF290(46, a, b, D_00214E90, D_00214E90, h, h, h, h, sc, sc, ang);
    func_0AB0A8();
}
