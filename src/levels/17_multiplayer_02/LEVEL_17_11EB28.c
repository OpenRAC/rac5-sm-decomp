/* LEVEL_17:0x11EB28 -- placement copy of LEVEL_16_11F100.c: sets up the screen: full-screen quad colours, loads the 0x9FD asset into the table, clears and sets the two display flags around the text list. */
extern void func_09A128(float scale_x, float scale_y, float scale_z,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11);
extern int func_10E8A8(int id);
extern void func_11D6B8(int asset, void *table, int a, int b);
extern void func_096868(unsigned char value);
extern void func_0A89F0(void *list);
extern char D_001AC830[];
extern char D_001AF0C8[];

void func_11EB28(void)
{
    func_09A128(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E);
    func_11D6B8(func_10E8A8(0x9FD), D_001AC830, 1, 0);
    func_096868(0);
    func_0A89F0(D_001AF0C8);
    func_096868(1);
}
