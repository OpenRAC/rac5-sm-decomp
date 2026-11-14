/* LEVEL_18:0x17D118 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_001BF8D0;
extern int func_106CB8(int a, int b);

int func_17D118(void)
{
    if (D_001BF8D0.handle <= 0)
        D_001BF8D0.handle = func_106CB8(0x3D, 8);
    return 1;
}
