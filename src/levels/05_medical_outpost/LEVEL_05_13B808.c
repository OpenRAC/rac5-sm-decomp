/* LEVEL_05:0x13B808 -- placement copy of LEVEL_01_13FEA0.c: clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_068A20(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_0747F0(char *dst, int a, int b, int c, char *table);
extern Block *D_001E3964;
extern Sample D_0020A868;
extern Sample D_0020A878;
extern char D_001FE488[];

int func_13B808(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_068A20(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_001E3964, &D_0020A868, &D_0020A878, 0);
    func_0747F0(state + 0x18, 1, 0x44, 0x45, D_001FE488);
    return 1;
}
