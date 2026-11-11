/* LEVEL_10:0x156250 -- placement copy of LEVEL_06_14DE00.c: picks a random point on a ring around an object and snaps it through a lookup. */
struct Obj {
    char pad0[0x30];
    float x;
    char pad1[4];
    float z;
    char pad2[0x18];
    float *p;
};

extern int rand(void);
extern float cosf(float x);
extern float sinf(float x);
extern void func_030D70(float *dst, float *src, int flag);

void func_156250(struct Obj *o)
{
    float *p = o->p;
    float r;
    float t;
    float k = 4.656612873077393e-10f;
    float c6 = 6.0f;
    float c2 = 2.0f;
    float buf[3];

    r = (float)rand() * k * c6 + c2;
    t = (float)rand() * k;
    t = t + t;
    t = t * 3.1415927410125732f;
    p[0] = cosf(t);
    p[1] = sinf(t);
    p[0] *= r;
    p[1] *= r;
    p[0] += o->x;
    p[1] += o->z;
    buf[0] = p[0];
    buf[2] = p[1];
    buf[1] = 0;
    func_030D70(p, buf, 0);
    p[0] = buf[0];
    p[1] = buf[2];
}
