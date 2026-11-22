/* LEVEL_15:0x113678 -- places the object at a randomised point of its data block range and, unless the newest entry of its three-slot ring is already the shared handler, pushes the handler with a fixed weight and registers it; clears the pending flag. */
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

typedef struct Data {
    char pad_00[0x74];
    float f74;
    char pad_78[4];
    float f7C;
    char pad_80[0xA4 - 0x80];
    float fA4;
} Data;

typedef struct Obj {
    char pad_00[8];
    float f08;
    float f0C;
    char pad_10[0x110 - 0x10];
    struct Q q;
    char pad_220[0x254 - 0x220];
    Data *data;
    char pad_258[0x2CC - 0x258];
    int w2CC;
} Obj;

extern int rand(void);
extern void func_0FD140(void);
extern char *func_0FCE88(struct Q *a0, int a1, float a2);
extern void func_0FD100(char *a, char *b);

static __inline__ unsigned char IsNewest(struct Q *q, int key)
{
    if (q->f10C == 0) {
        return 0;
    }
    return q->slot[(q->f108 + q->f10C - 1) % 3].f00 == key;
}

void func_113678(Obj *o)
{
    Data *d;
    float t;

    d = o->data;
    t = d->f7C + d->fA4 * (float)rand();
    o->f08 = d->f74;
    o->f0C = t;
    if (!IsNewest(&o->q, (int)func_0FD140)) {
        func_0FD100(func_0FCE88(&o->q, (int)func_0FD140, 0.095238097f), (char *)d + 0xC4);
    }
    o->w2CC = 0;
}
