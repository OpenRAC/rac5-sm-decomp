/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_0021E0F4;
extern u32 D_0021E0F8;
extern u32 D_0021E0FC;
extern u32 D_0021E100;
extern u32 D_002AD6C0[];

void func_1E6088(void)
{
    D_0021E0F4 = (D_0021E0F4 & 0xF800FFFFu) | (D_002AD6C0[0x150 / 4] << 16);
    D_0021E0F8 = (D_0021E0F8 & 0xF800FFFFu) | (D_002AD6C0[0x15C / 4] << 16);
    D_0021E0FC = (D_0021E0FC & 0xF800FFFFu) | (D_002AD6C0[0x154 / 4] << 16);
    D_0021E100 = (D_0021E100 & 0xF800FFFFu) | (D_002AD6C0[0x158 / 4] << 16);
}
