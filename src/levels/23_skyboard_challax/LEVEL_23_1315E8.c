/* LEVEL_23:0x1315E8 -- placement copy of LEVEL_01_13FEA0.c: clears the object's 0x48-byte state, loads the shared block from two fixed samples and registers the state's entry; returns 1. */
typedef struct Block Block;
typedef struct Sample Sample;

extern void *memset(void *p, int c, unsigned n);
extern void func_064570(float fx, float fy, float fz, Block *blk, Sample *first, Sample *second, int mode);
extern int func_06F4B0(char *dst, int a, int b, int c, char *table);
extern Block *D_001C79E4;
extern Sample D_001EEA18;
extern Sample D_001EEA28;
extern char D_001E2708[];

int func_1315E8(char *o)
{
    char *state = *(char **)(o + 0x58);

    memset(state, 0, 0x48);
    func_064570(1.2000000476837158f, 0.30000001192092896f, 10.0f, D_001C79E4, &D_001EEA18, &D_001EEA28, 0);
    func_06F4B0(state + 0x18, 1, 0x44, 0x45, D_001E2708);
    return 1;
}
