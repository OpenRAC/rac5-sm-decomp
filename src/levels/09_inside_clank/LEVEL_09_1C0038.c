/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_001F309C;
extern u32 D_001F30A0;
extern u32 D_001F30A4;
extern u32 D_001F30A8;
extern u32 D_0027F540[];

void func_1C0038(void)
{
    D_001F309C = (D_001F309C & 0xF800FFFFu) | (D_0027F540[0x150 / 4] << 16);
    D_001F30A0 = (D_001F30A0 & 0xF800FFFFu) | (D_0027F540[0x15C / 4] << 16);
    D_001F30A4 = (D_001F30A4 & 0xF800FFFFu) | (D_0027F540[0x154 / 4] << 16);
    D_001F30A8 = (D_001F30A8 & 0xF800FFFFu) | (D_0027F540[0x158 / 4] << 16);
}
