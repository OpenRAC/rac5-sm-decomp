/* LEVEL_05:0x149948 -- placement copy of LEVEL_01_14DF58.c: initialises the object's record (clears the fields, sub-block from the fixed table, speed constant), installs the block callback, starts the animation, packs two fields of the global source into the shared word pair and queues the effect with fixed parameters; returns 1. */
typedef struct Rec {
    int w0;
    float f4;
    int w8;
    int wC;
    int w10;
    unsigned char b14;
    char pad_15[3];
    char sub[0x28];
    int w40;
    int w44;
    char blk48[0x18];
    int w60;
} Rec;

typedef struct Block {
    char pad_00[0xDC];
    void (*callback)(void);
} Block;

typedef struct Obj {
    char pad_00[0x48];
    Block *block;
    char pad_4C[0xC];
    Rec *rec;
    char pad_5C[0x18];
    char anim_74[1];
} Obj;

typedef struct {
    char pad_00[0x38];
    unsigned int w38;
    char pad_3C[0x74];
    unsigned int wB0;
} Src;

extern char D_001FE488[];
extern char D_0020BEF0[];
extern char D_001F6340[];
extern unsigned int D_001F6350;
extern unsigned int D_001F6354;
extern Src D_00283C80;
extern char *D_001E3964[1];

extern int func_0747F0(char *sub, int a, int b, int c, char *table);
extern void func_0227D0(void *p, int a, int b, int c);
extern void func_14B8F0(char *p);
extern void func_14B5C8(void);
extern void func_068A20(void *blk, char *first, char *second, int mode, float fx, float fy, float fz);

int func_149948(Obj *o)
{
    Rec *r;

    r = o->rec;
    r->w0 = 0;
    r->w8 = 0;
    r->wC = 0;
    r->w40 = 0;
    r->w60 = 0;
    r->f4 = 0.16666999459266663f;
    func_0747F0(r->sub, 0, 0x44, 0x45, D_001FE488);
    r->w10 = 0;
    r->b14 = 0;
    r->w44 = 0;
    o->block->callback = func_14B5C8;
    func_0227D0(o->anim_74, 3, *(int *)(D_001E3964[0] + 0xF8), -1);
    func_14B8F0(r->blk48);
    D_001F6350 = (D_001F6350 & 0xF800FFFF) | (D_00283C80.w38 << 16);
    D_001F6354 = (D_001F6354 & 0xF800FFFF) | (D_00283C80.wB0 << 16);
    func_068A20(D_001E3964[0], D_0020BEF0, D_001F6340, 1, 0.6000000238418579f, 0.4000000059604645f, 10.0f);
    return 1;
}
