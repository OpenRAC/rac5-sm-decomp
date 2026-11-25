/* LEVEL_22:0x09E3B8 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_0015B188;
extern unsigned char D_0015B350;
extern unsigned char D_0015B35C;
extern char D_00186D40[];

extern void func_09E240(void);
extern void func_0972A0(unsigned int a);
extern void func_097038(void);
extern void func_0AA708(void);
extern void func_09EE28(void);
extern void func_09E280(char *p);
extern void func_0A5338(void);
extern int func_016E80(int a);
extern void func_095BD8(char *p);
extern unsigned int func_0793A0(int a);
extern unsigned int func_079290(int a);
extern void func_0C5C10(unsigned int a);
extern void func_0C4C78(unsigned int a);
extern void func_0C4C50(void);
extern int func_0A3610(unsigned int a);
extern void func_0A29B0(void);
extern void func_0A0BD0(void);
extern void func_0A3EF8(void);
extern void func_0A3300(void);
extern void func_0A0F18(void);
extern void func_0A4130(void);
extern void func_0A3160(void);
extern void func_0A17D8(void);
extern void func_0C9490(void);
extern void func_0AA820(void);
extern int func_0AA810(void);
extern int func_0AA8A8(int a, int b);
extern void func_0B2DD0(void);
extern int func_0A4570(int a);
extern void func_0AA7B8(int a);
extern void func_0B8CD8(unsigned int a, unsigned int b);
extern void func_0A08A0(void);
extern void func_0A02F8(void);
extern void func_0A4C28(void);
extern void func_09FB00(void);

int func_09E3B8(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_09E240();
    if (D_0015B188) {
        func_0972A0(0xFFFFFFFF);
        if (D_0015B350) {
            func_097038();
        }
        func_0AA708();
        if (D_0015B35C) {
            D_0015B35C = 0;
            func_09EE28();
            t = D_00186D40;
            func_09E280(t + 0x30);
        }
        func_0A5338();
        if (func_016E80(4)) {
            s = D_00186D40;
            if (s != 0) {
                func_095BD8(s + 0x30);
            }
        }
        pad = func_0793A0(0x7F12);
        func_0C5C10(pad);
        if (!func_016E80(6)) {
            func_0C4C78(pad);
            func_0C4C50();
        }
        func_0A3610(pad);
        func_0A29B0();
        func_0A0BD0();
        func_0A3EF8();
        func_0A3300();
        func_0A0F18();
        func_0A4130();
        func_0A3160();
        func_0A17D8();
        func_0A4130();
        func_0C9490();
        func_0AA820();
        idle = func_016E80(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0AA810()) {
                func_0AA8A8(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0B2DD0();
            func_0A4570(6);
            func_0AA7B8(0);
        } else {
            pad = func_079290(0xB82);
            func_0B8CD8(pad, func_0793A0(0x82));
        }
        func_0A08A0();
        func_0A02F8();
        func_0A4C28();
        func_09FB00();
        return 1;
    }
    return 0;
}
