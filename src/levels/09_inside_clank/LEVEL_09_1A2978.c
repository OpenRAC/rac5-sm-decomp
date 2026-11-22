/* LEVEL_09:0x1A2978 -- placement copy of LEVEL_04_1BC4B8.c: positional-sound emitter update: while idle it stops the playing sound once the listener is beyond 1.05 times the radius, or starts it when inside the radius; with a running timer it counts down, restarts the sound inside the radius and re-arms the timer. */
typedef struct {
    char pad00[0x14];
    float f14;
    float f18;
    float f1C;
    float f20;
} Def;

typedef struct {
    Def *def;
    void *playing;
} Slot;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x58 - 0x3C];
    Slot *slot;
    char pad5C[0x70 - 0x5C];
    float f70;
} Obj;

typedef struct {
    char pad00[0x90];
    float pos[3];
} Snd;

extern Snd g_snd;

extern void SND_StopPositionalSound(void *p, int fade) __asm__("SND_StopPositionalSound__FP14SND_Positionalb");
extern void func_07D450(Obj *o, Def *m, int e, int f, int g, int h, int i, int j, float a, float b, float c, float d);
extern float func_1A2B88(void *a0);

static __inline__ float Dist2(float *a, float *b)
{
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];

    return dx * dx + dy * dy + dz * dz;
}

void func_1A2978(Obj *o, float dt)
{
    Slot *s;
    Def *d;
    float r;
    float t;
    int pl;

    s = o->slot;
    if (o->f70 == 0.0f) {
        if (s->playing != 0) {
            if ((s->def->f1C * 1.0499999523162842f) * (s->def->f1C * 1.0499999523162842f) < Dist2(o->pos, g_snd.pos)) {
                void *h = s->playing;

                s->playing = 0;
                SND_StopPositionalSound(h, 1);
            }
        } else {
            r = s->def->f1C;
            if (Dist2(o->pos, g_snd.pos) < r * r) {
                d = s->def;
                pl = (int)&s->playing;
                if (d != 0) {
                    func_07D450(o, d, pl, 0, 0, 0, 0, 1, d->f14, d->f18, d->f1C, d->f20);
                }
            }
        }
    } else {
        t = o->f70 - dt;
        o->f70 = t;
        if (t <= 0.0f) {
            r = s->def->f1C;
            if (Dist2(o->pos, g_snd.pos) < r * r) {
                d = s->def;
                if (d != 0) {
                    func_07D450(o, d, 0, 0, 0, 0, 0, 1, d->f14, d->f18, d->f1C, d->f20);
                }
            }
            o->f70 = func_1A2B88(o);
        }
    }
}
