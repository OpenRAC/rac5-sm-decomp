/* LEVEL_19:0x175318 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_001BF548;
extern int func_1086A8(int a, int b);

int func_175318(void)
{
    if (D_001BF548.handle <= 0)
        D_001BF548.handle = func_1086A8(0x3D, 8);
    return 1;
}
