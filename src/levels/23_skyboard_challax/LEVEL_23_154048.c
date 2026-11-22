/* LEVEL_23:0x154048 -- placement copy of LEVEL_01_156298.c: initialises the object: clears and fills its record, copies the tune settings, installs the owner's update handler, configures the global block with the two sample tables and marks the object ready. */
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

extern Block *D_001C79E4;
extern Sample D_001F16B8;
extern Sample D_001F16C8;
extern char D_001E2708[];
extern void *memset(void *, int, unsigned int);
extern int func_06F4B0(char *dst, int a, int b, int c, char *src);
extern void func_0219E0(int *dst, int a, int b, int c);
extern void func_1546C8(void);
extern void func_064570(Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);

int func_154048(Obj *o)
{
    char *r = o->rec;
    Block *g;

    memset(r, 0, 0x44);
    func_06F4B0(r + 0x1C, 1, 0x44, 0x45, D_001E2708);
    g = D_001C79E4;
    func_0219E0(&o->w74, 4, g->wF8, -1);
    o->owner->handler = func_1546C8;
    func_064570(g, &D_001F16B8, &D_001F16C8, 0, 1.2f, 0.3f, 10.0f);
    o->flags64 |= 0x40000;
    return 1;
}
