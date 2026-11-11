/* LEVEL_20:0x0A33A0 -- placement copy of LEVEL_01_0C9AA8.c: picks a state-dependent call, clears globals and arms a flag. */
extern char *D_00104194;
extern short D_0013BB10;
extern char D_0011144D;
extern int D_00111440;
extern int D_00111444;
extern char D_0011143C;
extern int D_001117C0;
extern char D_0011144C;
extern void func_0A2E40(int a);
extern int func_0E2BB8(void);
extern void func_0A3398(void);

void func_0A33A0(void)
{
    int state = *(int *)(D_00104194 + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_0013BB10 != 0xD)
            break;
    case 0x16:
        func_0A2E40(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0A2E40(0x18);
        break;
    }
    D_0011143C = 0;
    D_0011144D = 0;
    D_00111440 = 0;
    D_00111444 = 0;
    D_001117C0 = func_0E2BB8();
    D_0011144C = 1;
    func_0A3398();
}
