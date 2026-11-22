/* LEVEL_24:0x14DBC8 -- placement copy of LEVEL_01_1620A0.c: initialises the object's record (clears two words, sets up the sub-block from the fixed table, flags it, clears the tail word and draws two random values), starts the object's animation and queues the effect with fixed parameters; returns 1. */
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

extern char D_001E0308[];
extern char D_001EF140[];
extern char D_001EF130[];
extern char *D_001C5264[1];

extern int func_072940(char *sub, int a, int b, int c, char *table);
extern void func_034EA8(char *p);
extern float func_0011E0(void);
extern void func_0215B0(void *p, int a, int b, int c);
extern void func_064408(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_14DBC8(Obj *o)
{
    Rec *r;
    char *blk;

    r = o->rec;
    blk = D_001C5264[0];
    r->w0 = 0;
    r->w4 = 0;
    r->w3C = 1;
    func_072940(r->sub, 0, 0x44, 0x45, D_001E0308);
    o->w70 = 0;
    func_034EA8(blk);
    r->w38 = 0;
    r->rC = func_0011E0();
    r->r8 = func_0011E0();
    func_0215B0(o->anim_74, 9, *(int *)(blk + 0xF8), -1);
    func_064408(blk, D_001EF140, D_001EF130, 0, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    return 1;
}
