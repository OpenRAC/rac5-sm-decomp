/* LEVEL_01:0x1C71C8 -- initialises the object: clears its record, installs the owner's update handler, configures the global block with the two sample tables and sets up the sub-record. */
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

extern Block *D_001F45E4[1];
extern Sample D_0022A1F8;
extern Sample D_00217E58;
extern int D_00208FB4;
extern void *memset(void *, int, unsigned int);
extern void func_12F278(void *p);
extern void func_1C7F10(void);
extern void func_06ADB8(Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);
extern void func_0974A8(void *p, int a, int b);

int func_1C71C8(Obj *o)
{
    Rec *r = o->rec;

    memset(r, 0, 0x100);
    r->w00 = 0;
    func_12F278(r->pad04);
    o->owner->handler = func_1C7F10;
    o->b46 = 0;
    r->bF8 = 0;
    r->wF4 = 0;
    func_06ADB8(D_001F45E4[0], &D_0022A1F8, &D_00217E58, 0, 1.2f, 0.3f, 10.0f);
    o->flags64 |= 0x40000;
    r->bFE = 0;
    r->bFF = 0;
    func_0974A8(r->subE0, D_00208FB4, 1);
    return 1;
}
