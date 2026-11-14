/* LEVEL_04:0x1BF770 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_002224A8;
extern int func_137648(int a, int b);

int func_1BF770(void)
{
    if (D_002224A8.handle <= 0)
        D_002224A8.handle = func_137648(0x3D, 8);
    return 1;
}
