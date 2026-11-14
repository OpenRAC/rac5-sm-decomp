/* LEVEL_09:0x1A5538 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_001F2AB0;
extern int func_124160(int a, int b);

int func_1A5538(void)
{
    if (D_001F2AB0.handle <= 0)
        D_001F2AB0.handle = func_124160(0x3D, 8);
    return 1;
}
