/* LEVEL_16:0x1233B8 -- sets up the menu screen: full-screen quad colours, loads the 0xA0B asset, clears the page state, builds the text lists, starts the three sound cues (the first only when the mode global is 1), resets both pages and queues the final fade. */
extern void func_09AC30(float scale_x, float scale_y,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11, float scale_z);
extern int func_10F330(int id);
extern void func_11DC90(int asset, void *table, int a, int b);
extern void func_121B90(void *a);
extern void func_0A94B0(void *list);
extern int func_0A1420(void *list);
extern void func_097350(unsigned int value);
extern void func_09DAF0(int id, int a, int b, int c, float f0, float f1, float f2, unsigned int color, float f3);
extern void func_123048(int page, int a);
extern void func_094530(int a, int b, int c, int d, unsigned int color, int e);
extern char D_001B9298[];
extern char D_001BC858[];
extern char D_001BC918[];
extern int D_001BC584;

void func_1233B8(void)
{
    func_09AC30(1.0f, 1.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E, 0.0f);
    func_11DC90(func_10F330(0xA0B), D_001B9298, 1, 0);
    func_121B90(0);
    func_0A94B0(D_001BC858);
    func_097350(func_0A1420(D_001BC918));
    if (D_001BC584 == 1)
        func_09DAF0(0x4D8, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_09DAF0(0x4D9, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_09DAF0(0x4D7, 0, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_123048(0, 0);
    func_123048(1, 0);
    func_094530(0, 0, 1, 1, 0x00FF0000, 0);
}
