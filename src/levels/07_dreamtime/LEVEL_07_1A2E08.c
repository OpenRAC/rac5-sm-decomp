/* LEVEL_07:0x1A2E08 -- placement copy of LEVEL_03_18DF40.c: builds two packed register words from the shared setup block and runs the writer on both records, keeping each result in its record. */
typedef struct Setup {
    char pad0[0x34];
    unsigned int w34;
    char pad38[0x78 - 0x38];
    unsigned int w78;
} Setup;

typedef struct Rec {
    char pad0[0x40];
    unsigned int w40;
} Rec;

extern Setup D_002AD6C0;
extern Rec D_0021D130;
extern Rec D_0021D188;
extern int D_0021D180;
extern int D_0021D1D8;
extern int func_1EEFE8(int a0, unsigned int a1);

void func_1A2E08(void)
{
    unsigned int b;
    unsigned int a;

    b = (D_002AD6C0.w78 << 16) | 0x880060C1u;
    a = (D_002AD6C0.w34 << 16) | 0x90003061u;
    D_0021D130.w40 = a;
    D_0021D188.w40 = a;
    D_0021D180 = func_1EEFE8((int)&D_0021D130, b);
    D_0021D1D8 = func_1EEFE8((int)&D_0021D188, b);
}
