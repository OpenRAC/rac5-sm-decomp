/* LEVEL_19:0x04CB50 -- placement copy of LEVEL_16_04D6F0.c: starts a state change and copies a float4 when allowed. */
typedef struct {
    float x, y, z, w;
} V4;
typedef struct {
    char pad0[0x102];
    short s102;
    char pad104[0x134 - 0x104];
    int i134;
    char pad138[0x168 - 0x138];
    int i168;
    char pad16C[0x304 - 0x16C];
    float v304[4];
} O;
extern float D_001C402C;
extern float D_001CDF48[4];
extern void func_04D7A0(O *o, float a, float b);

int func_04CB50(O *o, int a, int b)
{
    float *d;
    if (a != 4) {
        if (b == 3) {
            if (a != 1)
                return 0;
            if (o->i168 != 0)
                return 0;
        }
    }
    if (o->v304[1] < 0.95f)
        func_04D7A0(o, D_001C402C, 0.8f);
    d = o->v304;
    d[0] = D_001CDF48[0];
    d[1] = D_001CDF48[1];
    d[2] = D_001CDF48[2];
    d[3] = D_001CDF48[3];
    o->s102 = 4;
    o->i168 = 2;
    o->i134 = 0;
    return 1;
}
