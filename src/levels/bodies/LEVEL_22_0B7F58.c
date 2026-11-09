/* LEVEL_22:0x0B7F58 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_0015332C;
extern short D_00186E40;
extern char D_0016006D;
extern int D_00160060;
extern int D_00160064;
extern char D_0016005C;
extern int D_001605B8;
extern char D_0016006C;
extern void func_0B7978(int a);
extern int func_10A5E8(void);
extern void func_0B7F50(void);

void func_0B7F58(void)
{
    int state = *(int *)(D_0015332C + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_00186E40 != 0xD)
            break;
    case 0x16:
        func_0B7978(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0B7978(0x18);
        break;
    }
    D_0016005C = 0;
    D_0016006D = 0;
    D_00160060 = 0;
    D_00160064 = 0;
    D_001605B8 = func_10A5E8();
    D_0016006C = 1;
    func_0B7F50();
}
