/* LEVEL_20:0x0F3FA8 -- placement copy of LEVEL_16_121EA8.c: sets up a full-screen black-to-blue rectangle, opens the 0x6F2 resource and hands it to the loader, then runs the follow-up. */
extern char D_0011B938[];

extern void func_085328(float scale_x, float scale_y, float scale_z,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11);
extern int func_0E2118(int id);
extern void func_0EFD90(int handle, char *name, int a, int b);
extern void func_0F3F80(void);

void func_0F3FA8(void)
{
    int handle;

    func_085328(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E);
    handle = func_0E2118(0x6F2);
    func_0EFD90(handle, D_0011B938, 1, 0);
    func_0F3F80();
}
