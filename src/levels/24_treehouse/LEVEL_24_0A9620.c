/* LEVEL_24:0x0A9620 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_001CCA88;
extern unsigned char D_001CCC50;
extern unsigned char D_001CCC5C;
extern char D_00201040[];

extern void func_0A94A8(void);
extern void func_0A2508(unsigned int a);
extern void func_0A22A0(void);
extern void func_0B5B20(void);
extern void func_0AA090(void);
extern void func_0A94E8(char *p);
extern void func_0B0678(void);
extern int func_018E58(int a);
extern void func_0A0E40(char *p);
extern unsigned int func_081228(int a);
extern unsigned int func_081118(int a);
extern void func_0D1038(unsigned int a);
extern void func_0D0090(unsigned int a);
extern void func_0D0060(void);
extern void func_0AE890(unsigned int a);
extern void func_0ADBA8(void);
extern void func_0ABDC8(void);
extern void func_0AF1A8(void);
extern void func_0AE580(void);
extern void func_0AC110(void);
extern void func_0AF3E0(void);
extern void func_0AE358(void);
extern void func_0AC9D0(void);
extern void func_0D48B8(void);
extern void func_0B5C38(void);
extern int func_0B5C28(void);
extern int func_0B5CC0(int a, int b);
extern void func_0BE1E8(void);
extern int func_0AF8B0(int a);
extern void func_0B5BD0(int a);
extern void func_0C4058(unsigned int a, unsigned int b);
extern void func_0ABA98(void);
extern void func_0AB4F0(void);
extern void func_0AFF68(void);
extern void func_0AAD68(void);

int func_0A9620(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0A94A8();
    if (D_001CCA88) {
        func_0A2508(0xFFFFFFFF);
        if (D_001CCC50) {
            func_0A22A0();
        }
        func_0B5B20();
        if (D_001CCC5C) {
            D_001CCC5C = 0;
            func_0AA090();
            t = D_00201040;
            func_0A94E8(t + 0x30);
        }
        func_0B0678();
        if (func_018E58(4)) {
            s = D_00201040;
            if (s != 0) {
                func_0A0E40(s + 0x30);
            }
        }
        pad = func_081228(0x7F12);
        func_0D1038(pad);
        if (!func_018E58(6)) {
            func_0D0090(pad);
            func_0D0060();
        }
        ((int (*)(unsigned int a))func_0AE890)(pad);
        func_0ADBA8();
        func_0ABDC8();
        func_0AF1A8();
        func_0AE580();
        func_0AC110();
        func_0AF3E0();
        func_0AE358();
        func_0AC9D0();
        func_0AF3E0();
        func_0D48B8();
        func_0B5C38();
        idle = func_018E58(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0B5C28()) {
                func_0B5CC0(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0BE1E8();
            func_0AF8B0(6);
            func_0B5BD0(0);
        } else {
            pad = func_081118(0xB82);
            func_0C4058(pad, func_081228(0x82));
        }
        func_0ABA98();
        func_0AB4F0();
        func_0AFF68();
        func_0AAD68();
        return 1;
    }
    return 0;
}
