/* LEVEL_04:0x051658 -- placement copy of LEVEL_01_04FC98.c: resets an actor's motion state: copies the anchor vectors, clears the offsets and starts the intro blend. */
typedef struct Link {
    char pad00[0x48];
    struct Link2 *next;
} Link;

typedef struct Link2 {
    char pad00[8];
    float scale;
} Link2;

typedef struct Actor {
    char pad000[0x34];
    float f34;
    char pad38[0x108 - 0x38];
    short s108;
    short s10A;
    char pad10C[0x200 - 0x10C];
    float a200[4];
    float a210[4];
    float a220[4];
    float f230;
    char pad234[0x23C - 0x234];
    float f23C;
    float f240;
    float f244;
    char pad248[0x26C - 0x248];
    float f26C;
    char pad270[0x59C - 0x270];
    Link *link;
    char pad5A0[0xBCC - 0x5A0];
    float b[4];
    char padBDC[0xC0C - 0xBDC];
    int iC0C;
    float fC10;
    float fC14;
    float fC18;
    float fC1C;
    float fC20;
    float fC24;
    float fC28;
    float fC2C[4];
} Actor;

extern float D_002317F8[4];
extern int func_04F430(Actor *o, int a, int b, int c, float d, float e);
extern void func_03D8C0(Actor *o, int a);
extern void func_013498(float *p, float a, float b, float c, float d);

static __inline__ void Copy4(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
}

void func_051658(Actor *o)
{
    float t;

    o->s108 = 1;
    o->s10A = 1;
    o->iC0C = 1;
    if (func_04F430(o, 0x1B, 0, 1, 0.1f, 0.0f) != 0) {
        o->link->next->scale = 1.1f;
    }
    t = o->fC20;
    o->fC10 = o->f34;
    o->fC1C = 0.0f;
    o->fC14 = t - 1.44f;
    o->fC18 = 10.0002f;
    func_03D8C0(o, 0);
    Copy4(o->b, o->a200);
    o->f26C = 0.0f;
    o->f244 = 0.0f;
    o->f23C = 0.0f;
    o->f240 = 0.0f;
    Copy4(o->a210, o->a200);
    Copy4(o->a220, D_002317F8);
    o->fC28 = 60.0012f;
    o->fC24 = (o->fC24 - 0.5f) / o->fC18;
    func_013498(o->fC2C, 0.0f, 0.3f, 0.2f, 10000.0f);
}
