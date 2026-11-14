/* LEVEL_07:0x1C7BD0 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_0021DA48;
extern int func_12E1C8(int a, int b);

int func_1C7BD0(void)
{
    if (D_0021DA48.handle <= 0)
        D_0021DA48.handle = func_12E1C8(0x3D, 8);
    return 1;
}
