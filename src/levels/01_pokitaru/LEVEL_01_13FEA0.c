/* LEVEL_01:0x13FEA0 -- clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_06ADB8(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_0781D8(char *dst, int a, int b, int c, char *table);
extern Block *D_001F45E4;
extern Sample D_0021BA18;
extern Sample D_0021BA28;
extern char D_0020F588[];

int func_13FEA0(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_06ADB8(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_001F45E4, &D_0021BA18, &D_0021BA28, 0);
    func_0781D8(state + 0x18, 1, 0x44, 0x45, D_0020F588);
    return 1;
}
