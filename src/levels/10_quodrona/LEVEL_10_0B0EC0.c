/* LEVEL_10:0x0B0EC0 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_00204E08;
extern unsigned char D_00204FD0;
extern unsigned char D_00204FDC;
extern char D_0023E540[];

extern void func_0B0D48(void);
extern void func_0A9DA8(unsigned int a);
extern void func_0A9B40(void);
extern void func_0BD5A8(void);
extern void func_0B1930(void);
extern void func_0B0D88(char *p);
extern void func_0B8068(void);
extern int func_019EE8(int a);
extern void func_0A86E0(char *p);
extern unsigned int func_0882F0(int a);
extern unsigned int func_0881E0(int a);
extern void func_0D8B10(unsigned int a);
extern void func_0D7B78(unsigned int a);
extern void func_0D7B50(void);
extern void func_0B61F0(unsigned int a);
extern void func_0B5508(void);
extern void func_0B3728(void);
extern void func_0B6AF0(void);
extern void func_0B5EE0(void);
extern void func_0B3A70(void);
extern void func_0B6D28(void);
extern void func_0B5CB8(void);
extern void func_0B4330(void);
extern void func_0DC390(void);
extern void func_0BD6C0(void);
extern int func_0BD6B0(void);
extern int func_0BD748(int a, int b);
extern void func_0C5C70(void);
extern int func_0B71F8(int a);
extern void func_0BD658(int a);
extern void func_0CBBD0(unsigned int a, unsigned int b);
extern void func_0B3338(void);
extern void func_0B2D90(void);
extern void func_0B78B0(void);
extern void func_0B2608(void);

int func_0B0EC0(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0B0D48();
    if (D_00204E08) {
        func_0A9DA8(0xFFFFFFFF);
        if (D_00204FD0) {
            func_0A9B40();
        }
        func_0BD5A8();
        if (D_00204FDC) {
            D_00204FDC = 0;
            func_0B1930();
            t = D_0023E540;
            func_0B0D88(t + 0x30);
        }
        func_0B8068();
        if (func_019EE8(4)) {
            s = D_0023E540;
            if (s != 0) {
                func_0A86E0(s + 0x30);
            }
        }
        pad = func_0882F0(0x7F12);
        func_0D8B10(pad);
        if (!func_019EE8(6)) {
            func_0D7B78(pad);
            func_0D7B50();
        }
        ((int (*)(unsigned int a))func_0B61F0)(pad);
        func_0B5508();
        func_0B3728();
        func_0B6AF0();
        func_0B5EE0();
        func_0B3A70();
        func_0B6D28();
        func_0B5CB8();
        func_0B4330();
        func_0B6D28();
        func_0DC390();
        func_0BD6C0();
        idle = func_019EE8(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0BD6B0()) {
                func_0BD748(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0C5C70();
            func_0B71F8(6);
            func_0BD658(0);
        } else {
            pad = func_0881E0(0xB82);
            func_0CBBD0(pad, func_0882F0(0x82));
        }
        func_0B3338();
        func_0B2D90();
        func_0B78B0();
        func_0B2608();
        return 1;
    }
    return 0;
}
