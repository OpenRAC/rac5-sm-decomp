/* LEVEL_07:0x1978A0 -- three-phase door-like object: waits for a trigger, winds a phase value up toward one while turning its pieces, then unwinds it back to zero. */
typedef struct Flags {
    char pad_00[0x64];
    int flags;
} Flags;

typedef struct Info {
    int key;
    float *a;
    float *b;
    Flags *owner;
} Info;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0xE];
    Info *info;
    char pad_58[4];
    int snd;
    char pad_60[0x10];
    float phase;
} Obj;

extern float fabsf(float x);
extern int func_03C278(void);
extern int func_03C2C8(void);
extern float func_03C318(void);
extern void func_0289E8(int snd);
extern void func_158ED0(int key, int z);
extern void func_127410(float *out, float *axis, float ang);
extern void func_1289F8(float *a, float *b, float *m);

static __inline__ int Still(float v)
{
    return fabsf(v) <= 9.999999747378752e-06f;
}

void func_1978A0(Obj *o)
{
    Info *info;
    float m[12];
    float prev;
    float v;
    float ang;
    float *p;

    info = o->info;
    if (o->state == 0) {
        if (func_03C278()) {
            if (func_03C2C8() == info->key) {
                o->state = 1;
            }
        }
        return;
    }
    if (o->state == 1) {
        if (!func_03C278()) {
            o->state = 2;
            return;
        }
        prev = o->phase;
        o->phase = func_03C318();
        if (0.9900000095367432f <= o->phase) {
            info->owner->flags &= ~0x10;
            o->state = 3;
            o->phase = 1.0f;
            func_0289E8(o->snd);
            func_158ED0(info->key, 0);
        }
        ang = (o->phase - prev) * 3.1415927410125732f;
        p = info->a;
        func_127410(m, p + 4, ang);
        func_1289F8(p, p, m);
        func_1289F8(info->b, info->b, m);
    } else if (o->state == 2) {
        v = o->phase;
        if ((unsigned char)Still(v)) {
            o->state = 0;
            return;
        }
        o->phase = v - 0.029999999329447746f;
        v = o->phase;
        ang = -0.09424778074026108f;
        if (v <= 0.0f) {
            o->phase = 0.0f;
            ang = -v * 3.1415927410125732f + ang;
        }
        p = info->a;
        func_127410(m, p + 4, ang);
        func_1289F8(p, p, m);
        func_1289F8(info->b, info->b, m);
    }
}
