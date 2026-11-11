/* LEVEL_07:0x174AE8 -- merges a 16-bit field into a packed global word, stores the helper result and looks up one fixed key. */
extern int D_0021BD64;
extern int D_002AD784;
extern int D_0021BD30;
extern int D_0021BD68;
extern int func_06F2A0(int arg);
extern int func_12D068(unsigned int value);

void func_174AE8(void)
{
    D_0021BD64 = (D_0021BD64 & 0xF800FFFF) | (D_002AD784 << 16);
    D_0021BD30 = func_06F2A0(D_0021BD64);
    D_0021BD68 = func_12D068(0x191c0c76u);
}
