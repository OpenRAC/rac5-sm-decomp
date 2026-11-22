/* LEVEL_20:0x0F54B8 -- placement copy of LEVEL_16_1233B8.c: sets up the menu screen: full-screen quad colours, loads the 0xA0B asset, clears the page state, builds the text lists, starts the three sound cues (the first only when the mode global is 1), resets both pages and queues the final fade. */
extern void func_085328(float scale_x, float scale_y,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11, float scale_z);
extern int func_0E2118(int id);
extern void func_0EFD90(int asset, void *table, int a, int b);
extern void func_0F3C90(void *a);
extern void func_0939E0(void *list);
extern int func_08BB18(void *list);
extern void func_081A48(unsigned int value);
extern void func_0881E8(int id, int a, int b, int c, float f0, float f1, float f2, unsigned int color, float f3);
extern void func_0F5148(int page, int a);
extern void func_07EC28(int a, int b, int c, int d, unsigned int color, int e);
extern char D_0011B938[];
extern char D_0011EEF8[];
extern char D_0011EFB8[];
extern int D_0011EC24;

void func_0F54B8(void)
{
    func_085328(1.0f, 1.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E, 0.0f);
    func_0EFD90(func_0E2118(0xA0B), D_0011B938, 1, 0);
    func_0F3C90(0);
    func_0939E0(D_0011EEF8);
    func_081A48(func_08BB18(D_0011EFB8));
    if (D_0011EC24 == 1)
        func_0881E8(0x4D8, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_0881E8(0x4D9, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_0881E8(0x4D7, 0, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_0F5148(0, 0);
    func_0F5148(1, 0);
    func_07EC28(0, 0, 1, 1, 0x00FF0000, 0);
}
