/* LEVEL_08:0x211500 -- placement copy of LEVEL_03_1E21A8.c: fills sine/cosine pairs for four angles and merges table bits into two flag words. */
typedef struct {
    char pad0[0xC];
    float a0C;
    float a10;
    int n14;
    float a18;
    int i1C;
    unsigned w20;
    char pad24[0x34 - 0x24];
    int i34;
    unsigned w38;
    char pad3C[0x60 - 0x3C];
    float s60;
    float c64;
    float s68;
    float c6C;
    float c70;
    float s74;
    float c78;
    float s7C;
} O;
extern int D_002E7040[];
extern float cosf(float x);
extern float sqrtf(float x);
extern void func_2295D0(void *p, unsigned w);

static __inline__ float sinpos(float c)
{
    return sqrtf(1.0f - c * c);
}

void func_211500(O *o)
{
    float ang;
    float b;
    float c;
    float s;

    ang = 6.2831854820251465f / (float)o->n14;
    b = o->a10;
    o->w20 = (o->w20 & 0xF800FFFFu) | (D_002E7040[o->i1C] << 16);
    c = cosf(ang);
    s = sinpos(c);
    if (ang < 0.0f)
        s = -s;
    o->c64 = c;
    o->s60 = s;
    c = cosf(b);
    s = sinpos(c);
    if (b < 0.0f)
        s = -s;
    ang = o->a18;
    o->c6C = c;
    o->s68 = s;
    c = cosf(ang);
    s = sinpos(c);
    if (ang < 0.0f)
        s = -s;
    ang = o->a0C;
    o->c70 = c;
    o->s74 = s;
    c = cosf(ang);
    s = sinpos(c);
    if (ang < 0.0f)
        s = -s;
    o->s7C = s;
    o->c78 = c;
    func_2295D0((char *)o + 0x3C, (o->w38 & 0xF800FFFFu) | (D_002E7040[o->i34] << 16));
}
