/* LEVEL_05:0x151220 -- placement copy of LEVEL_01_156298.c: initialises the object: clears and fills its record, copies the tune settings, installs the owner's update handler, configures the global block with the two sample tables and marks the object ready. */
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

extern Block *D_001E3964;
extern Sample D_0020C610;
extern Sample D_0020C620;
extern char D_001FE488[];
extern void *memset(void *, int, unsigned int);
extern int func_0747F0(char *dst, int a, int b, int c, char *src);
extern void func_0227D0(int *dst, int a, int b, int c);
extern void func_1518A0(void);
extern void func_068A20(Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);

int func_151220(Obj *o)
{
    char *r = o->rec;
    Block *g;

    memset(r, 0, 0x44);
    func_0747F0(r + 0x1C, 1, 0x44, 0x45, D_001FE488);
    g = D_001E3964;
    func_0227D0(&o->w74, 4, g->wF8, -1);
    o->owner->handler = func_1518A0;
    func_068A20(g, &D_0020C610, &D_0020C620, 0, 1.2f, 0.3f, 10.0f);
    o->flags64 |= 0x40000;
    return 1;
}
