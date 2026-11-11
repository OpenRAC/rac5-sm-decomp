/* LEVEL_22:0x114B80 -- advances the wave phase, rebuilds the packed 60-entry colour table and refreshes the blend registers. */
extern float fmodf(float x, float y);
extern float cosf(float x);
extern float sqrtf(float x);
extern float fabsf(float x);

typedef struct {
    char pad0[0x84];
    float a[60];
    float b[60];
    unsigned int out[60];
    float phase;
    unsigned int w358;
    unsigned int w35C;
    char pad360[0x4C];
    unsigned int w3AC;
} Wave;

typedef struct {
    char pad0[0x11C];
    int lo;
    char pad120[0xBC];
    int hi;
} Cfg;

extern Wave D_002E7480;
extern Cfg D_001ED980;
extern unsigned char D_0016645C;

static inline float scale01(float x)
{
    float t = x + fabsf(x);
    float u = fabsf(2.0f - t);
    float r = t + 2.0f;

    r = r - u;
    return r * 0.25f;
}

void func_114B80(void)
{
    unsigned char i;
    float ang;
    float c;
    float s;
    float x;
    float y;
    float amp;
    unsigned int hi;
    unsigned int lo;
    float npi = -3.1415927f;
    float pi = 3.1415927f;

    D_002E7480.phase = fmodf(D_002E7480.phase + 0.06981317f, 6.2831855f);
    for (i = 0; i < 60; i++) {
        ang = D_002E7480.a[i] + D_002E7480.phase;
        if (ang < npi)
            ang = pi - (npi - ang);
        else if (ang > pi)
            ang = npi + (ang - pi);
        c = cosf(ang);
        s = sqrtf(1.0f - c * c);
        if (ang < 0.0f)
            s = -s;
        amp = D_002E7480.b[i];
        x = s * 0.5f * amp + 0.5f;
        y = c * 0.5f * amp + 0.5f;
        D_002E7480.out[i] = (int)(scale01(y) * 32768.0f) | ((int)(scale01(x) * 32768.0f) << 16);
    }
    if (D_0016645C != 0) {
        D_002E7480.w358 = (((D_002E7480.w358 & 0xF800FFFF) | (D_001ED980.lo << 16)) & 0xFFFFFC3F) | 0xC0;
        D_002E7480.w35C = (((D_002E7480.w35C & 0xF800FFFF) | (D_001ED980.lo << 16)) & 0xFFFFFC3F) | 0xC0;
        D_002E7480.w3AC = ((((D_002E7480.w3AC & 0xF800FFFF) | (D_001ED980.hi << 16)) & 0xFFFFFC3F) | 0x40) & 0xFFFFF3FF;
    }
}
