/* LEVEL_08:0x167CD8 -- placement copy of LEVEL_01_156298.c: initialises the object: clears and fills its record, copies the tune settings, installs the owner's update handler, configures the global block with the two sample tables and marks the object ready. */
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

extern Block *D_0023D4A4;
extern Sample D_002678B0;
extern Sample D_002678C0;
extern char D_00259208[];
extern void *memset(void *, int, unsigned int);
extern int func_07FA60(char *dst, int a, int b, int c, char *src);
extern void func_023F50(int *dst, int a, int b, int c);
extern void func_168358(void);
extern void func_070600(Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);

int func_167CD8(Obj *o)
{
    char *r = o->rec;
    Block *g;

    memset(r, 0, 0x44);
    func_07FA60(r + 0x1C, 1, 0x44, 0x45, D_00259208);
    g = D_0023D4A4;
    func_023F50(&o->w74, 4, g->wF8, -1);
    o->owner->handler = func_168358;
    func_070600(g, &D_002678B0, &D_002678C0, 0, 1.2f, 0.3f, 10.0f);
    o->flags64 |= 0x40000;
    return 1;
}
