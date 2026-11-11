/* LEVEL_05:0x0C8050 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001E332C;
extern short D_00220F40;
extern char D_001F006D;
extern int D_001F0060;
extern int D_001F0064;
extern char D_001F005C;
extern int D_001F05B8;
extern char D_001F006C;
extern void func_0C7A70(int a);
extern int func_12EA90(void);
extern void func_0C8048(void);

void func_0C8050(void)
{
    int state = *(int *)(D_001E332C + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_00220F40 != 0xD)
            break;
    case 0x16:
        func_0C7A70(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0C7A70(0x18);
        break;
    }
    D_001F005C = 0;
    D_001F006D = 0;
    D_001F0060 = 0;
    D_001F0064 = 0;
    D_001F05B8 = func_12EA90();
    D_001F006C = 1;
    func_0C8048();
}
