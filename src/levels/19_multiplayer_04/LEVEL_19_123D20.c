/* LEVEL_19:0x123D20 -- placement copy of LEVEL_16_1233B8.c: sets up the menu screen: full-screen quad colours, loads the 0xA0B asset, clears the page state, builds the text lists, starts the three sound cues (the first only when the mode global is 1), resets both pages and queues the final fade. */
extern void func_09A4C0(float scale_x, float scale_y,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11, float scale_z);
extern int func_10F9D0(int id);
extern void func_11E5F8(int asset, void *table, int a, int b);
extern void func_1224F8(void *a);
extern void func_0A8D88(void *list);
extern int func_0A0CB0(void *list);
extern void func_096BE0(unsigned int value);
extern void func_09D380(int id, int a, int b, int c, float f0, float f1, float f2, unsigned int color, float f3);
extern void func_1239B0(int page, int a);
extern void func_093DC0(int a, int b, int c, int d, unsigned int color, int e);
extern char D_001BA410[];
extern char D_001BD9D0[];
extern char D_001BDA90[];
extern int D_001BD6FC;

void func_123D20(void)
{
    func_09A4C0(1.0f, 1.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E, 0.0f);
    func_11E5F8(func_10F9D0(0xA0B), D_001BA410, 1, 0);
    func_1224F8(0);
    func_0A8D88(D_001BD9D0);
    func_096BE0(func_0A0CB0(D_001BDA90));
    if (D_001BD6FC == 1)
        func_09D380(0x4D8, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_09D380(0x4D9, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_09D380(0x4D7, 0, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_1239B0(0, 0);
    func_1239B0(1, 0);
    func_093DC0(0, 0, 1, 1, 0x00FF0000, 0);
}
