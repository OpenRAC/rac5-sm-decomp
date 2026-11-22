/* LEVEL_08:0x173FD8 -- placement copy of LEVEL_01_1620A0.c: initialises the object's record (clears two words, sets up the sub-block from the fixed table, flags it, clears the tail word and draws two random values), starts the object's animation and queues the effect with fixed parameters; returns 1. */
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

extern char D_00259208[];
extern char D_0026A110[];
extern char D_0026A100[];
extern char *D_0023D4A4[1];

extern int func_07FA60(char *sub, int a, int b, int c, char *table);
extern void func_040F08(char *p);
extern float func_0013D8(void);
extern void func_023F50(void *p, int a, int b, int c);
extern void func_070600(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_173FD8(Obj *o)
{
    Rec *r;
    char *blk;

    r = o->rec;
    blk = D_0023D4A4[0];
    r->w0 = 0;
    r->w4 = 0;
    r->w3C = 1;
    func_07FA60(r->sub, 0, 0x44, 0x45, D_00259208);
    o->w70 = 0;
    func_040F08(blk);
    r->w38 = 0;
    r->rC = func_0013D8();
    r->r8 = func_0013D8();
    func_023F50(o->anim_74, 9, *(int *)(blk + 0xF8), -1);
    func_070600(blk, D_0026A110, D_0026A100, 0, 0.6000000238418579f, 0.4000000059604645f, 20.0f);
    return 1;
}
