/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_00252F0C;
extern u32 D_00252F10;
extern u32 D_00252F14;
extern u32 D_00252F18;
extern u32 D_002E7040[];

void func_218C28(void)
{
    D_00252F0C = (D_00252F0C & 0xF800FFFFu) | (D_002E7040[0x150 / 4] << 16);
    D_00252F10 = (D_00252F10 & 0xF800FFFFu) | (D_002E7040[0x15C / 4] << 16);
    D_00252F14 = (D_00252F14 & 0xF800FFFFu) | (D_002E7040[0x154 / 4] << 16);
    D_00252F18 = (D_00252F18 & 0xF800FFFFu) | (D_002E7040[0x158 / 4] << 16);
}
