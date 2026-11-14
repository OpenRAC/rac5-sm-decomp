/* LEVEL_19:0x11FA68 -- placement copy of LEVEL_16_11F100.c: sets up the screen: full-screen quad colours, loads the 0x9FD asset into the table, clears and sets the two display flags around the text list. */
extern void func_09A4C0(float scale_x, float scale_y, float scale_z,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11);
extern int func_10F9D0(int id);
extern void func_11E5F8(int asset, void *table, int a, int b);
extern void func_096C00(unsigned char value);
extern void func_0A8D88(void *list);
extern char D_001BA3B0[];
extern char D_001BCC48[];

void func_11FA68(void)
{
    func_09A4C0(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E);
    func_11E5F8(func_10F9D0(0x9FD), D_001BA3B0, 1, 0);
    func_096C00(0);
    func_0A8D88(D_001BCC48);
    func_096C00(1);
}
