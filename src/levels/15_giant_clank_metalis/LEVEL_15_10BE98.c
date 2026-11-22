/* LEVEL_15:0x10BE98 -- re-aims the object from the child's random spread, queues the effect entry unless the newest queued entry already has the same handler, then clears the pending counter and velocity and copies the saved position. */
struct Slot {
    int f00;
    float f04;
    float f08;
    char f0C[0x58 - 0x0C];
};

struct Q {
    struct Slot slot[3];
    unsigned int f108;
    unsigned int f10C;
};

typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad0[0x34];
    float f34;
    char pad38[0x5C - 0x38];
    float f5C;
    char pad60[0x78 - 0x60];
    char x78[1];
} Child;

typedef struct {
    char pad0[8];
    float f8;
    int wC;
    float v10[3];
    Vec3 a1C;
    char pad28[0xC4 - 0x28];
    Vec3 aC4;
    char padD0[0xD4 - 0xD0];
    struct Q q;
    char pad1E4[0x230 - 0x1E4];
    Child *child;
    char pad234[0x2A8 - 0x234];
    int w2A8;
} Obj;

extern int rand(void);
extern void func_0FD140(void);
extern char *func_0FCE88(struct Q *q, int key, float f);
extern void func_0FD100(char *a, char *b);

static __inline__ unsigned char LastIs(struct Q *q, int key)
{
    if (q->f10C == 0)
        return 0;
    return q->slot[(q->f108 + q->f10C - 1) % 3].f00 == key;
}

static __inline__ void Zero3(float *v)
{
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
}

void func_10BE98(Obj *o)
{
    Child *c = o->child;

    o->f8 = c->f34 + c->f5C * (float)rand();
    if (!LastIs(&o->q, (int)func_0FD140))
        func_0FD100(func_0FCE88(&o->q, (int)func_0FD140, 0.095238097012043f), c->x78);
    o->w2A8 = 0;
    Zero3(o->v10);
    o->a1C = o->aC4;
    o->wC = 0;
}
