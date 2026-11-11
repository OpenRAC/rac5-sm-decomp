/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_002222E4;
extern u32 D_002222E8;
extern u32 D_002222EC;
extern u32 D_002222F0;
extern u32 D_002B2C40[];

void func_1E98D0(void)
{
    D_002222E4 = (D_002222E4 & 0xF800FFFFu) | (D_002B2C40[0x150 / 4] << 16);
    D_002222E8 = (D_002222E8 & 0xF800FFFFu) | (D_002B2C40[0x15C / 4] << 16);
    D_002222EC = (D_002222EC & 0xF800FFFFu) | (D_002B2C40[0x154 / 4] << 16);
    D_002222F0 = (D_002222F0 & 0xF800FFFFu) | (D_002B2C40[0x158 / 4] << 16);
}
