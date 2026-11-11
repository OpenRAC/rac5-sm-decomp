/* LEVEL_10:0x162770 -- placement copy of LEVEL_01_16B178.c: spawns a particle with a random unit direction scaled by speed. */
extern float cosf(float x);
extern float sqrtf(float x);
extern int rand(void);
extern int func_162A48(float f);
extern int func_162C38(int h);
extern void func_06D0F0(void *a, void *b, float *c, float *d, void *e);

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

extern char D_002102C8[];
extern char D_00228C38[];

int func_162770(float *origin, float speed)
{
    int h;
    Part *p;
    float *v;
    float *q;
    float c;
    float sn;
    float a;
    float w;

    h = func_162A48(0.0f);
    p = (Part *)func_162C38(h);
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
        p->src = D_002102C8;
        func_06D0F0((char *)p + 4, D_002102C8, origin, q, D_00228C38);
        p->mode = 2;
        p->life = 9.0f;
    }
    return h;
}
