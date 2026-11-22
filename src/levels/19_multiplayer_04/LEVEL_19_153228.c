/* LEVEL_19:0x153228 -- placement copy of LEVEL_16_158E88.c: drains the emit counter of an effect object: while it is above one, scatters a puff at a random angle and radius around the object's anchor point and subtracts one. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float m[16];
} Mat4;

typedef struct {
    char pad_00[8];
    float t_08;
} Fx;

typedef struct {
    char pad_00[0x58];
    Fx *fx_58;
} Obj;

extern int D_002E53B0;
extern Vec3 D_001D55A8;
extern char D_001CDF38[];

extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern void func_104C00(Vec3 *dst, Mat4 *mat, Vec3 *v);
extern void func_0D47C8(int g, Vec3 *pos, char *tab, unsigned int color, int h, int i, float a, float b, float c, float d, float e, float f);

void func_153228(Obj *o)
{
    Fx *fx;
    float ang;
    float rad;
    float sc;
    Vec3 base;
    Vec3 dir;
    Vec3 pos;

    fx = o->fx_58;
    fx->t_08 = fx->t_08 + 0.8f;
    if (1.0f < fx->t_08) {
        func_104C00(&base, (Mat4 *)o, &D_001D55A8);
        dir.y = 0.0f;
        if (1.0f < fx->t_08) {
            do {
                ang = (float)rand() * 4.656613e-10f * 2.0f * 3.1415927f;
                dir.x = cosf(ang);
                dir.z = sinf(ang);
                sc = 1.256f;
                rad = (float)rand() * 4.656613e-10f * sc;
                pos.x = base.x + dir.x * rad;
                pos.y = base.y + dir.y * rad;
                pos.z = base.z + dir.z * rad;
                func_0D47C8(D_002E53B0, &pos, D_001CDF38, 0xAA008800, 0, 0, 0.21f, 0.14f, -0.15f, 36.0f, 21.0f, 0.0f);
                fx->t_08 = fx->t_08 - 1.0f;
            } while (1.0f < fx->t_08);
        }
    }
}
