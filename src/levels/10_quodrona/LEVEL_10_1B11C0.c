/* LEVEL_10:0x1B11C0 -- placement copy of LEVEL_06_199F50.c: advances the object's position by its velocity scaled with a third of the shared factor, registers the object with its handler, ages the state record's timer, drops its two linked pointers when their flag bits say so and, when the follow-up check passes, finishes the object. */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad00[0x64];
    unsigned int flags;
} Link;

typedef struct {
    char pad00[8];
    Link *second;
    Link *first;
    float timer;
} State;

typedef struct {
    char pad00[0x20];
    Vec3 vel;
    char pad2C[4];
    Vec3 pos;
    char pad3C[0x18];
    State *state;
} Obj;

extern float func_026708(void);
extern void func_0999A0(void (*handler)(void), Obj *o, int a2, int a3);
extern void func_07CCA0(Obj *o, int a1);
extern int func_1B14E0(Obj *o);
extern void func_1B18E8(void);

static __inline__ void AddScaled(Vec3 *p, Vec3 *v, float k)
{
    Vec3 d;

    d.x = k * v->x;
    d.y = k * v->y;
    d.z = k * v->z;
    p->x += d.x;
    p->y += d.y;
    p->z += d.z;
}

void func_1B11C0(Obj *o)
{
    State *s = o->state;
    float k;

    k = func_026708() * 0.33333334f;
    AddScaled(&o->pos, &o->vel, k);
    func_0999A0(func_1B18E8, o, 0, 0);
    s->timer = s->timer + k;
    if (s->first != 0) {
        if ((s->first->flags & 7) != 1) {
            s->first = 0;
        }
    }
    if (s->second != 0) {
        if ((s->second->flags & 6) != 0) {
            s->second = 0;
        }
    }
    if (func_1B14E0(o) != 0) {
        func_07CCA0(o, 1);
    }
}
