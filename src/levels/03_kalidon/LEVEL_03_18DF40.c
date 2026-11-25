/* LEVEL_03:0x18DF40 -- builds two packed register words from the shared setup block and runs the writer on both records, keeping each result in its record. */
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

extern Setup D_002B2C40;
extern Rec D_00221218;
extern Rec D_00221270;
extern int D_00221268;
extern int D_002212C0;
extern int func_1F5600(int a0, unsigned int a1);

void func_18DF40(void)
{
    unsigned int b;
    unsigned int a;

    b = (D_002B2C40.w78 << 16) | 0x880060C1u;
    a = (D_002B2C40.w34 << 16) | 0x90003061u;
    D_00221218.w40 = a;
    D_00221270.w40 = a;
    D_00221268 = func_1F5600((int)&D_00221218, b);
    D_002212C0 = func_1F5600((int)&D_00221270, b);
}
