/* LEVEL_02:0x176AB0 -- placement copy of LEVEL_01_1620A0.c: initialises the object's record (clears two words, sets up the sub-block from the fixed table, flags it, clears the tail word and draws two random values), starts the object's animation and queues the effect with fixed parameters; returns 1. */
typedef struct Rec {
    int w0;
    int w4;
    float r8;
    float rC;
    char sub[0x28];
    int w38;
    int w3C;
} Rec;

typedef struct Obj {
    char pad_00[0x58];
    Rec *rec;
    char pad_5C[0x14];
    int w70;
    char anim_74[1];
} Obj;

extern char D_00224508[];
extern char D_00236C00[];
extern char D_00236BF0[];
extern char *D_002095A4[1];

extern int func_07EAC0(char *sub, int a, int b, int c, char *table);
extern void func_040D18(char *p);
extern float func_0013D8(void);
extern void func_024198(void *p, int a, int b, int c);
extern void func_06FE50(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_176AB0(Obj *o)
{
    Rec *r;
    char *blk;

    r = o->rec;
    blk = D_002095A4[0];
    r->w0 = 0;
    r->w4 = 0;
    r->w3C = 1;
    func_07EAC0(r->sub, 0, 0x44, 0x45, D_00224508);
    o->w70 = 0;
    func_040D18(blk);
    r->w38 = 0;
    r->rC = func_0013D8();
    r->r8 = func_0013D8();
    func_024198(o->anim_74, 9, *(int *)(blk + 0xF8), -1);
    func_06FE50(blk, D_00236C00, D_00236BF0, 0, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    return 1;
}
