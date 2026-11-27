/* LEVEL_07:0x142ED8 -- placement copy of LEVEL_01_13FEA0.c: clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_06BAC0(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_07A3C8(char *dst, int a, int b, int c, char *table);
extern Block *D_002088E4;
extern Sample D_00230788;
extern Sample D_00230798;
extern char D_00224288[];

int func_142ED8(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_06BAC0(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_002088E4, &D_00230788, &D_00230798, 0);
    func_07A3C8(state + 0x18, 1, 0x44, 0x45, D_00224288);
    return 1;
}
