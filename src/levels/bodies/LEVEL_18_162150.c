/* LEVEL_18:0x162150 -- placement copy of LEVEL_01_194BA0.c: draws the two trail effects of an actor: first call builds both emitters, later calls refresh their transforms every fourth frame. */
typedef struct Owner {
    char pad_00[0xF8];
    int kind;
} Owner;

typedef struct Fx {
    Owner *owner;
    char pad_04[0x0C];
    char a10[0x10];
    char a20[0x20];
    char a40[0x0D];
    unsigned char ready;
    char pad_4E[0x3A];
    char a88[0x10];
    char a98[0x38];
    char aD0[0x5C];
    char a12C[0x20];
} Fx;

typedef struct Actor {
    char pad_00[0x10];
    char pos[0x48];
    Fx *fx;
} Actor;

extern int D_001BF3A0;
extern int D_001BF39C;
extern int D_001BF394;
extern int D_001A2F64;
extern int D_001D6A20[];
extern int D_001D6A28[];
extern float D_001CE2C8[3];

extern int func_021EB0(int a, int b);
extern void func_18C938(void * p0, int c, void * p1, void * p2, void * p3, void * p4, int d, float a, int e, float b, void * p5);
extern void func_18CB68(void *src, void *dst);
extern void func_18AE98(int g, void * p0, void * p1, float a, float b, float c, float d, float e, float f, int h);

void func_162150(Actor *actor)
{
    Fx *fx;
    int idx;
    float neg[3];
    char tmp[16];
    float *np;
    char *tp;

    fx = actor->fx;
    idx = func_021EB0(0xD, fx->owner->kind);
    if (fx->ready == 0) {
        func_18C938(fx->aD0, D_001BF3A0, fx->a10, fx->a20, actor->pos, fx->a40, D_001D6A20[idx], 0.06f, D_001BF39C, 3.0f, fx->a88);
        func_18C938(fx->a12C, D_001BF3A0, fx->a10, fx->a20, actor->pos, fx->a40, D_001D6A28[idx], 0.2f, D_001BF39C, 3.0f, fx->a98);
        fx->ready = 1;
    } else if ((D_001A2F64 & 3) == 0) {
        np = neg;
        tp = tmp;
        np[0] = -D_001CE2C8[0];
        np[1] = -D_001CE2C8[1];
        np[2] = -D_001CE2C8[2];
        func_18CB68(fx->aD0, tp);
        func_18AE98(D_001BF394, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_001D6A20[idx]);
        func_18CB68(fx->a12C, tp);
        func_18AE98(D_001BF394, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_001D6A28[idx]);
    }
}
