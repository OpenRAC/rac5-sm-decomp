/* LEVEL_01:0x156298 -- initialises the object: clears and fills its record, copies the tune settings, installs the owner's update handler, configures the global block with the two sample tables and marks the object ready. */
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

extern Block *D_001F45E4;
extern Sample D_0021DA20;
extern Sample D_0021DA30;
extern char D_0020F588[];
extern void *memset(void *, int, unsigned int);
extern int func_0781D8(char *dst, int a, int b, int c, char *src);
extern void func_023838(int *dst, int a, int b, int c);
extern void func_156918(void);
extern void func_06ADB8(Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);

int func_156298(Obj *o)
{
    char *r = o->rec;
    Block *g;

    memset(r, 0, 0x44);
    func_0781D8(r + 0x1C, 1, 0x44, 0x45, D_0020F588);
    g = D_001F45E4;
    func_023838(&o->w74, 4, g->wF8, -1);
    o->owner->handler = func_156918;
    func_06ADB8(g, &D_0021DA20, &D_0021DA30, 0, 1.2f, 0.3f, 10.0f);
    o->flags64 |= 0x40000;
    return 1;
}
