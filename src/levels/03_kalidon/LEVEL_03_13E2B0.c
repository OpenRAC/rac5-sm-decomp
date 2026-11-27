/* LEVEL_03:0x13E2B0 -- placement copy of LEVEL_01_13FEA0.c: clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_069740(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_077FC8(char *dst, int a, int b, int c, char *table);
extern Block *D_0020CC64;
extern Sample D_00234988;
extern Sample D_00234998;
extern char D_00228488[];

int func_13E2B0(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_069740(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_0020CC64, &D_00234988, &D_00234998, 0);
    func_077FC8(state + 0x18, 1, 0x44, 0x45, D_00228488);
    return 1;
}
