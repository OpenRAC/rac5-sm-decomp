/* LEVEL_10:0x0DE768 -- placement copy of LEVEL_01_0DD328.c: spawns one particle record with a random heading and a given pitch. */
typedef struct { float x, y, z; } V3;
typedef struct {
    V3 pos;
    int w0c;
    float s10;
    float c14;
    float f18;
    float f1c;
    int w20;
    int w24;
    float f28;
    float f2c;
    float c30;
    float s34;
} Particle;
extern float sqrtf(float);
extern float cosf(float);
extern int rand(void);
extern Particle *func_097AF0(int *out, int a, int one);

void func_0DE768(int a0, int a1, int a2, V3 *pos, float f12, float pitch, int t0, float f14, float f15, float f16)
{
    Particle *p;
    int ok;
    float c, s, ang;

    ok = -1;
    p = func_097AF0(&ok, a0, 1);
    if (p != 0) {
        p->w24 = a1;
        p->f28 = f12;
        p->f18 = f14;
        p->f1c = f16;
        p->w0c = a2;
        p->w20 = t0;
        p->f2c = f15;
        {
            float tp = 6.2831855f;
            float np = -3.1415927f;
            ang = (float)rand() * 4.656613e-10f * tp + np;
        }
        c = cosf(ang);
        s = sqrtf(1.0f - c * c);
        if (ang < 0.0f) s = -s;
        p->c14 = c;
        p->s10 = s;
        c = cosf(pitch);
        s = sqrtf(1.0f - c * c);
        if (pitch < 0.0f) s = -s;
        p->s34 = s;
        p->c30 = c;
        p->pos.x = pos->x;
        p->pos.y = pos->y;
        p->pos.z = pos->z;
    }
}
