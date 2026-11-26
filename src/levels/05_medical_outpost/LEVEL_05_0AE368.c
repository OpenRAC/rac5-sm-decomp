/* LEVEL_05:0x0AE368 -- placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_001EB188;
extern unsigned char D_001EB350;
extern unsigned char D_001EB35C;
extern char D_00220E40[];

extern void func_0AE1F0(void);
extern void func_0A7250(unsigned int a);
extern void func_0A6FE8(void);
extern void func_0BA808(void);
extern void func_0AEDD8(void);
extern void func_0AE230(char *p);
extern void func_0B5390(void);
extern int func_019E00(int a);
extern void func_0A5B88(char *p);
extern unsigned int func_0858E0(int a);
extern unsigned int func_0857D0(int a);
extern void func_0D5C78(unsigned int a);
extern void func_0D4CE0(unsigned int a);
extern void func_0D4CB8(void);
extern int func_0B35D8(unsigned int a);
extern void func_0B28F0(void);
extern void func_0B0B10(void);
extern void func_0B3EC0(void);
extern void func_0B32C8(void);
extern void func_0B0E58(void);
extern void func_0B40F8(void);
extern void func_0B30A0(void);
extern void func_0B1718(void);
extern void func_0D94F8(void);
extern void func_0BA920(void);
extern int func_0BA910(void);
extern int func_0BA9A8(int a, int b);
extern void func_0C2EC8(void);
extern int func_0B45C8(int a);
extern void func_0BA8B8(int a);
extern void func_0C8D38(unsigned int a, unsigned int b);
extern void func_0B07E0(void);
extern void func_0B0238(void);
extern void func_0B4C80(void);
extern void func_0AFAB0(void);

int func_0AE368(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0AE1F0();
    if (D_001EB188) {
        func_0A7250(0xFFFFFFFF);
        if (D_001EB350) {
            func_0A6FE8();
        }
        func_0BA808();
        if (D_001EB35C) {
            D_001EB35C = 0;
            func_0AEDD8();
            t = D_00220E40;
            func_0AE230(t + 0x30);
        }
        func_0B5390();
        if (func_019E00(4)) {
            s = D_00220E40;
            if (s != 0) {
                func_0A5B88(s + 0x30);
            }
        }
        pad = func_0858E0(0x7F12);
        func_0D5C78(pad);
        if (!func_019E00(6)) {
            func_0D4CE0(pad);
            func_0D4CB8();
        }
        func_0B35D8(pad);
        func_0B28F0();
        func_0B0B10();
        func_0B3EC0();
        func_0B32C8();
        func_0B0E58();
        func_0B40F8();
        func_0B30A0();
        func_0B1718();
        func_0B40F8();
        func_0D94F8();
        func_0BA920();
        idle = func_019E00(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0BA910()) {
                func_0BA9A8(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0C2EC8();
            func_0B45C8(6);
            func_0BA8B8(0);
        } else {
            pad = func_0857D0(0xB82);
            func_0C8D38(pad, func_0858E0(0x82));
        }
        func_0B07E0();
        func_0B0238();
        func_0B4C80();
        func_0AFAB0();
        return 1;
    }
    return 0;
}
