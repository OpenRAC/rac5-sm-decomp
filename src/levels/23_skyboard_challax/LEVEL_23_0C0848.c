/* LEVEL_23:0x0C0848 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001C73AC;
extern short D_002026C0;
extern char D_001D40ED;
extern int D_001D40E0;
extern int D_001D40E4;
extern char D_001D40DC;
extern int D_001D4638;
extern char D_001D40EC;
extern void func_0C0268(int a);
extern int func_124890(void);
extern void func_0C0840(void);

void func_0C0848(void)
{
    int state = *(int *)(D_001C73AC + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_002026C0 != 0xD)
            break;
    case 0x16:
        func_0C0268(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0C0268(0x18);
        break;
    }
    D_001D40DC = 0;
    D_001D40ED = 0;
    D_001D40E0 = 0;
    D_001D40E4 = 0;
    D_001D4638 = func_124890();
    D_001D40EC = 1;
    func_0C0840();
}
