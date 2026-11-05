/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_00222D04;
extern u32 D_00222D08;
extern u32 D_00222D0C;
extern u32 D_00222D10;
extern u32 D_002B25C0[];

void func_1EE8B8(void)
{
    D_00222D04 = (D_00222D04 & 0xF800FFFFu) | (D_002B25C0[0x150 / 4] << 16);
    D_00222D08 = (D_00222D08 & 0xF800FFFFu) | (D_002B25C0[0x15C / 4] << 16);
    D_00222D0C = (D_00222D0C & 0xF800FFFFu) | (D_002B25C0[0x154 / 4] << 16);
    D_00222D10 = (D_00222D10 & 0xF800FFFFu) | (D_002B25C0[0x158 / 4] << 16);
}
