/* LEVEL_20:0x025D80 -- placement copy of LEVEL_01_02B838.c: builds a local block from the input vector and scaled copies of the argument, then when the floor of a constant is positive calls a helper with the block. */
typedef struct Vec3 {
    float x;
    float y;
    float z;
} Vec3;

typedef struct Block {
    Vec3 pos;
    float f0C;
    float f10;
    float f14;
    float f18;
    char *p1C;
    char *p20;
} Block;

extern char D_00104708[];
extern char D_00137DD0[];
extern char *D_00137F08;
extern float floorf(float a0);
extern void func_0C6B00(char *a0, Block *a1, int a2, float f12, float f13);

void func_025D80(Vec3 *in, float f12)
{
    Block b;
    char *s0;
    float fl;

    b.p1C = D_00104708;
    b.p20 = D_00137DD0;
    s0 = D_00137F08;
    b.pos = *in;
    b.f0C = f12 * 0.0f;
    b.f10 = f12 * 0.1f;
    b.f14 = f12;
    b.f18 = f12;
    fl = floorf(3.015000343322754f);
    if (0.0f < fl) {
        func_0C6B00(s0, &b, (int)fl, 1.4925371408462524f, 1.4925371408462524f);
    }
}
