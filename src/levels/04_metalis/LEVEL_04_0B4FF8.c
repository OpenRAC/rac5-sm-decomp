/* LEVEL_04:0x0B4FF8 -- placement copy of LEVEL_05_0AE368.c: placement copy of LEVEL_01_0AFDA8.c: per-frame tick of the active screen: runs the subsystem updates and the confirm/cancel handling while the screen flag is set. */
extern unsigned char D_002152C8;
extern unsigned char D_00215490;
extern unsigned char D_0021549C;
extern char D_0024F950[];

extern void func_0B4E80(void);
extern void func_0ADEE0(unsigned int a);
extern void func_0ADC78(void);
extern void func_0C1A70(void);
extern void func_0B5A68(void);
extern void func_0B4EC0(char *p);
extern void func_0BC5F0(void);
extern int func_01A4E8(int a);
extern void func_0AC7D8(char *p);
extern unsigned int func_08B220(int a);
extern unsigned int func_08B110(int a);
extern void func_0DCF90(unsigned int a);
extern void func_0DBFE8(unsigned int a);
extern void func_0DBFB8(void);
extern void func_0BA708(unsigned int a);
extern void func_0B9A20(void);
extern void func_0B79F0(void);
extern void func_0BB008(void);
extern void func_0BA3F8(void);
extern void func_0B7E08(void);
extern void func_0BB358(void);
extern void func_0BA1D0(void);
extern void func_0B8818(void);
extern void func_0E0810(void);
extern void func_0C1B88(void);
extern int func_0C1B78(void);
extern int func_0C1C10(int a, int b);
extern void func_0CA138(void);
extern int func_0BB828(int a);
extern void func_0C1B20(int a);
extern void func_0CFFA8(unsigned int a, unsigned int b);
extern void func_0B76C0(void);
extern void func_0B6EC8(void);
extern void func_0BBEE0(void);
extern void func_0B6740(void);

int func_0B4FF8(void)
{
    char *s;
    char *t;
    unsigned int pad;
    unsigned char idle;
    func_0B4E80();
    if (D_002152C8) {
        func_0ADEE0(0xFFFFFFFF);
        if (D_00215490) {
            func_0ADC78();
        }
        func_0C1A70();
        if (D_0021549C) {
            D_0021549C = 0;
            func_0B5A68();
            t = D_0024F950;
            func_0B4EC0(t + 0x30);
        }
        func_0BC5F0();
        if (func_01A4E8(4)) {
            s = D_0024F950;
            if (s != 0) {
                func_0AC7D8(s + 0x30);
            }
        }
        pad = func_08B220(0x7F12);
        func_0DCF90(pad);
        if (!func_01A4E8(6)) {
            func_0DBFE8(pad);
            func_0DBFB8();
        }
        ((int (*)(unsigned int a))func_0BA708)(pad);
        func_0B9A20();
        func_0B79F0();
        func_0BB008();
        func_0BA3F8();
        func_0B7E08();
        func_0BB358();
        func_0BA1D0();
        func_0B8818();
        func_0BB358();
        func_0E0810();
        func_0C1B88();
        idle = func_01A4E8(6) ^ 1;
        if ((pad & 0x80001) && idle) {
            if (!func_0C1B78()) {
                func_0C1C10(2, 0);
            }
        } else if ((pad & 8) && idle) {
            func_0CA138();
            func_0BB828(6);
            func_0C1B20(0);
        } else {
            pad = func_08B110(0xB82);
            func_0CFFA8(pad, func_08B220(0x82));
        }
        func_0B76C0();
        func_0B6EC8();
        func_0BBEE0();
        func_0B6740();
        return 1;
    }
    return 0;
}
