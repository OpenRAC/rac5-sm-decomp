/* LEVEL_09:0x0AD058 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_001E5C08;
extern unsigned char D_001E5DD0;
extern unsigned char D_001E5DDC;
extern char D_0021C8C0[];

extern void func_0ACEE0(void);
extern void func_0A5F40(unsigned int a);
extern void func_0A5CD8(void);
extern void func_0B9510(void);
extern void func_0ADAC8(void);
extern void func_0ACF20(char *p);
extern void func_0B4098(void);
extern int func_019C58(int a);
extern void func_0A4878(char *p);
extern unsigned int func_084940(int a);
extern unsigned int func_084830(int a);
extern void func_0D4980(unsigned int a);
extern void func_0D39E8(unsigned int a);
extern void func_0D39C0(void);
extern void func_0B22C8(unsigned int a);
extern void func_0B15E0(void);
extern void func_0AF800(void);
extern void func_0B2BC8(void);
extern void func_0B1FB8(void);
extern void func_0AFB48(void);
extern void func_0B2E00(void);
extern void func_0B1D90(void);
extern void func_0B0408(void);
extern void func_0D8200(void);
extern void func_0B9628(void);
extern int func_0B9618(void);
extern int func_0B96B0(int a, int b);
extern void func_0C1BD0(void);
extern int func_0B32D0(int a);
extern void func_0B95C0(int a);
extern void func_0C7A40(unsigned int a, unsigned int b);
extern void func_0AF4D0(void);
extern void func_0AEF28(void);
extern void func_0B3988(void);
extern void func_0AE7A0(void);

int func_0AD058(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0ACEE0();
    if (D_001E5C08) {
        func_0A5F40(0xFFFFFFFF);
        if (D_001E5DD0) {
            func_0A5CD8();
        }
        func_0B9510();
        if (D_001E5DDC) {
            D_001E5DDC = 0;
            func_0ADAC8();
            t = D_0021C8C0;
            func_0ACF20(t + 0x30);
        }
        func_0B4098();
        if (func_019C58(4)) {
            s = D_0021C8C0;
            if (s != 0) {
                func_0A4878(s + 0x30);
            }
        }
        pad = func_084940(0x7F12);
        func_0D4980(pad);
        if (!func_019C58(6)) {
            func_0D39E8(pad);
            func_0D39C0();
        }
        ((int (*)(unsigned int a))func_0B22C8)(pad);
        func_0B15E0();
        func_0AF800();
        func_0B2BC8();
        func_0B1FB8();
        func_0AFB48();
        func_0B2E00();
        func_0B1D90();
        func_0B0408();
        func_0B2E00();
        func_0D8200();
        func_0B9628();
        idle = func_019C58(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0B9618()) {
                func_0B96B0(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0C1BD0();
            func_0B32D0(6);
            func_0B95C0(0);
        } else {
            pad = func_084830(0xB82);
            func_0C7A40(pad, func_084940(0x82));
        }
        func_0AF4D0();
        func_0AEF28();
        func_0B3988();
        func_0AE7A0();
        return 1;
    }
    return 0;
}
