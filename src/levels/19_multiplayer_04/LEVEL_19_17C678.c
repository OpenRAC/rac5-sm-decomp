/* LEVEL_19:0x17C678 -- placement copy of LEVEL_01_1C71C8.c: initialises the object: clears its record, installs the owner's update handler, configures the global block with the two sample tables and sets up the sub-record. */
typedef struct Sample {
    float f[2];
    int n;
} Sample;

typedef struct Block {
    char pad0[0xF8];
    int wF8;
} Block;

typedef struct Owner {
    char pad0[0xDC];
    void (*handler)(void);
} Owner;

typedef struct Rec {
    int w00;
    char pad04[0xDC];
    char subE0[0x14];
    int wF4;
    unsigned char bF8;
    char padF9[5];
    unsigned char bFE;
    unsigned char bFF;
} Rec;

typedef struct Obj {
    char pad0[0x46];
    unsigned char b46;
    char pad47[1];
    Owner *owner;
    char pad4C[0xC];
    Rec *rec;
    char pad5C[8];
    unsigned int flags64;
} Obj;

extern Block *D_001A3294[1];
extern Sample D_001D9400;
extern Sample D_001CDF18;
extern int D_001BF604;
extern void *memset(void *, int, unsigned int);
extern void func_10C758(void *p);
extern void func_17D390(void);
extern void func_05CD70(Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);
extern void func_0884C8(void *p, int a, int b);

int func_17C678(Obj *o)
{
    Rec *r = o->rec;

    memset(r, 0, 0x100);
    r->w00 = 0;
    func_10C758(r->pad04);
    o->owner->handler = func_17D390;
    o->b46 = 0;
    r->bF8 = 0;
    r->wF4 = 0;
    func_05CD70(D_001A3294[0], &D_001D9400, &D_001CDF18, 0, 1.2f, 0.3f, 10.0f);
    o->flags64 |= 0x40000;
    r->bFE = 0;
    r->bFF = 0;
    func_0884C8(r->subE0, D_001BF604, 1);
    return 1;
}
