/* LEVEL_03:0x1C7860 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_00221D68;
extern int func_129430(int a, int b);

int func_1C7860(void)
{
    if (D_00221D68.handle <= 0)
        D_00221D68.handle = func_129430(0x3D, 8);
    return 1;
}
