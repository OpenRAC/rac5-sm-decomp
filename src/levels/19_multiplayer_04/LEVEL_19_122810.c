/* LEVEL_19:0x122810 -- placement copy of LEVEL_16_121EA8.c: sets up a full-screen black-to-blue rectangle, opens the 0x6F2 resource and hands it to the loader, then runs the follow-up. */
extern char D_001BA410[];

extern void func_09A4C0(float scale_x, float scale_y, float scale_z,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11);
extern int func_10F9D0(int id);
extern void func_11E5F8(int handle, char *name, int a, int b);
extern void func_1227E8(void);

void func_122810(void)
{
    int handle;

    func_09A4C0(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E);
    handle = func_10F9D0(0x6F2);
    func_11E5F8(handle, D_001BA410, 1, 0);
    func_1227E8();
}
