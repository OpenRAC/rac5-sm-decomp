/* LEVEL_03:0x18FB90 -- registers two packed keys from the settings block with the lookup helpers, stores the results in globals and sets the 0x34 field of the control word. */
/* LEVEL_03:0x18FB90 -- registers two packed keys from the settings block with the lookup helpers, stores the results in globals and sets the 0x34 field of the control word. */
typedef struct Blk {
    char pad000[0x14C];
    unsigned int w14C;
    char pad150[0x1E0 - 0x150];
    unsigned int w1E0;
} Blk;

extern Blk D_002B2C40;
extern unsigned int D_0022136C;
extern unsigned int D_00221370;
extern unsigned int D_00221338;

extern int func_0FB398(unsigned int value);
extern int func_06CDA8(unsigned int value);
void func_18FB90(void)
{
    Blk *s0 = &D_002B2C40;
    int r1;
    int r2;

    r1 = func_0FB398((s0->w14C << 16) | 0x580014C5u);
    D_0022136C = r1;
    D_00221370 = (D_00221370 & 0xF800FFFFu) | 0x340000u;
    r2 = func_06CDA8((s0->w1E0 << 16) | 0x800070C9u);
    D_00221338 = r2;
}
