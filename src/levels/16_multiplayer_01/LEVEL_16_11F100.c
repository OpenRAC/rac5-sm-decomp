/* LEVEL_16:0x11F100 -- sets up the screen: full-screen quad colours, loads the 0x9FD asset into the table, clears and sets the two display flags around the text list. */
extern void func_09AC30(float scale_x, float scale_y, float scale_z,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11);
extern int func_10F330(int id);
extern void func_11DC90(int asset, void *table, int a, int b);
extern void func_097370(unsigned char value);
extern void func_0A94B0(void *list);
extern char D_001B9238[];
extern char D_001BBAD0[];

void func_11F100(void)
{
    func_09AC30(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E);
    func_11DC90(func_10F330(0x9FD), D_001B9238, 1, 0);
    func_097370(0);
    func_0A94B0(D_001BBAD0);
    func_097370(1);
}
