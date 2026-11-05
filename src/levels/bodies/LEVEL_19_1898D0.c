/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_001BF89C;
extern u32 D_001BF8A0;
extern u32 D_001BF8A4;
extern u32 D_001BF8A8;
extern u32 D_0024E3C0[];

void func_1898D0(void)
{
    D_001BF89C = (D_001BF89C & 0xF800FFFFu) | (D_0024E3C0[0x150 / 4] << 16);
    D_001BF8A0 = (D_001BF8A0 & 0xF800FFFFu) | (D_0024E3C0[0x15C / 4] << 16);
    D_001BF8A4 = (D_001BF8A4 & 0xF800FFFFu) | (D_0024E3C0[0x154 / 4] << 16);
    D_001BF8A8 = (D_001BF8A8 & 0xF800FFFFu) | (D_0024E3C0[0x158 / 4] << 16);
}
