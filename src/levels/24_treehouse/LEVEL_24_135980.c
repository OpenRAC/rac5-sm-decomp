/* LEVEL_24:0x135980 -- placement copy of LEVEL_01_13FEA0.c: clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_064408(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_072940(char *dst, int a, int b, int c, char *table);
extern Block *D_001C5264;
extern Sample D_001EC6A8;
extern Sample D_001EC6B8;
extern char D_001E0308[];

int func_135980(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_064408(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_001C5264, &D_001EC6A8, &D_001EC6B8, 0);
    func_072940(state + 0x18, 1, 0x44, 0x45, D_001E0308);
    return 1;
}
