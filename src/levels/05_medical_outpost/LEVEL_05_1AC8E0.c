/* LEVEL_05:0x1AC8E0 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_001F7E38;
extern int func_126B40(int a, int b);

int func_1AC8E0(void)
{
    if (D_001F7E38.handle <= 0)
        D_001F7E38.handle = func_126B40(0x3D, 8);
    return 1;
}
