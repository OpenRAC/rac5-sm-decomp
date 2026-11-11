/* LEVEL_23:0x0C0B58 -- placement copy of LEVEL_22_0B8268.c: records the mode, starts the shared sequence with it, resets the progress words and picks the follow-up cue depending on the active slot. */
extern int D_001D464C;
extern int D_001D4654;
extern char D_001D4658;
extern void func_0CDD80(int a, int b, int c, int d);
extern void func_0CDDB8(int a);
extern int func_019378(int value);
extern int func_0B2AC8(void);
extern int func_0B3820(int a0);
extern int func_0B3198(int a, int b);

void func_0C0B58(int mode, int arg)
{
    D_001D464C = mode;
    func_0CDD80(1, mode, arg, 0);
    D_001D4654 = 1;
    D_001D4658 = 0;
    func_0CDDB8(10);
    if (func_019378(6) != 0) {
        if ((func_0B2AC8() ^ 0x25) != 0) {
            func_0B3820(0x25);
        }
    } else {
        func_0B3198(0x25, 0);
    }
}
