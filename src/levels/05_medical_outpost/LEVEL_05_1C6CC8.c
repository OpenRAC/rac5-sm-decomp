/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_001F8394;
extern u32 D_001F8398;
extern u32 D_001F839C;
extern u32 D_001F83A0;
extern u32 D_00283C80[];

void func_1C6CC8(void)
{
    D_001F8394 = (D_001F8394 & 0xF800FFFFu) | (D_00283C80[0x150 / 4] << 16);
    D_001F8398 = (D_001F8398 & 0xF800FFFFu) | (D_00283C80[0x15C / 4] << 16);
    D_001F839C = (D_001F839C & 0xF800FFFFu) | (D_00283C80[0x154 / 4] << 16);
    D_001F83A0 = (D_001F83A0 & 0xF800FFFFu) | (D_00283C80[0x158 / 4] << 16);
}
