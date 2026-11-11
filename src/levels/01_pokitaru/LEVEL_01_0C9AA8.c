/* LEVEL_01:0x0C9AA8 -- picks a state-dependent call, clears globals and arms a flag. */
extern char *D_001F3FAC;
extern short D_00235240;
extern char D_00200CED;
extern int D_00200CE0;
extern int D_00200CE4;
extern char D_00200CDC;
extern int D_00201238;
extern char D_00200CEC;
extern void func_0C94C8(int a);
extern int func_133118(void);
extern void func_0C9AA0(void);

void func_0C9AA8(void)
{
    int state = *(int *)(D_001F3FAC + 0x1C6C);
    switch (state) {
    case 0x17:
        if (D_00235240 != 0xD)
            break;
    case 0x16:
        func_0C94C8(0x16);
        break;
    case 0xF:
    case 0x15:
        func_0C94C8(0x18);
        break;
    }
    D_00200CDC = 0;
    D_00200CED = 0;
    D_00200CE0 = 0;
    D_00200CE4 = 0;
    D_00201238 = func_133118();
    D_00200CEC = 1;
    func_0C9AA0();
}
