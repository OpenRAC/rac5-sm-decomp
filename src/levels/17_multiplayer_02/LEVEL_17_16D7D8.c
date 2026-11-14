/* LEVEL_17:0x16D7D8 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_001B1880;
extern int func_107580(int a, int b);

int func_16D7D8(void)
{
    if (D_001B1880.handle <= 0)
        D_001B1880.handle = func_107580(0x3D, 8);
    return 1;
}
