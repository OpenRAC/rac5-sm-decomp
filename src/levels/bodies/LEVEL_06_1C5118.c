/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_001F82D4;
extern u32 D_001F82D8;
extern u32 D_001F82DC;
extern u32 D_001F82E0;
extern u32 D_00284B40[];

void func_1C5118(void)
{
    D_001F82D4 = (D_001F82D4 & 0xF800FFFFu) | (D_00284B40[0x150 / 4] << 16);
    D_001F82D8 = (D_001F82D8 & 0xF800FFFFu) | (D_00284B40[0x15C / 4] << 16);
    D_001F82DC = (D_001F82DC & 0xF800FFFFu) | (D_00284B40[0x154 / 4] << 16);
    D_001F82E0 = (D_001F82E0 & 0xF800FFFFu) | (D_00284B40[0x158 / 4] << 16);
}
