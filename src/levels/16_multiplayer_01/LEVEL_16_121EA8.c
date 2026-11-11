/* LEVEL_16:0x121EA8 -- sets up a full-screen black-to-blue rectangle, opens the 0x6F2 resource and hands it to the loader, then runs the follow-up. */
extern char D_001B9298[];

extern void func_09AC30(float scale_x, float scale_y, float scale_z,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11);
extern int func_10F330(int id);
extern void func_11DC90(int handle, char *name, int a, int b);
extern void func_121E80(void);

void func_121EA8(void)
{
    int handle;

    func_09AC30(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E);
    handle = func_10F330(0x6F2);
    func_11DC90(handle, D_001B9298, 1, 0);
    func_121E80();
}
