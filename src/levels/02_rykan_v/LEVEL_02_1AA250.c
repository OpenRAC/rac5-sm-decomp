/* LEVEL_02:0x1AA250 -- placement copy of LEVEL_01_194BA0.c: draws the two trail effects of an actor: first call builds both emitters, later calls refresh their transforms every fourth frame. */
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

extern int D_0021D7B0;
extern int D_0021D7AC;
extern int D_0021D7A4;
extern int D_00208C38;
extern int D_0023C0C0[];
extern int D_0023C0C8[];
extern float D_0022CE08[3];

extern int func_025800(int a, int b);
extern void func_1EAA58(void * p0, int c, void * p1, void * p2, void * p3, void * p4, int d, float a, int e, float b, void * p5);
extern void func_1EAC88(void *src, void *dst);
extern void func_1E8FB8(int g, void * p0, void * p1, float a, float b, float c, float d, float e, float f, int h);

void func_1AA250(Actor *actor)
{
    Fx *fx;
    int idx;
    float neg[3];
    char tmp[16];
    float *np;
    char *tp;

    fx = actor->fx;
    idx = func_025800(0xD, fx->owner->kind);
    if (fx->ready == 0) {
        func_1EAA58(fx->aD0, D_0021D7B0, fx->a10, fx->a20, actor->pos, fx->a40, D_0023C0C0[idx], 0.06f, D_0021D7AC, 3.0f, fx->a88);
        func_1EAA58(fx->a12C, D_0021D7B0, fx->a10, fx->a20, actor->pos, fx->a40, D_0023C0C8[idx], 0.2f, D_0021D7AC, 3.0f, fx->a98);
        fx->ready = 1;
    } else if ((D_00208C38 & 3) == 0) {
        np = neg;
        tp = tmp;
        np[0] = -D_0022CE08[0];
        np[1] = -D_0022CE08[1];
        np[2] = -D_0022CE08[2];
        func_1EAC88(fx->aD0, tp);
        func_1E8FB8(D_0021D7A4, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_0023C0C0[idx]);
        func_1EAC88(fx->a12C, tp);
        func_1E8FB8(D_0021D7A4, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_0023C0C8[idx]);
    }
}
