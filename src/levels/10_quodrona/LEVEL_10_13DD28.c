/* LEVEL_10:0x13DD28 -- placement copy of LEVEL_01_13FEA0.c: clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_069BE8(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_078878(char *dst, int a, int b, int c, char *table);
extern Block *D_001FD5E4;
extern Sample D_002249E8;
extern Sample D_002249F8;
extern char D_00218508[];

int func_13DD28(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_069BE8(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_001FD5E4, &D_002249E8, &D_002249F8, 0);
    func_078878(state + 0x18, 1, 0x44, 0x45, D_00218508);
    return 1;
}
