/* LEVEL_16:0x11E7A0 -- sets up the full-screen text window (unit scale, 480x272, black shadow, blue-grey ink), builds the label for string 0x6D9 and refreshes the shared text block. */
extern char D_001B9238[];
extern char D_001BA8E0[];
extern void func_09AC30(float scale_x, float scale_y, float scale_z, short left, short top, short right, short bottom, unsigned int arg8, unsigned int arg9, unsigned int arg10, unsigned int arg11);
extern int func_10F330(int id);
extern void func_11DC90(int label, char *data, int a, int b);
extern void func_0A94B0(char *data);

void func_11E7A0(void)
{
    func_09AC30(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000u, 0xFF000000u, 0xFF4D422Eu, 0xFF4D422Eu);
    func_11DC90(func_10F330(0x6D9), D_001B9238, 1, 0);
    func_0A94B0(D_001BA8E0);
}
