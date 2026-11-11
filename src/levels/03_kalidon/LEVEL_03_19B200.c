/* LEVEL_03:0x19B200 -- placement copy of LEVEL_01_194BA0.c: draws the two trail effects of an actor: first call builds both emitters, later calls refresh their transforms every fourth frame. */
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

extern int D_002216B8;
extern int D_002216B4;
extern int D_002216AC;
extern int D_0020C638;
extern int D_0023F000[];
extern int D_0023F008[];
extern float D_00230D88[3];

extern int func_024D70(int a, int b);
extern void func_1E7DC0(void * p0, int c, void * p1, void * p2, void * p3, void * p4, int d, float a, int e, float b, void * p5);
extern void func_1E7FF0(void *src, void *dst);
extern void func_1E6320(int g, void * p0, void * p1, float a, float b, float c, float d, float e, float f, int h);

void func_19B200(Actor *actor)
{
    Fx *fx;
    int idx;
    float neg[3];
    char tmp[16];
    float *np;
    char *tp;

    fx = actor->fx;
    idx = func_024D70(0xD, fx->owner->kind);
    if (fx->ready == 0) {
        func_1E7DC0(fx->aD0, D_002216B8, fx->a10, fx->a20, actor->pos, fx->a40, D_0023F000[idx], 0.06f, D_002216B4, 3.0f, fx->a88);
        func_1E7DC0(fx->a12C, D_002216B8, fx->a10, fx->a20, actor->pos, fx->a40, D_0023F008[idx], 0.2f, D_002216B4, 3.0f, fx->a98);
        fx->ready = 1;
    } else if ((D_0020C638 & 3) == 0) {
        np = neg;
        tp = tmp;
        np[0] = -D_00230D88[0];
        np[1] = -D_00230D88[1];
        np[2] = -D_00230D88[2];
        func_1E7FF0(fx->aD0, tp);
        func_1E6320(D_002216AC, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_0023F000[idx]);
        func_1E7FF0(fx->a12C, tp);
        func_1E6320(D_002216AC, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_0023F008[idx]);
    }
}
