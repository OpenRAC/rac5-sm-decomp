/* LEVEL_03:0x0AFB28 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_00214488;
extern unsigned char D_00214650;
extern unsigned char D_0021465C;
extern char D_0024FFC0[];

extern void func_0AF9B0(void);
extern void func_0A8A10(unsigned int a);
extern void func_0A87A8(void);
extern void func_0BC048(void);
extern void func_0B0598(void);
extern void func_0AF9F0(char *p);
extern void func_0B6BD0(void);
extern int func_01A5D0(int a);
extern void func_0A7348(char *p);
extern unsigned int func_087DE0(int a);
extern unsigned int func_087CD0(int a);
extern void func_0D74B8(unsigned int a);
extern void func_0D6520(unsigned int a);
extern void func_0D64F8(void);
extern void func_0B4E00(unsigned int a);
extern void func_0B4118(void);
extern void func_0B2338(void);
extern void func_0B5700(void);
extern void func_0B4AF0(void);
extern void func_0B2680(void);
extern void func_0B5938(void);
extern void func_0B48C8(void);
extern void func_0B2F40(void);
extern void func_0DAD38(void);
extern void func_0BC160(void);
extern int func_0BC150(void);
extern int func_0BC1E8(int a, int b);
extern void func_0C4708(void);
extern int func_0B5E08(int a);
extern void func_0BC0F8(int a);
extern void func_0CA578(unsigned int a, unsigned int b);
extern void func_0B2008(void);
extern void func_0B1A60(void);
extern void func_0B64C0(void);
extern void func_0B1270(void);

int func_0AFB28(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0AF9B0();
    if (D_00214488) {
        func_0A8A10(0xFFFFFFFF);
        if (D_00214650) {
            func_0A87A8();
        }
        func_0BC048();
        if (D_0021465C) {
            D_0021465C = 0;
            func_0B0598();
            t = D_0024FFC0;
            func_0AF9F0(t + 0x30);
        }
        func_0B6BD0();
        if (func_01A5D0(4)) {
            s = D_0024FFC0;
            if (s != 0) {
                func_0A7348(s + 0x30);
            }
        }
        pad = func_087DE0(0x7F12);
        func_0D74B8(pad);
        if (!func_01A5D0(6)) {
            func_0D6520(pad);
            func_0D64F8();
        }
        ((int (*)(unsigned int a))func_0B4E00)(pad);
        func_0B4118();
        func_0B2338();
        func_0B5700();
        func_0B4AF0();
        func_0B2680();
        func_0B5938();
        func_0B48C8();
        func_0B2F40();
        func_0B5938();
        func_0DAD38();
        func_0BC160();
        idle = func_01A5D0(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0BC150()) {
                func_0BC1E8(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0C4708();
            func_0B5E08(6);
            func_0BC0F8(0);
        } else {
            pad = func_087CD0(0xB82);
            func_0CA578(pad, func_087DE0(0x82));
        }
        func_0B2008();
        func_0B1A60();
        func_0B64C0();
        func_0B1270();
        return 1;
    }
    return 0;
}
