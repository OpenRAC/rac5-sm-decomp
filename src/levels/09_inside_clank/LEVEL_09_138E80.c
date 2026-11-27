/* LEVEL_09:0x138E80 -- placement copy of LEVEL_01_13FEA0.c: clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_0679B8(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_074CE0(char *dst, int a, int b, int c, char *table);
extern Block *D_001DE3E4;
extern Sample D_002055A8;
extern Sample D_002055B8;
extern char D_001F9188[];

int func_138E80(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_0679B8(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_001DE3E4, &D_002055A8, &D_002055B8, 0);
    func_074CE0(state + 0x18, 1, 0x44, 0x45, D_001F9188);
    return 1;
}
