/* LEVEL_01:0x1620A0 -- initialises the object's record (clears two words, sets up the sub-block from the fixed table, flags it, clears the tail word and draws two random values), starts the object's animation and queues the effect with fixed parameters; returns 1. */
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

extern char D_0020F588[];
extern char D_0021FBA8[];
extern char D_0021FB98[];
extern char *D_001F45E4[1];

extern int func_0781D8(char *sub, int a, int b, int c, char *table);
extern void func_03BE20(char *p);
extern float func_0013D8(void);
extern void func_023838(void *p, int a, int b, int c);
extern void func_06ADB8(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_1620A0(Obj *o)
{
    Rec *r;
    char *blk;

    r = o->rec;
    blk = D_001F45E4[0];
    r->w0 = 0;
    r->w4 = 0;
    r->w3C = 1;
    func_0781D8(r->sub, 0, 0x44, 0x45, D_0020F588);
    o->w70 = 0;
    func_03BE20(blk);
    r->w38 = 0;
    r->rC = func_0013D8();
    r->r8 = func_0013D8();
    func_023838(o->anim_74, 9, *(int *)(blk + 0xF8), -1);
    func_06ADB8(blk, D_0021FBA8, D_0021FB98, 0, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    return 1;
}
