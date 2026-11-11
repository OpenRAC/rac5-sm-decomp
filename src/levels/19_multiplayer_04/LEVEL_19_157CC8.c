/* LEVEL_19:0x157CC8 -- placement copy of LEVEL_01_194BA0.c: draws the two trail effects of an actor: first call builds both emitters, later calls refresh their transforms every fourth frame. */
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

extern int D_001BEFA8;
extern int D_001BEFA4;
extern int D_001BEF9C;
extern int D_001A2C64;
extern int D_001D5C98[];
extern int D_001D5CA0[];
extern float D_001CDF48[3];

extern int func_0224A8(int a, int b);
extern void func_188230(void * p0, int c, void * p1, void * p2, void * p3, void * p4, int d, float a, int e, float b, void * p5);
extern void func_188460(void *src, void *dst);
extern void func_186790(int g, void * p0, void * p1, float a, float b, float c, float d, float e, float f, int h);

void func_157CC8(Actor *actor)
{
    Fx *fx;
    int idx;
    float neg[3];
    char tmp[16];
    float *np;
    char *tp;

    fx = actor->fx;
    idx = func_0224A8(0xD, fx->owner->kind);
    if (fx->ready == 0) {
        func_188230(fx->aD0, D_001BEFA8, fx->a10, fx->a20, actor->pos, fx->a40, D_001D5C98[idx], 0.06f, D_001BEFA4, 3.0f, fx->a88);
        func_188230(fx->a12C, D_001BEFA8, fx->a10, fx->a20, actor->pos, fx->a40, D_001D5CA0[idx], 0.2f, D_001BEFA4, 3.0f, fx->a98);
        fx->ready = 1;
    } else if ((D_001A2C64 & 3) == 0) {
        np = neg;
        tp = tmp;
        np[0] = -D_001CDF48[0];
        np[1] = -D_001CDF48[1];
        np[2] = -D_001CDF48[2];
        func_188460(fx->aD0, tp);
        func_186790(D_001BEF9C, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_001D5C98[idx]);
        func_188460(fx->a12C, tp);
        func_186790(D_001BEF9C, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_001D5CA0[idx]);
    }
}
