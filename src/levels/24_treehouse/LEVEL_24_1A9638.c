/* Packs four source values into the upper half of four global words. */
typedef unsigned int u32;

extern u32 D_001DA284;
extern u32 D_001DA288;
extern u32 D_001DA28C;
extern u32 D_001DA290;
extern u32 D_00263C80[];

void func_1A9638(void)
{
    D_001DA284 = (D_001DA284 & 0xF800FFFFu) | (D_00263C80[0x150 / 4] << 16);
    D_001DA288 = (D_001DA288 & 0xF800FFFFu) | (D_00263C80[0x15C / 4] << 16);
    D_001DA28C = (D_001DA28C & 0xF800FFFFu) | (D_00263C80[0x154 / 4] << 16);
    D_001DA290 = (D_001DA290 & 0xF800FFFFu) | (D_00263C80[0x158 / 4] << 16);
}
