/* LEVEL_02:0x0B66B8 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_00210DC8;
extern unsigned char D_00210F90;
extern unsigned char D_00210F9C;
extern char D_0024C650[];

extern void func_0B6540(void);
extern void func_0AF5A0(unsigned int a);
extern void func_0AF338(void);
extern void func_0C2B70(void);
extern void func_0B7128(void);
extern void func_0B6580(char *p);
extern void func_0BD6F8(void);
extern int func_01B1C8(int a);
extern void func_0ADED8(char *p);
extern unsigned int func_08E8B8(int a);
extern unsigned int func_08E7A8(int a);
extern void func_0DE060(unsigned int a);
extern void func_0DD0C8(unsigned int a);
extern void func_0DD0A0(void);
extern void func_0BB928(unsigned int a);
extern void func_0BAC40(void);
extern void func_0B8E60(void);
extern void func_0BC228(void);
extern void func_0BB618(void);
extern void func_0B91A8(void);
extern void func_0BC460(void);
extern void func_0BB3F0(void);
extern void func_0B9A68(void);
extern void func_0E18E0(void);
extern void func_0C2C88(void);
extern int func_0C2C78(void);
extern int func_0C2D10(int a, int b);
extern void func_0CB230(void);
extern int func_0BC930(int a);
extern void func_0C2C20(int a);
extern void func_0D10A0(unsigned int a, unsigned int b);
extern void func_0B8B30(void);
extern void func_0B8588(void);
extern void func_0BCFE8(void);
extern void func_0B7E00(void);

int func_0B66B8(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0B6540();
    if (D_00210DC8) {
        func_0AF5A0(0xFFFFFFFF);
        if (D_00210F90) {
            func_0AF338();
        }
        func_0C2B70();
        if (D_00210F9C) {
            D_00210F9C = 0;
            func_0B7128();
            t = D_0024C650;
            func_0B6580(t + 0x30);
        }
        func_0BD6F8();
        if (func_01B1C8(4)) {
            s = D_0024C650;
            if (s != 0) {
                func_0ADED8(s + 0x30);
            }
        }
        pad = func_08E8B8(0x7F12);
        func_0DE060(pad);
        if (!func_01B1C8(6)) {
            func_0DD0C8(pad);
            func_0DD0A0();
        }
        ((int (*)(unsigned int a))func_0BB928)(pad);
        func_0BAC40();
        func_0B8E60();
        func_0BC228();
        func_0BB618();
        func_0B91A8();
        func_0BC460();
        func_0BB3F0();
        func_0B9A68();
        func_0BC460();
        func_0E18E0();
        func_0C2C88();
        idle = func_01B1C8(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0C2C78()) {
                func_0C2D10(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0CB230();
            func_0BC930(6);
            func_0C2C20(0);
        } else {
            pad = func_08E7A8(0xB82);
            func_0D10A0(pad, func_08E8B8(0x82));
        }
        func_0B8B30();
        func_0B8588();
        func_0BCFE8();
        func_0B7E00();
        return 1;
    }
    return 0;
}
