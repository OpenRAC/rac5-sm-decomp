/* LEVEL_01:0x16B178 -- spawns a particle with a random unit direction scaled by speed. */
extern float cosf(float x);
extern float sqrtf(float x);
extern int rand(void);
extern int func_16B450(float f);
extern int func_16B640(int h);
extern void func_06DED8(void *a, void *b, float *c, float *d, void *e);

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

extern char D_00207690[];
extern char D_00220690[];

int func_16B178(float *origin, float speed)
{
    int h;
    Part *p;
    float *v;
    float *q;
    float c;
    float sn;
    float a;
    float w;

    h = func_16B450(0.0f);
    p = (Part *)func_16B640(h);
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
        p->src = D_00207690;
        func_06DED8((char *)p + 4, D_00207690, origin, q, D_00220690);
        p->mode = 2;
        p->life = 9.0f;
    }
    return h;
}
