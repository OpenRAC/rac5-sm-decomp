/* LEVEL_21:0x090670 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_00150A88;
extern unsigned char D_00150C50;
extern unsigned char D_00150C5C;
extern char D_0017D2C0[];

extern void func_0904F8(void);
extern void func_089558(unsigned int a);
extern void func_0892F0(void);
extern void func_09C8A8(void);
extern void func_0910E0(void);
extern void func_090538(char *p);
extern void func_0972F8(void);
extern int func_016A50(int a);
extern void func_087E90(char *p);
extern unsigned int func_06C668(int a);
extern unsigned int func_06C558(int a);
extern void func_0B7D10(unsigned int a);
extern void func_0B6D78(unsigned int a);
extern void func_0B6D50(void);
extern int func_0955D0(unsigned int a);
extern void func_094970(void);
extern void func_092E18(void);
extern void func_095EB8(void);
extern void func_0952C0(void);
extern void func_093160(void);
extern void func_0960F0(void);
extern void func_095120(void);
extern void func_093A20(void);
extern void func_0BB590(void);
extern void func_09C9C0(void);
extern int func_09C9B0(void);
extern int func_09CA48(int a, int b);
extern void func_0A4F68(void);
extern int func_096530(int a);
extern void func_09C958(int a);
extern void func_0AADD8(unsigned int a, unsigned int b);
extern void func_092AE8(void);
extern void func_092540(void);
extern void func_096BE8(void);
extern void func_091DB8(void);

int func_090670(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0904F8();
    if (D_00150A88) {
        func_089558(0xFFFFFFFF);
        if (D_00150C50) {
            func_0892F0();
        }
        func_09C8A8();
        if (D_00150C5C) {
            D_00150C5C = 0;
            func_0910E0();
            t = D_0017D2C0;
            func_090538(t + 0x30);
        }
        func_0972F8();
        if (func_016A50(4)) {
            s = D_0017D2C0;
            if (s != 0) {
                func_087E90(s + 0x30);
            }
        }
        pad = func_06C668(0x7F12);
        func_0B7D10(pad);
        if (!func_016A50(6)) {
            func_0B6D78(pad);
            func_0B6D50();
        }
        func_0955D0(pad);
        func_094970();
        func_092E18();
        func_095EB8();
        func_0952C0();
        func_093160();
        func_0960F0();
        func_095120();
        func_093A20();
        func_0960F0();
        func_0BB590();
        func_09C9C0();
        idle = func_016A50(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_09C9B0()) {
                func_09CA48(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0A4F68();
            func_096530(6);
            func_09C958(0);
        } else {
            pad = func_06C558(0xB82);
            func_0AADD8(pad, func_06C668(0x82));
        }
        func_092AE8();
        func_092540();
        func_096BE8();
        func_091DB8();
        return 1;
    }
    return 0;
}
