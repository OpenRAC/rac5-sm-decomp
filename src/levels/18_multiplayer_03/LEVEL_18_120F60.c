/* LEVEL_18:0x120F60 -- placement copy of LEVEL_16_121EA8.c: sets up a full-screen black-to-blue rectangle, opens the 0x6F2 resource and hands it to the loader, then runs the follow-up. */
extern char D_001BA718[];

extern void func_099C40(float scale_x, float scale_y, float scale_z,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11);
extern int func_10DFE0(int id);
extern void func_11CD48(int handle, char *name, int a, int b);
extern void func_120F38(void);

void func_120F60(void)
{
    int handle;

    func_099C40(1.0f, 1.0f, 0.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E);
    handle = func_10DFE0(0x6F2);
    func_11CD48(handle, D_001BA718, 1, 0);
    func_120F38();
}
