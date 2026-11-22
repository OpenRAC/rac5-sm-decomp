/* LEVEL_17:0x122DE0 -- placement copy of LEVEL_16_1233B8.c: sets up the menu screen: full-screen quad colours, loads the 0xA0B asset, clears the page state, builds the text lists, starts the three sound cues (the first only when the mode global is 1), resets both pages and queues the final fade. */
extern void func_09A128(float scale_x, float scale_y,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11, float scale_z);
extern int func_10E8A8(int id);
extern void func_11D6B8(int asset, void *table, int a, int b);
extern void func_1215B8(void *a);
extern void func_0A89F0(void *list);
extern int func_0A0918(void *list);
extern void func_096848(unsigned int value);
extern void func_09CFE8(int id, int a, int b, int c, float f0, float f1, float f2, unsigned int color, float f3);
extern void func_122A70(int page, int a);
extern void func_093A28(int a, int b, int c, int d, unsigned int color, int e);
extern char D_001AC890[];
extern char D_001AFE50[];
extern char D_001AFF10[];
extern int D_001AFB7C;

void func_122DE0(void)
{
    func_09A128(1.0f, 1.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E, 0.0f);
    func_11D6B8(func_10E8A8(0xA0B), D_001AC890, 1, 0);
    func_1215B8(0);
    func_0A89F0(D_001AFE50);
    func_096848(func_0A0918(D_001AFF10));
    if (D_001AFB7C == 1)
        func_09CFE8(0x4D8, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_09CFE8(0x4D9, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_09CFE8(0x4D7, 0, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_122A70(0, 0);
    func_122A70(1, 0);
    func_093A28(0, 0, 1, 1, 0x00FF0000, 0);
}
