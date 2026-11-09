/* LEVEL_06:0x0C43A8 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001E2EAC;
extern short D_00221FC0;
extern char D_001EFBED;
extern int D_001EFBE0;
extern int D_001EFBE4;
extern char D_001EFBDC;
extern int D_001F0138;
extern char D_001EFBEC;
extern void func_0C3DC8(int a);
extern int func_1297E8(void);
extern void func_0C43A0(void);

void func_0C43A8(void)
{
    int state = *(int *)(D_001E2EAC + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_00221FC0 != 0xD)
            break;
    case 0x16:
        func_0C3DC8(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0C3DC8(0x18);
        break;
    }
    D_001EFBDC = 0;
    D_001EFBED = 0;
    D_001EFBE0 = 0;
    D_001EFBE4 = 0;
    D_001F0138 = func_1297E8();
    D_001EFBEC = 1;
    func_0C43A0();
}
