/* LEVEL_15:0x103010 -- places the object at a randomised point of its data block range and, unless the newest entry of its three-slot ring is already the shared handler, pushes the handler with a fixed weight and registers it; clears the pending flag. */
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
    char pad_00[0x34];
    float f34;
    char pad_38[4];
    float f3C;
    char pad_40[0x58 - 0x40];
    float f58;
} Data;

typedef struct Obj {
    char pad_00[8];
    float f08;
    float f0C;
    char pad_10[0xF4 - 0x10];
    struct Q q;
    char pad_204[0x23C - 0x204];
    Data *data;
    char pad_240[0x454 - 0x240];
    int w454;
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

void func_103010(Obj *o)
{
    Data *d;
    float t;

    d = o->data;
    t = d->f3C + d->f58 * (float)rand();
    o->f08 = d->f34;
    o->f0C = t;
    if (!IsNewest(&o->q, (int)func_0FD140)) {
        func_0FD100(func_0FCE88(&o->q, (int)func_0FD140, 0.095238097f), (char *)d + 0x74);
    }
    o->w454 = 0;
}
