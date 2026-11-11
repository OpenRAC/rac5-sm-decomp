/* LEVEL_16:0x09E4A8 -- per-frame update of the front-end layer: runs the fixed list of subsystem ticks and, when no menu is active, refreshes the two player panels. */

extern unsigned char D_001A9DC8;
extern unsigned char D_001A9F90;
extern unsigned char D_001A9F9C;
extern char D_001E4090[];

extern void func_09E320(void);
extern void func_097350(unsigned int value);
extern void func_0970E8(void);
extern void func_0AB650(void);
extern void func_09EFF0(void);
extern void func_09E360(char *p);
extern void func_0A5E88(void);
extern int func_018BD8(int value);
extern void func_095EA0(long long value);
extern unsigned int func_0794C8(int v);
extern void func_079398(int index);
extern void func_0C6DC8(unsigned int a);
extern void func_0C5E30(unsigned int a);
extern void func_0C5E08(void);
extern void func_0A3EF8(unsigned int a);
extern void func_0A2AB0(void);
extern void func_0A0EB8(void);
extern void func_0A4818(void);
extern void func_0A3BE8(void);
extern void func_0A1200(void);
extern void func_0A4B60(void);
extern void func_0A39A8(void);
extern void func_0A1AC0(void);
extern void func_1255C8(void);
extern void func_0CA618(void);
extern void func_0AB780(void);
extern void func_0AC010(unsigned int value);
extern void func_0B3E40(void);
extern int func_0A50B0(int index);
extern void func_0AB718(void *value);
extern char *func_0793B8(int id);
extern int func_0B9828(unsigned int value);
extern void func_0B9D20(int x, int y);
extern void func_0A0B88(void);
extern void func_0A05E0(void);
extern void func_0A5768(void);
extern void func_09FEE0(void);
extern void func_11C6F0(void);
extern void func_11CCA0(void);
extern void func_11CE60(void);
extern void func_11D670(void);
extern void func_125200(void);

int func_09E4A8(void)
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

    func_09E320();
    if (D_001A9DC8 != 0) {
        func_097350(0xFFFFFFFF);
        if (D_001A9F90 != 0) {
            func_0970E8();
        }
        func_0AB650();
        if (D_001A9F9C != 0) {
            D_001A9F9C = 0;
            func_09EFF0();
            p = D_001E4090;
            func_09E360(p + 0x30);
        }
        func_0A5E88();
        if (func_018BD8(4) != 0) {
            q = D_001E4090;
            if (q != 0) {
                func_095EA0((long long)(q + 0x30));
            }
        }
        a = func_0794C8(0x7F12);
        func_079398(1);
        b = func_0794C8(0x7F12);
        func_079398(0);
        func_0C6DC8(a);
        if (func_018BD8(6) == 0) {
            func_0C5E30(a);
            func_0C5E08();
        }
        func_0A3EF8(a);
        func_0A2AB0();
        func_0A0EB8();
        func_0A4818();
        func_0A3BE8();
        func_0A1200();
        func_0A4B60();
        func_0A39A8();
        func_0A1AC0();
        func_0A4B60();
        func_1255C8();
        func_0CA618();
        func_0AB780();
        nm = func_018BD8(6) ^ 1;
        if ((a & 0x80001) == 0 || nm == 0) {
            m = a & 8;
            if ((m != 0 || (b & 8) != 0) && nm != 0) {
                func_0AC010(m == 0);
                func_0B3E40();
                func_0A50B0(6);
                func_0AB718(0);
            } else {
                if (func_018BD8(6) == 0) {
                    i = 0;
                    do {
                        func_079398(i);
                        x = func_0793B8(0xB82);
                        y = func_0794C8(0x82);
                        func_0B9828(i);
                        i++;
                        func_0B9D20((int)x, y);
                    } while (i < 2);
                    func_079398(0);
                }
            }
        }
        func_0A0B88();
        func_0A05E0();
        func_0A5768();
        func_09FEE0();
        func_11C6F0();
        func_11CCA0();
        func_11CE60();
        func_11D670();
        func_125200();
        return 1;
    }
    return 0;
}
