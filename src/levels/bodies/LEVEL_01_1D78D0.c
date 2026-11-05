/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_0020941C;
extern u32 D_00209420;
extern u32 D_00209424;
extern u32 D_00209428;
extern u32 D_00297DC0[];

void func_1D78D0(void)
{
    D_0020941C = (D_0020941C & 0xF800FFFFu) | (D_00297DC0[0x150 / 4] << 16);
    D_00209420 = (D_00209420 & 0xF800FFFFu) | (D_00297DC0[0x15C / 4] << 16);
    D_00209424 = (D_00209424 & 0xF800FFFFu) | (D_00297DC0[0x154 / 4] << 16);
    D_00209428 = (D_00209428 & 0xF800FFFFu) | (D_00297DC0[0x158 / 4] << 16);
}
