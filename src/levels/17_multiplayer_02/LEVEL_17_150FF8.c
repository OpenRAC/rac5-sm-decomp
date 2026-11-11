/* LEVEL_17:0x150FF8 -- when requested, resets the global default camera rotation and tuning block. */
typedef struct {
    float x, y, z, w;
} Vec4;

typedef struct {
    float m[9];
} Mat3;

typedef struct {
    float f00, f04, f08, f0C, f10, f14, f18, f1C, f20;
    int f24;
    char f28;
    float f2C, f30, f34, f38, f3C, f40;
    int f44;
    char f48, f49;
    float f4C, f50, f54, f58;
    int f5C;
    char f60;
    float f64, f68, f6C, f70, f74;
    int f78, f7C;
    float f80, f84, f88, f8C, f90;
    char f94;
    int f98;
    int f9C;
} Cfg;

extern Vec4 D_002D63C0;
extern Mat3 D_002D63D0;
extern Cfg D_002D63F8;

extern void *memset(void *p, int c, unsigned n);
extern float cosf(float x);
extern float sinf(float x);
extern float powf(float x, float y);

void func_150FF8(int enable, int id)
{
    Mat3 m;
    Cfg c;
    Mat3 *pm;
    Cfg *pc;

    if (id != 0xFFFF || !enable) {
        return;
    }
    D_002D63C0.x = 0.0f;
    D_002D63C0.y = 0.0f;
    D_002D63C0.z = 0.0f;
    D_002D63C0.w = 1.0f;
    memset(&m, 0, sizeof(m));
    pm = &D_002D63D0;
    m.m[0] = cosf(0.06981316953897476f);
    m.m[2] = -sinf(0.06981316953897476f);
    m.m[4] = 1.0f;
    m.m[6] = sinf(0.06981316953897476f);
    m.m[8] = cosf(0.06981316953897476f);
    pc = &D_002D63F8;
    *pm = m;
    memset(&c, 0, sizeof(c));
    c.f00 = 0.009999999776482582f;
    c.f04 = 0.20000000298023224f;
    c.f08 = 0.5f;
    c.f0C = 0.8999999761581421f;
    c.f10 = 0.004999999888241291f;
    c.f14 = powf(0.9700000286102295f, 1.0f);
    c.f18 = 30.0f;
    c.f1C = 45.0f;
    c.f20 = 6.0f;
    c.f24 = 1;
    c.f28 = 1;
    c.f2C = 1.7999999523162842f;
    c.f30 = 2.5f;
    c.f34 = 10.000199317932129f;
    c.f38 = 2.5000498294830322f;
    c.f3C = 0.15000000596046448f;
    c.f40 = 0.004999999888241291f;
    c.f44 = 2;
    c.f48 = 1;
    c.f49 = 1;
    c.f4C = 0.20000000298023224f;
    c.f50 = 1.0f;
    c.f54 = 0.20000000298023224f;
    c.f58 = 0.5f;
    c.f5C = 3;
    c.f60 = 1;
    c.f64 = 0.019999999552965164f;
    c.f68 = 0.07999999821186066f;
    c.f6C = 0.5f;
    c.f70 = 30.00059700012207f;
    c.f74 = 20.000398635864258f;
    c.f78 = 0x80606060;
    c.f7C = 6;
    c.f84 = 1.5f;
    c.f88 = 0.4000000059604645f;
    c.f8C = 5.0000996589660645f;
    c.f90 = 2.5000498294830322f;
    c.f94 = 1;
    c.f98 = 20;
    *pc = c;
}
