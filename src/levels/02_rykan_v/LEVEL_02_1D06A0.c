/* LEVEL_02:0x1D06A0 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_0021DDF8;
extern int func_131578(int a, int b);

int func_1D06A0(void)
{
    if (D_0021DDF8.handle <= 0)
        D_0021DDF8.handle = func_131578(0x3D, 8);
    return 1;
}
