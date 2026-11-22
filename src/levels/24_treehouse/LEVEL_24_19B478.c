/* LEVEL_24:0x19B478 -- placement copy of LEVEL_01_1C71C8.c: initialises the object: clears its record, installs the owner's update handler, configures the global block with the two sample tables and sets up the sub-record. */
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

extern Block *D_001C5264[1];
extern Sample D_001F6488;
extern Sample D_001E8BD8;
extern int D_001D9E74;
extern void *memset(void *, int, unsigned int);
extern void func_124D78(void *p);
extern void func_19C1C0(void);
extern void func_064408(Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);
extern void func_0903D0(void *p, int a, int b);

int func_19B478(Obj *o)
{
    Rec *r = o->rec;

    memset(r, 0, 0x100);
    r->w00 = 0;
    func_124D78(r->pad04);
    o->owner->handler = func_19C1C0;
    o->b46 = 0;
    r->bF8 = 0;
    r->wF4 = 0;
    func_064408(D_001C5264[0], &D_001F6488, &D_001E8BD8, 0, 1.2f, 0.3f, 10.0f);
    o->flags64 |= 0x40000;
    r->bFE = 0;
    r->bFF = 0;
    func_0903D0(r->subE0, D_001D9E74, 1);
    return 1;
}
