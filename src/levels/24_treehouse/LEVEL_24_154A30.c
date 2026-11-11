/* LEVEL_24:0x154A30 -- placement copy of LEVEL_01_16B178.c: spawns a particle with a random unit direction scaled by speed. */
extern float cosf(float x);
extern float sqrtf(float x);
extern int rand(void);
extern int func_154D08(float f);
extern int func_154EF8(int h);
extern void func_067518(void *a, void *b, float *c, float *d, void *e);

typedef struct {
    char pad0[0x40];
    void *src;
    char pad44[4];
    float pos[3];
    float vel[3];
    float life;
    int pad64;
    int mode;
} Part;

extern char D_001D85B0[];
extern char D_001EF990[];

int func_154A30(float *origin, float speed)
{
    int h;
    Part *p;
    float *v;
    float *q;
    float c;
    float sn;
    float a;
    float w;

    h = func_154D08(0.0f);
    p = (Part *)func_154EF8(h);
    if (p != 0) {
        v = p->vel;
        v[2] = (float)rand() * 9.313225746154785e-10f - 1.0f;
        a = (float)rand() * 2.925836239953128e-09f - 3.1415927410125732f;
        c = cosf(a);
        sn = sqrtf(1.0f - c * c);
        if (a < 0.0f) {
            sn = -sn;
        }
        w = sqrtf(1.0f - v[2] * v[2]);
        p->vel[0] = c * w;
        v[1] = sn * w;
        q = p->pos;
        p->vel[0] = p->vel[0] * speed;
        v[1] = v[1] * speed;
        v[2] = v[2] * speed;
        p->pos[0] = origin[0] + p->vel[0];
        q[1] = origin[1] + v[1];
        q[2] = origin[2] + v[2];
        p->src = D_001D85B0;
        func_067518((char *)p + 4, D_001D85B0, origin, q, D_001EF990);
        p->mode = 2;
        p->life = 9.0f;
    }
    return h;
}
