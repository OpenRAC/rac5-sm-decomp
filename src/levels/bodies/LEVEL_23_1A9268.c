/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_001DC69C;
extern u32 D_001DC6A0;
extern u32 D_001DC6A4;
extern u32 D_001DC6A8;
extern u32 D_00269200[];

void func_1A9268(void)
{
    D_001DC69C = (D_001DC69C & 0xF800FFFFu) | (D_00269200[0x150 / 4] << 16);
    D_001DC6A0 = (D_001DC6A0 & 0xF800FFFFu) | (D_00269200[0x15C / 4] << 16);
    D_001DC6A4 = (D_001DC6A4 & 0xF800FFFFu) | (D_00269200[0x154 / 4] << 16);
    D_001DC6A8 = (D_001DC6A8 & 0xF800FFFFu) | (D_00269200[0x158 / 4] << 16);
}
