/* LEVEL_16:0x15AA70 -- timed fade object: in state 0 it counts its timer down and switches to state 1 (flag 0x40, timer 1.0) when the timer runs out or the height is below 40; in state 1 it counts down by 1/30, finishes at zero, otherwise packs a fading colour word from the timer; every pass then moves the object by the linked record's vector. */
typedef struct Rec {
    float v[3];
} Rec;

typedef struct Obj {
    char pad00[0x30];
    float pos[3];
    char pad3C[9];
    unsigned char b45;
    char pad46[0x12];
    Rec *f58;
    char pad5C[8];
    unsigned int w64;
    unsigned int w68;
    char pad6C[4];
    float f70;
} Obj;

extern unsigned int func_196D18(float input);
extern void func_06F940(Obj *o, int flag);

static __inline__ float Mix(float t, float a, float b)
{
    return t * a + b;
}

static __inline__ void Add3(float *a, float *b)
{
    a[0] = a[0] + b[0];
    a[1] = a[1] + b[1];
    a[2] = a[2] + b[2];
}

void func_15AA70(Obj *o)
{
    Rec *r = o->f58;
    float t;
    unsigned int c;

    if (o->b45 == 0) {
        o->f70 = o->f70 - 1.0f;
        if (o->f70 <= 0.0f || o->pos[1] < 40.0f) {
            o->b45 = 1;
            o->w64 = o->w64 | 0x40;
            o->f70 = 1.0f;
        }
    } else if (o->b45 == 1) {
        t = o->f70 - 0.033333335f;
        o->f70 = t;
        if (t <= 0.0f) {
            func_06F940(o, 1);
            return;
        }
        c = func_196D18(Mix(t, 255.0f, 0.0f)) << 24;
        c |= func_196D18(Mix(t, 0.0f, 255.0f)) << 16;
        c |= func_196D18(Mix(t, 0.0f, 255.0f)) << 8;
        c |= func_196D18(Mix(t, 0.0f, 255.0f));
        o->w68 = c;
    }
    Add3(o->pos, r->v);
}
