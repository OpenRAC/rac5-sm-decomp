/* LEVEL_24:0x0C3370 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001C4C2C;
extern short D_00201140;
extern char D_001D196D;
extern int D_001D1960;
extern int D_001D1964;
extern char D_001D195C;
extern int D_001D1EB8;
extern char D_001D196C;
extern void func_0C2D90(int a);
extern int func_128C18(void);
extern void func_0C3368(void);

void func_0C3370(void)
{
    int state = *(int *)(D_001C4C2C + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_00201140 != 0xD)
            break;
    case 0x16:
        func_0C2D90(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0C2D90(0x18);
        break;
    }
    D_001D195C = 0;
    D_001D196D = 0;
    D_001D1960 = 0;
    D_001D1964 = 0;
    D_001D1EB8 = func_128C18();
    D_001D196C = 1;
    func_0C3368();
}
