/* LEVEL_08:0x1E6508 -- placement copy of LEVEL_01_1B2770.c: creates the shared object when its handle is not positive yet; always returns 1. */
typedef struct Shared {
    char pad_00[0xC];
    int handle;
} Shared;

extern Shared D_00252520;
extern int func_13C700(int a, int b);

int func_1E6508(void)
{
    if (D_00252520.handle <= 0)
        D_00252520.handle = func_13C700(0x3D, 8);
    return 1;
}
