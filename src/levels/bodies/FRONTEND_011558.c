/* FRONTEND:0x011558 -- polls input state and reacts to the pressed buttons; returns 0 when inactive. */
extern unsigned char D_0002FE18;
extern unsigned char D_0002FFE0;
extern unsigned char D_0002FFEC;
extern void func_0114D0(void);
extern void func_00B8E0(unsigned int a);
extern void func_00B7C0(void);
extern void func_011768(void);
extern int func_001B20(int a);
extern int func_005650(int a);
extern void func_0138D0(int a);
extern void func_0138A8(void);
extern int func_0145C8(int a);

int func_011558(void)
{
    int pad;
    unsigned char b;

    func_0114D0();
    if (D_0002FE18 == 0)
        return 0;
    func_00B8E0(-1);
    if (D_0002FFE0 != 0)
        func_00B7C0();
    if (D_0002FFEC != 0) {
        D_0002FFEC = 0;
        func_011768();
    }
    func_001B20(4);
    pad = func_005650(0x7F12);
    if (func_001B20(6) == 0) {
        func_0138D0(pad);
        func_0138A8();
    }
    b = func_001B20(6) ^ 1;
    if ((pad & 0x80001) != 0 && b != 0)
        return 1;
    if ((pad & 8) != 0 && b != 0)
        func_0145C8(6);
    return 1;
}
