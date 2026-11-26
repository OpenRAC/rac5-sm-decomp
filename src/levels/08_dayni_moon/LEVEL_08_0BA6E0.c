/* LEVEL_08:0x0BA6E0 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_00244CC8;
extern unsigned char D_00244E90;
extern unsigned char D_00244E9C;
extern char D_002843D0[];

extern void func_0BA568(void);
extern void func_0B35C8(unsigned int a);
extern void func_0B3360(void);
extern void func_0C7180(void);
extern void func_0BB150(void);
extern void func_0BA5A8(char *p);
extern void func_0C1CD8(void);
extern int func_01B1E0(int a);
extern void func_0B1EC0(char *p);
extern unsigned int func_08FFD8(int a);
extern unsigned int func_08FEC8(int a);
extern void func_0E26A0(unsigned int a);
extern void func_0E16F8(unsigned int a);
extern void func_0E16C8(void);
extern void func_0BFDF0(unsigned int a);
extern void func_0BF108(void);
extern void func_0BD0D8(void);
extern void func_0C06F0(void);
extern void func_0BFAE0(void);
extern void func_0BD4F0(void);
extern void func_0C0A40(void);
extern void func_0BF8B8(void);
extern void func_0BDF00(void);
extern void func_0E5F20(void);
extern void func_0C7298(void);
extern int func_0C7288(void);
extern int func_0C7320(int a, int b);
extern void func_0CF848(void);
extern int func_0C0F10(int a);
extern void func_0C7230(int a);
extern void func_0D56B8(unsigned int a, unsigned int b);
extern void func_0BCDA8(void);
extern void func_0BC5B0(void);
extern void func_0C15C8(void);
extern void func_0BBE28(void);

int func_0BA6E0(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0BA568();
    if (D_00244CC8) {
        func_0B35C8(0xFFFFFFFF);
        if (D_00244E90) {
            func_0B3360();
        }
        func_0C7180();
        if (D_00244E9C) {
            D_00244E9C = 0;
            func_0BB150();
            t = D_002843D0;
            func_0BA5A8(t + 0x30);
        }
        func_0C1CD8();
        if (func_01B1E0(4)) {
            s = D_002843D0;
            if (s != 0) {
                func_0B1EC0(s + 0x30);
            }
        }
        pad = func_08FFD8(0x7F12);
        func_0E26A0(pad);
        if (!func_01B1E0(6)) {
            func_0E16F8(pad);
            func_0E16C8();
        }
        ((int (*)(unsigned int a))func_0BFDF0)(pad);
        func_0BF108();
        func_0BD0D8();
        func_0C06F0();
        func_0BFAE0();
        func_0BD4F0();
        func_0C0A40();
        func_0BF8B8();
        func_0BDF00();
        func_0C0A40();
        func_0E5F20();
        func_0C7298();
        idle = func_01B1E0(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0C7288()) {
                func_0C7320(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0CF848();
            func_0C0F10(6);
            func_0C7230(0);
        } else {
            pad = func_08FEC8(0xB82);
            func_0D56B8(pad, func_08FFD8(0x82));
        }
        func_0BCDA8();
        func_0BC5B0();
        func_0C15C8();
        func_0BBE28();
        return 1;
    }
    return 0;
}
