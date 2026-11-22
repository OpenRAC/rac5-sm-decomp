/* LEVEL_16:0x13F938 -- placement copy of LEVEL_01_1620A0.c: initialises the object's record (clears two words, sets up the sub-block from the fixed table, flags it, clears the tail word and draws two random values), starts the object's animation and queues the effect with fixed parameters; returns 1. */
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

extern char D_001C42B8[];
extern char D_001D3418[];
extern char D_001D3408[];
extern char *D_001A2114[1];

extern int func_069158(char *sub, int a, int b, int c, char *table);
extern void func_037D78(char *p);
extern float func_000FD0(void);
extern void func_0211E8(void *p, int a, int b, int c);
extern void func_05D910(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_13F938(Obj *o)
{
    Rec *r;
    char *blk;

    r = o->rec;
    blk = D_001A2114[0];
    r->w0 = 0;
    r->w4 = 0;
    r->w3C = 1;
    func_069158(r->sub, 0, 0x44, 0x45, D_001C42B8);
    o->w70 = 0;
    func_037D78(blk);
    r->w38 = 0;
    r->rC = func_000FD0();
    r->r8 = func_000FD0();
    func_0211E8(o->anim_74, 9, *(int *)(blk + 0xF8), -1);
    func_05D910(blk, D_001D3418, D_001D3408, 0, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    return 1;
}
