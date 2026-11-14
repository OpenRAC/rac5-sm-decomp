/* LEVEL_01:0x1B2770 -- creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_00208DA8;
extern int func_12B1C8(int a, int b);

int func_1B2770(void)
{
    if (D_00208DA8.handle <= 0)
        D_00208DA8.handle = func_12B1C8(0x3D, 8);
    return 1;
}
