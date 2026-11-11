/* LEVEL_19:0x11F108 -- placement copy of LEVEL_16_11E7A0.c: sets up the full-screen text window (unit scale, 480x272, black shadow, blue-grey ink), builds the label for string 0x6D9 and refreshes the shared text block. */
extern char D_001BA3B0[];
extern char D_001BBA58[];
extern void func_09A4C0(float scale_x, float scale_y, float scale_z, short left, short top, short right, short bottom, unsigned int arg8, unsigned int arg9, unsigned int arg10, unsigned int arg11);
extern int func_10F9D0(int id);
extern void func_11E5F8(int label, char *data, int a, int b);
extern void func_0A8D88(char *data);

void func_11F108(void)
{
    func_09A4C0(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_11E5F8(func_10F9D0(0x6D9), D_001BA3B0, 1, 0);
    func_0A8D88(D_001BBA58);
}
