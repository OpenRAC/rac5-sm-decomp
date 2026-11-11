/* LEVEL_23:0x0BC670 -- placement copy of LEVEL_01_0C58D0.c: spawns an effect aimed along a direction taken from a table vector. */
typedef struct Vec4 { float x, y, z, w; } Vec4;
extern Vec4 D_002FCE58;
extern float D_001D3F78;
extern unsigned short D_001D3F90;
extern char D_001D3F28[];
extern float atan2f(float y, float x);
extern int func_027F60(int n);
extern int func_0A9898(void *p);
extern void func_0A4000(int id, int a, int b, unsigned int c, unsigned int d,
                        int e, int f, int g, int h, float p, float q, float r);
extern void func_09FE18(void);

void func_0BC670(short a, short b)
{
    float v[4];
    float *p = v;
    float ang;
    float sc;
    int h;
    v[0] = D_002FCE58.x;
    p[1] = D_002FCE58.y;
    p[2] = D_002FCE58.z;
    p[3] = D_002FCE58.w;



    if (func_027F60(4) != 0)
        ang = atan2f(v[2], -v[0]) + 1.5707964f;
    else
        ang = atan2f(v[2], v[0]) + 1.5707964f;
    sc = D_001D3F78 * 0.5f;
    h = func_0A9898(D_001D3F28);
    func_0A4000(46, a, b, D_001D3F90, D_001D3F90, h, h, h, h, sc, sc, ang);
    func_09FE18();
}
