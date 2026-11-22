/* LEVEL_02:0x037308 -- every third tick releases the state's handles (two small, six more when flagged) and, when its target object and pending flag are set, moves the object to the midpoint of two looked-up positions (height lowered by the target's offset) and runs its class hook; clears the pending flag. */
typedef struct Hook {
    char pad_00[0x28];
    void (*run)(struct Obj *o);
} Hook;

typedef struct Cls {
    char pad_00[0x10];
    Hook *hook;
} Cls;

typedef struct Obj {
    char pad_00[0x30];
    float pos[3];
    char pad_3C[4];
    Cls *cls;
    char pad_44[0x14];
    struct Link *link;
} Obj;

typedef struct Mid {
    char pad_00[0x10];
    float y;
} Mid;

typedef struct Link {
    Mid *mid;
} Link;

typedef struct State {
    Obj *target;
    int ids[2];
    char pad_0C[0x84];
    int more[6];
    char pad_A8[6];
    unsigned char b_AE;
    unsigned char b_AF;
    unsigned char b_B0;
} State;

typedef struct Owner {
    char pad_00[0x58];
    State *state;
} Owner;

static __inline__ void Add3(float *o, float *a, float *b)
{
    o[0] = a[0] + b[0];
    o[1] = a[1] + b[1];
    o[2] = a[2] + b[2];
}

static __inline__ void Scale3(float *v, float k)
{
    v[0] = v[0] * k;
    v[1] = v[1] * k;
    v[2] = v[2] * k;
}

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

extern float *func_1611B0(int id);
extern void func_1611D8(int id);
extern void func_073408(int id);

void func_037308(Owner *o)
{
    State *s;
    unsigned int i;
    int *p;
    float *a;
    float *b;
    float v[3];

    s = o->state;
    s->b_B0++;
    if (s->b_B0 < 3) {
        return;
    }
    i = 0;
    p = s->ids;
    do {
        func_1611D8(*p);
        i++;
        p++;
    } while (i < 2);
    if (s->b_AF != 0) {
        i = 0;
        p = s->more;
        do {
            func_073408(*p);
            i++;
            p++;
        } while (i < 6);
    }
    if (s->target != 0 && s->b_AE != 0) {
        a = func_1611B0(s->ids[0]);
        b = func_1611B0(s->ids[1]);
        Add3(v, a, b);
        Scale3(v, 0.5f);
        v[1] = v[1] - s->target->link->mid->y;
        Copy3(s->target->pos, v);
        if (s->target->cls->hook->run != 0) {
            s->target->cls->hook->run(s->target);
        }
    }
    s->b_AE = 0;
}
