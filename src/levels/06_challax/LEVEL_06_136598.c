/* LEVEL_06:0x136598 -- placement copy of LEVEL_01_13FEA0.c: clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_067B78(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_071660(char *dst, int a, int b, int c, char *table);
extern Block *D_001E34E4;
extern Sample D_0020A808;
extern Sample D_0020A818;
extern char D_001FE408[];

int func_136598(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_067B78(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_001E34E4, &D_0020A808, &D_0020A818, 0);
    func_071660(state + 0x18, 1, 0x44, 0x45, D_001FE408);
    return 1;
}
