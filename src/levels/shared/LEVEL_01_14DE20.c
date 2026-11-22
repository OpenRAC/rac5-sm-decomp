/* LEVEL_01:0x14DE20 -- advances a looping phase and an angle of the object's effect record. */
extern float fmodf(float x, float y);

static __inline__ float Wrap(float a)
{
    a = fmodf(a, 6.2831854820251465f);
    if (a < 0.0f) {
        a = a + 6.2831854820251465f;
    }
    return a;
}

typedef struct {
    char pad00[0x98];
    float angle;
    float spin;
    float phase;
} Fx;

typedef struct {
    char pad00[0x58];
    Fx *fx;
} Obj;

void func_14DE20(Obj *o)
{
    Fx *fx = o->fx;

    fx->phase += 0.20000001788139343f;
    if (fx->phase < 0.0f) {
        fx->phase += 1.0f;
    } else if (fx->phase > 1.0f) {
        fx->phase -= 1.0f;
    }
    fx->angle = Wrap(fx->angle + 1.0f);
    fx->spin += 2.0f;
}
