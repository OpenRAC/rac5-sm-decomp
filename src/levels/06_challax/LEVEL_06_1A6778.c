/* LEVEL_06:0x1A6778 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_001F7D58;
extern int func_121820(int a, int b);

int func_1A6778(void)
{
    if (D_001F7D58.handle <= 0)
        D_001F7D58.handle = func_121820(0x3D, 8);
    return 1;
}
