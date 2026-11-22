/* LEVEL_06:0x14BF28 -- placement copy of LEVEL_01_156298.c: initialises the object: clears and fills its record, copies the tune settings, installs the owner's update handler, configures the global block with the two sample tables and marks the object ready. */
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

typedef struct Obj {
    char pad0[0x48];
    Owner *owner;
    char pad4C[0xC];
    char *rec;
    char pad5C[8];
    unsigned int flags64;
    char pad68[0xC];
    int w74;
} Obj;

extern Block *D_001E34E4;
extern Sample D_0020C5B0;
extern Sample D_0020C5C0;
extern char D_001FE408[];
extern void *memset(void *, int, unsigned int);
extern int func_071660(char *dst, int a, int b, int c, char *src);
extern void func_021DD8(int *dst, int a, int b, int c);
extern void func_14C5A8(void);
extern void func_067B78(Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);

int func_14BF28(Obj *o)
{
    char *r = o->rec;
    Block *g;

    memset(r, 0, 0x44);
    func_071660(r + 0x1C, 1, 0x44, 0x45, D_001FE408);
    g = D_001E34E4;
    func_021DD8(&o->w74, 4, g->wF8, -1);
    o->owner->handler = func_14C5A8;
    func_067B78(g, &D_0020C5B0, &D_0020C5C0, 0, 1.2f, 0.3f, 10.0f);
    o->flags64 |= 0x40000;
    return 1;
}
