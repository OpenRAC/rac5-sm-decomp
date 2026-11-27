/* LEVEL_04:0x14C2B0 -- placement copy of LEVEL_01_13FEA0.c: clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_06C820(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_07AEE0(char *dst, int a, int b, int c, char *table);
extern Block *D_0020DAA4;
extern Sample D_00235418;
extern Sample D_00235428;
extern char D_00228F08[];

int func_14C2B0(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_06C820(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_0020DAA4, &D_00235418, &D_00235428, 0);
    func_07AEE0(state + 0x18, 1, 0x44, 0x45, D_00228F08);
    return 1;
}
