/* LEVEL_22:0x136D48 -- placement copy of LEVEL_03_1C4F28.c: spawns one randomised effect particle with a colour/type key chosen by the owner's mode byte. */
typedef struct { char pad[0x105]; unsigned char mode; } State;
typedef struct { char pad[0x58]; State *state; } Obj;

extern int rand(void);
extern void func_0C9768(int one, int p2, int p3, float a, float b, float c, float d, float e, unsigned int k1, unsigned int k2, Obj *obj, int one2, int type);

static __inline__ float Rnd(float lo, float range)
{
    return (float)rand() * 4.656613e-10f * range + lo;
}

void func_136D48(Obj *obj, int p2, int p3)
{
    State *s;
    float speed;
    float angle;
    float drift;
    float size;

    s = obj->state;
    speed = Rnd(0.002f, 0.08133334f);
    angle = Rnd(0.0f, 1.5707964f);
    drift = Rnd(0.0033333336f, 0.0009999999f);
    size = Rnd(0.2f, 0.10000001f);
    if (s->mode == 0) {
        func_0C9768(1, p2, p3, speed, size, 1.0f, drift, angle, 0xFFFABD63, 0xA0CA7B07, obj, 1, 14);
    } else if ((unsigned char)(s->mode - 2) < 2) {
        func_0C9768(1, p2, p3, speed, size, 1.0f, drift, angle, 0xFF4040FA, 0xA00707CA, obj, 1, 14);
    }
}
