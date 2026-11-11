/* LEVEL_17:0x09D9A0 -- placement copy of LEVEL_16_09E4A8.c: per-frame update of the front-end layer: runs the fixed list of subsystem ticks and, when no menu is active, refreshes the two player panels. */

extern unsigned char D_0019D3C8;
extern unsigned char D_0019D590;
extern unsigned char D_0019D59C;
extern char D_001D5390[];

extern void func_09D818(void);
extern void func_096848(unsigned int value);
extern void func_0965E0(void);
extern void func_0AAB90(void);
extern void func_09E4E8(void);
extern void func_09D858(char *p);
extern void func_0A5368(void);
extern int func_018558(int value);
extern void func_095398(long long value);
extern unsigned int func_079F40(int v);
extern void func_079E10(int index);
extern void func_0C6308(unsigned int a);
extern void func_0C5370(unsigned int a);
extern void func_0C5348(void);
extern void func_0A33D8(unsigned int a);
extern void func_0A1F90(void);
extern void func_0A03B0(void);
extern void func_0A3CF8(void);
extern void func_0A30C8(void);
extern void func_0A06F8(void);
extern void func_0A4040(void);
extern void func_0A2E88(void);
extern void func_0A0FB8(void);
extern void func_124FF0(void);
extern void func_0C9B58(void);
extern void func_0AACC0(void);
extern void func_0AB550(unsigned int value);
extern void func_0B3380(void);
extern int func_0A4590(int index);
extern void func_0AAC58(void *value);
extern char *func_079E30(int id);
extern int func_0B8D68(unsigned int value);
extern void func_0B9260(int x, int y);
extern void func_0A0080(void);
extern void func_09FAD8(void);
extern void func_0A4C48(void);
extern void func_09F3D8(void);
extern void func_11C068(void);
extern void func_11C618(void);
extern void func_11C7D8(void);
extern void func_11D0A0(void);
extern void func_124C28(void);

int func_09D9A0(void)
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

    func_09D818();
    if (D_0019D3C8 != 0) {
        func_096848(0xFFFFFFFF);
        if (D_0019D590 != 0) {
            func_0965E0();
        }
        func_0AAB90();
        if (D_0019D59C != 0) {
            D_0019D59C = 0;
            func_09E4E8();
            p = D_001D5390;
            func_09D858(p + 0x30);
        }
        func_0A5368();
        if (func_018558(4) != 0) {
            q = D_001D5390;
            if (q != 0) {
                func_095398((long long)(q + 0x30));
            }
        }
        a = func_079F40(0x7F12);
        func_079E10(1);
        b = func_079F40(0x7F12);
        func_079E10(0);
        func_0C6308(a);
        if (func_018558(6) == 0) {
            func_0C5370(a);
            func_0C5348();
        }
        func_0A33D8(a);
        func_0A1F90();
        func_0A03B0();
        func_0A3CF8();
        func_0A30C8();
        func_0A06F8();
        func_0A4040();
        func_0A2E88();
        func_0A0FB8();
        func_0A4040();
        func_124FF0();
        func_0C9B58();
        func_0AACC0();
        nm = func_018558(6) ^ 1;
        if ((a & 0x80001) == 0 || nm == 0) {
            m = a & 8;
            if ((m != 0 || (b & 8) != 0) && nm != 0) {
                func_0AB550(m == 0);
                func_0B3380();
                func_0A4590(6);
                func_0AAC58(0);
            } else {
                if (func_018558(6) == 0) {
                    i = 0;
                    do {
                        func_079E10(i);
                        x = func_079E30(0xB82);
                        y = func_079F40(0x82);
                        func_0B8D68(i);
                        i++;
                        func_0B9260((int)x, y);
                    } while (i < 2);
                    func_079E10(0);
                }
            }
        }
        func_0A0080();
        func_09FAD8();
        func_0A4C48();
        func_09F3D8();
        func_11C068();
        func_11C618();
        func_11C7D8();
        func_11D0A0();
        func_124C28();
        return 1;
    }
    return 0;
}
