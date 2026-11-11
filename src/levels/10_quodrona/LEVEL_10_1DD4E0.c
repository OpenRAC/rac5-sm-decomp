/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_00212394;
extern u32 D_00212398;
extern u32 D_0021239C;
extern u32 D_002123A0;
extern u32 D_002A11C0[];

void func_1DD4E0(void)
{
    D_00212394 = (D_00212394 & 0xF800FFFFu) | (D_002A11C0[0x150 / 4] << 16);
    D_00212398 = (D_00212398 & 0xF800FFFFu) | (D_002A11C0[0x15C / 4] << 16);
    D_0021239C = (D_0021239C & 0xF800FFFFu) | (D_002A11C0[0x154 / 4] << 16);
    D_002123A0 = (D_002123A0 & 0xF800FFFFu) | (D_002A11C0[0x158 / 4] << 16);
}
