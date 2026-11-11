/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_0021E36C;
extern u32 D_0021E370;
extern u32 D_0021E374;
extern u32 D_0021E378;
extern u32 D_002AF2C0[];

void func_1EC568(void)
{
    D_0021E36C = (D_0021E36C & 0xF800FFFFu) | (D_002AF2C0[0x150 / 4] << 16);
    D_0021E370 = (D_0021E370 & 0xF800FFFFu) | (D_002AF2C0[0x15C / 4] << 16);
    D_0021E374 = (D_0021E374 & 0xF800FFFFu) | (D_002AF2C0[0x154 / 4] << 16);
    D_0021E378 = (D_0021E378 & 0xF800FFFFu) | (D_002AF2C0[0x158 / 4] << 16);
}
