/* LEVEL_08:0x0F36B8 -- placement copy of LEVEL_01_0E81D8.c: spawns one particle with a randomized direction. */
typedef struct { float x, y, z; } V3;
typedef struct {
    V3 pos;
    V3 dir;
    unsigned int c18;
    float f1c;
    float s20;
    float c24;
    float d28;
    float e2c;
    unsigned int f30;
    unsigned int t34;
    int d38;
} Particle;
extern float sqrtf(float);
extern float cosf(float);
extern int rand(void);
extern Particle *func_09F6B0(int *out, int a, int one);

void func_0F36B8(int a0, V3 *pos, V3 *dir, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2, float f1, float f2)
{
    Particle *p;
    int ok;
    float c, s, ang;

    if (!(dir->y < 0.1f)) {
        p = func_09F6B0(&ok, a0, 1);
        if (ok != 0) {
            float py;
            float pz;
            float px;
            py = pos->y + 0.01f;
            px = pos->x;
            pz = pos->z;
            p->pos.z = pz;
            p->pos.x = px;
            p->pos.y = py;
            p->dir = *dir;
            p->f1c = f1;
            p->c18 = t2;
            p->f30 = a3;
            p->d38 = a3 - t0;
            p->d28 = (f2 - f1) / (float)t0;
            p->t34 = t1;
            p->e2c = (float)(t2 >> 24) / (float)t1;
            {
            float tp = 6.2831855f;
            float np = -3.1415927f;
            ang = (float)rand() * 4.656613e-10f * tp + np;
            }
            c = cosf(ang);
            s = sqrtf(1.0f - c * c);
            if (ang < 0.0f) s = -s;
            p->s20 = s;
            p->c24 = c;
        }
    }
}
