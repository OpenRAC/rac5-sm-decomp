/* LEVEL_15:0x0AA0F0 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_00148C2C;
extern short D_0017D3C0;
extern char D_0015596D;
extern int D_00155960;
extern int D_00155964;
extern char D_0015595C;
extern int D_00155EB8;
extern char D_0015596C;
extern void func_0A9B10(int a);
extern int func_0F1FE0(void);
extern void func_0AA0E8(void);

void func_0AA0F0(void)
{
    int state = *(int *)(D_00148C2C + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_0017D3C0 != 0xD)
            break;
    case 0x16:
        func_0A9B10(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0A9B10(0x18);
        break;
    }
    D_0015595C = 0;
    D_0015596D = 0;
    D_00155960 = 0;
    D_00155964 = 0;
    D_00155EB8 = func_0F1FE0();
    D_0015596C = 1;
    func_0AA0E8();
}
