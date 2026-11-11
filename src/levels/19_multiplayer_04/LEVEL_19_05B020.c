/* LEVEL_19:0x05B020 -- placement copy of LEVEL_01_0691B8.c: reads stick input and eases two look angles toward it. */
typedef struct {
    char pad0[0x30];
    float sx;
    float sy;
} Cam;

typedef struct {
    char pad0[0xD4];
    int buttons;
    char pad1[4];
    float ax;
    float ay;
    char pad2[0x5A4 - 0xE4];
    int enabled;
    char pad3[0xF0C - 0x5A8];
    float (*scaleFn)(void *);
    char pad4[0xF2C - 0xF10];
    float yaw;
    float yawAng;
    char pad5[0xF3C - 0xF34];
    float pitch;
    float pitchVel;
} Obj;

extern Cam *D_001A2C34;
extern int func_079D18(int);
extern int func_079D50(int);
extern float func_05AFB0(float, float, float, float, float);
extern float fabsf(float);

static inline float clampf(float v)
{
    float a = fabsf(v + 1.0f); float t = (v - 1.0f) + a;

    return ((t + 2.0f) - fabsf(2.0f - t)) * 0.25f;
}

void func_05B020(Obj *o)
{
    int b;
    float x;
    float y;
    float k;
    float r;
    float n;
    float u;
    float v;
    float ax;
    float ay;

    b = o->buttons;
    x = o->ax;
    y = o->ay;
    if (func_079D18(b))
        x += 1.0f;
    if (func_079D50(b))
        x -= 1.0f;
    if (b & 0x40)
        y -= 1.0f;
    if (b & 0x10)
        y += 1.0f;
    x = clampf(x * -D_001A2C34->sx);
    y = clampf(y * -D_001A2C34->sy);
    if (o->scaleFn && o->enabled)
        k = o->scaleFn(o);
    else
        k = 1.0f;
    ay = fabsf(y);
    ax = fabsf(x);
    o->yawAng = func_05AFB0(o->yawAng, -x, ax * 1.5707963705062866f * 0.01666666753590107f, 0.0034906589426100254f, 0.013962635770440102f);
    o->yaw = o->yaw + k * o->yawAng;
    r = func_05AFB0(o->pitchVel, y, ay * 0.7853981852531433f * 0.01666666753590107f, 0.0017453294713050127f, 0.013962635770440102f);
    n = o->pitch + k * r;
    o->pitchVel = r;
    o->pitch = n;
    if (n < -1.1344640254974365f) {
        o->pitch = -1.1344640254974365f;
        o->pitchVel = 0.0f;
    } else if (n > 0.9599310755729675f) {
        o->pitch = 0.9599310755729675f;
        o->pitchVel = 0.0f;
    }
}
