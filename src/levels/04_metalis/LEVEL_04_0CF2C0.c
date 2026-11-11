/* LEVEL_04:0x0CF2C0 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_0020D12C;
extern short D_0024FA50;
extern char D_0021A1AD;
extern int D_0021A1A0;
extern int D_0021A1A4;
extern char D_0021A19C;
extern int D_0021A6F8;
extern char D_0021A1AC;
extern void func_0CECE0(int a);
extern int func_13F598(void);
extern void func_0CF2B8(void);

void func_0CF2C0(void)
{
    int state = *(int *)(D_0020D12C + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_0024FA50 != 0xD)
            break;
    case 0x16:
        func_0CECE0(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0CECE0(0x18);
        break;
    }
    D_0021A19C = 0;
    D_0021A1AD = 0;
    D_0021A1A0 = 0;
    D_0021A1A4 = 0;
    D_0021A6F8 = func_13F598();
    D_0021A1AC = 1;
    func_0CF2B8();
}
