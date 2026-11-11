/* LEVEL_18:0x09D4B8 -- placement copy of LEVEL_16_09E4A8.c: per-frame update of the front-end layer: runs the fixed list of subsystem ticks and, when no menu is active, refreshes the two player panels. */

extern unsigned char D_001AB248;
extern unsigned char D_001AB410;
extern unsigned char D_001AB41C;
extern char D_001E4410[];

extern void func_09D330(void);
extern void func_096360(unsigned int value);
extern void func_0960F8(void);
extern void func_0AA628(void);
extern void func_09E000(void);
extern void func_09D370(char *p);
extern void func_0A4E00(void);
extern int func_018220(int value);
extern void func_094EB0(long long value);
extern unsigned int func_078E48(int v);
extern void func_078D18(int index);
extern void func_0C5DA0(unsigned int a);
extern void func_0C4E08(unsigned int a);
extern void func_0C4DE0(void);
extern void func_0A2EF0(unsigned int a);
extern void func_0A1AA8(void);
extern void func_09FEC8(void);
extern void func_0A3810(void);
extern void func_0A2BE0(void);
extern void func_0A0210(void);
extern void func_0A3B58(void);
extern void func_0A29A0(void);
extern void func_0A0AD0(void);
extern void func_124680(void);
extern void func_0C95F0(void);
extern void func_0AA758(void);
extern void func_0AAFE8(unsigned int value);
extern void func_0B2E18(void);
extern int func_0A40A8(int index);
extern void func_0AA6F0(void *value);
extern char *func_078D38(int id);
extern int func_0B8800(unsigned int value);
extern void func_0B8CF8(int x, int y);
extern void func_09FB98(void);
extern void func_09F5F0(void);
extern void func_0A4760(void);
extern void func_09EEF0(void);
extern void func_11B6E0(void);
extern void func_11BC90(void);
extern void func_11BF00(void);
extern void func_11C710(void);
extern void func_1242B8(void);

int func_09D4B8(void)
{
    unsigned int a;
    unsigned int b;
    unsigned char nm;
    unsigned int i;
    char *x;
    unsigned int y;
    char *p;
    char *q;
    unsigned int m;

    func_09D330();
    if (D_001AB248 != 0) {
        func_096360(0xFFFFFFFF);
        if (D_001AB410 != 0) {
            func_0960F8();
        }
        func_0AA628();
        if (D_001AB41C != 0) {
            D_001AB41C = 0;
            func_09E000();
            p = D_001E4410;
            func_09D370(p + 0x30);
        }
        func_0A4E00();
        if (func_018220(4) != 0) {
            q = D_001E4410;
            if (q != 0) {
                func_094EB0((long long)(q + 0x30));
            }
        }
        a = func_078E48(0x7F12);
        func_078D18(1);
        b = func_078E48(0x7F12);
        func_078D18(0);
        func_0C5DA0(a);
        if (func_018220(6) == 0) {
            func_0C4E08(a);
            func_0C4DE0();
        }
        func_0A2EF0(a);
        func_0A1AA8();
        func_09FEC8();
        func_0A3810();
        func_0A2BE0();
        func_0A0210();
        func_0A3B58();
        func_0A29A0();
        func_0A0AD0();
        func_0A3B58();
        func_124680();
        func_0C95F0();
        func_0AA758();
        nm = func_018220(6) ^ 1;
        if ((a & 0x80001) == 0 || nm == 0) {
            m = a & 8;
            if ((m != 0 || (b & 8) != 0) && nm != 0) {
                func_0AAFE8(m == 0);
                func_0B2E18();
                func_0A40A8(6);
                func_0AA6F0(0);
            } else {
                if (func_018220(6) == 0) {
                    i = 0;
                    do {
                        func_078D18(i);
                        x = func_078D38(0xB82);
                        y = func_078E48(0x82);
                        func_0B8800(i);
                        i++;
                        func_0B8CF8((int)x, y);
                    } while (i < 2);
                    func_078D18(0);
                }
            }
        }
        func_09FB98();
        func_09F5F0();
        func_0A4760();
        func_09EEF0();
        func_11B6E0();
        func_11BC90();
        func_11BF00();
        func_11C710();
        func_1242B8();
        return 1;
    }
    return 0;
}
