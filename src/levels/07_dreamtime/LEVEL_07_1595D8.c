/* LEVEL_07:0x1595D8 -- placement copy of LEVEL_01_156298.c: initialises the object: clears and fills its record, copies the tune settings, installs the owner's update handler, configures the global block with the two sample tables and marks the object ready. */
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

extern Block *D_002088E4;
extern Sample D_002328C0;
extern Sample D_002328D0;
extern char D_00224288[];
extern void *memset(void *, int, unsigned int);
extern int func_07A3C8(char *dst, int a, int b, int c, char *src);
extern void func_023C98(int *dst, int a, int b, int c);
extern void func_159C58(void);
extern void func_06BAC0(Block *blk, Sample *first, Sample *second, int mode, float fx, float fy, float fz);

int func_1595D8(Obj *o)
{
    char *r = o->rec;
    Block *g;

    memset(r, 0, 0x44);
    func_07A3C8(r + 0x1C, 1, 0x44, 0x45, D_00224288);
    g = D_002088E4;
    func_023C98(&o->w74, 4, g->wF8, -1);
    o->owner->handler = func_159C58;
    func_06BAC0(g, &D_002328C0, &D_002328D0, 0, 1.2f, 0.3f, 10.0f);
    o->flags64 |= 0x40000;
    return 1;
}
