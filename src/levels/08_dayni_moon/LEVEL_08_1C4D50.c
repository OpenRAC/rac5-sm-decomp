/* LEVEL_08:0x1C4D50 -- placement copy of LEVEL_01_194BA0.c: draws the two trail effects of an actor: first call builds both emitters, later calls refresh their transforms every fourth frame. */
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

extern int D_00251EB8;
extern int D_00251EB4;
extern int D_00251EAC;
extern int D_0023CB38;
extern int D_00271B98[];
extern int D_00271BA0[];
extern float D_00261B08[3];

extern int func_025720(int a, int b);
extern void func_217118(void * p0, int c, void * p1, void * p2, void * p3, void * p4, int d, float a, int e, float b, void * p5);
extern void func_217348(void *src, void *dst);
extern void func_215678(int g, void * p0, void * p1, float a, float b, float c, float d, float e, float f, int h);

void func_1C4D50(Actor *actor)
{
    Fx *fx;
    int idx;
    float neg[3];
    char tmp[16];
    float *np;
    char *tp;

    fx = actor->fx;
    idx = func_025720(0xD, fx->owner->kind);
    if (fx->ready == 0) {
        func_217118(fx->aD0, D_00251EB8, fx->a10, fx->a20, actor->pos, fx->a40, D_00271B98[idx], 0.06f, D_00251EB4, 3.0f, fx->a88);
        func_217118(fx->a12C, D_00251EB8, fx->a10, fx->a20, actor->pos, fx->a40, D_00271BA0[idx], 0.2f, D_00251EB4, 3.0f, fx->a98);
        fx->ready = 1;
    } else if ((D_0023CB38 & 3) == 0) {
        np = neg;
        tp = tmp;
        np[0] = -D_00261B08[0];
        np[1] = -D_00261B08[1];
        np[2] = -D_00261B08[2];
        func_217348(fx->aD0, tp);
        func_215678(D_00251EAC, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_00271B98[idx]);
        func_217348(fx->a12C, tp);
        func_215678(D_00251EAC, tp, np, 0.0f, 0.3f, 0.3f, 5.0000996589660645f, 5.0000996589660645f, 0.0f, D_00271BA0[idx]);
    }
}
