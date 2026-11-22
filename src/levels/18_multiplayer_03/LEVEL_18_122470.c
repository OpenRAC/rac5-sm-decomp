/* LEVEL_18:0x122470 -- placement copy of LEVEL_16_1233B8.c: sets up the menu screen: full-screen quad colours, loads the 0xA0B asset, clears the page state, builds the text lists, starts the three sound cues (the first only when the mode global is 1), resets both pages and queues the final fade. */
extern void func_099C40(float scale_x, float scale_y,
                        short left, short top, short right, short bottom,
                        unsigned int arg8, unsigned int arg9,
                        unsigned int arg10, unsigned int arg11, float scale_z);
extern int func_10DFE0(int id);
extern void func_11CD48(int asset, void *table, int a, int b);
extern void func_120C48(void *a);
extern void func_0A8488(void *list);
extern int func_0A0430(void *list);
extern void func_096360(unsigned int value);
extern void func_09CB00(int id, int a, int b, int c, float f0, float f1, float f2, unsigned int color, float f3);
extern void func_122100(int page, int a);
extern void func_093540(int a, int b, int c, int d, unsigned int color, int e);
extern char D_001BA718[];
extern char D_001BDCD8[];
extern char D_001BDD98[];
extern int D_001BDA04;

void func_122470(void)
{
    func_099C40(1.0f, 1.0f, 0, 0, 0x1E0, 0x110, 0xFF000000, 0xFF000000, 0xFF4D422E, 0xFF4D422E, 0.0f);
    func_11CD48(func_10DFE0(0xA0B), D_001BA718, 1, 0);
    func_120C48(0);
    func_0A8488(D_001BDCD8);
    func_096360(func_0A0430(D_001BDD98));
    if (D_001BDA04 == 1)
        func_09CB00(0x4D8, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_09CB00(0x4D9, 4, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_09CB00(0x4D7, 0, 0, 0, 1.0f, 1.0f, 0.0f, 0xFFFFFFFF, 0.0f);
    func_122100(0, 0);
    func_122100(1, 0);
    func_093540(0, 0, 1, 1, 0x00FF0000, 0);
}
