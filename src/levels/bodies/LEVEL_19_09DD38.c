/* LEVEL_19:0x09DD38 -- placement copy of LEVEL_16_09E4A8.c: per-frame update of the front-end layer: runs the fixed list of subsystem ticks and, when no menu is active, refreshes the two player panels. */

extern unsigned char D_001AAF48;
extern unsigned char D_001AB110;
extern unsigned char D_001AB11C;
extern char D_001E4210[];

extern void func_09DBB0(void);
extern void func_096BE0(unsigned int value);
extern void func_096978(void);
extern void func_0AAF28(void);
extern void func_09E880(void);
extern void func_09DBF0(char *p);
extern void func_0A5700(void);
extern int func_0188D8(int value);
extern void func_095730(long long value);
extern unsigned int func_0799B0(int v);
extern void func_079880(int index);
extern void func_0C66A0(unsigned int a);
extern void func_0C5708(unsigned int a);
extern void func_0C56E0(void);
extern void func_0A3770(unsigned int a);
extern void func_0A2328(void);
extern void func_0A0748(void);
extern void func_0A4090(void);
extern void func_0A3460(void);
extern void func_0A0A90(void);
extern void func_0A43D8(void);
extern void func_0A3220(void);
extern void func_0A1350(void);
extern void func_125F30(void);
extern void func_0C9EF0(void);
extern void func_0AB058(void);
extern void func_0AB8E8(unsigned int value);
extern void func_0B3718(void);
extern int func_0A4928(int index);
extern void func_0AAFF0(void *value);
extern char *func_0798A0(int id);
extern int func_0B9100(unsigned int value);
extern void func_0B95F8(int x, int y);
extern void func_0A0418(void);
extern void func_09FE70(void);
extern void func_0A4FE0(void);
extern void func_09F770(void);
extern void func_11D060(void);
extern void func_11D610(void);
extern void func_11D7D0(void);
extern void func_11DFE0(void);
extern void func_125B68(void);

int func_09DD38(void)
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

    func_09DBB0();
    if (D_001AAF48 != 0) {
        func_096BE0(0xFFFFFFFF);
        if (D_001AB110 != 0) {
            func_096978();
        }
        func_0AAF28();
        if (D_001AB11C != 0) {
            D_001AB11C = 0;
            func_09E880();
            p = D_001E4210;
            func_09DBF0(p + 0x30);
        }
        func_0A5700();
        if (func_0188D8(4) != 0) {
            q = D_001E4210;
            if (q != 0) {
                func_095730((long long)(q + 0x30));
            }
        }
        a = func_0799B0(0x7F12);
        func_079880(1);
        b = func_0799B0(0x7F12);
        func_079880(0);
        func_0C66A0(a);
        if (func_0188D8(6) == 0) {
            func_0C5708(a);
            func_0C56E0();
        }
        func_0A3770(a);
        func_0A2328();
        func_0A0748();
        func_0A4090();
        func_0A3460();
        func_0A0A90();
        func_0A43D8();
        func_0A3220();
        func_0A1350();
        func_0A43D8();
        func_125F30();
        func_0C9EF0();
        func_0AB058();
        nm = func_0188D8(6) ^ 1;
        if ((a & 0x80001) == 0 || nm == 0) {
            m = a & 8;
            if ((m != 0 || (b & 8) != 0) && nm != 0) {
                func_0AB8E8(m == 0);
                func_0B3718();
                func_0A4928(6);
                func_0AAFF0(0);
            } else {
                if (func_0188D8(6) == 0) {
                    i = 0;
                    do {
                        func_079880(i);
                        x = func_0798A0(0xB82);
                        y = func_0799B0(0x82);
                        func_0B9100(i);
                        i++;
                        func_0B95F8((int)x, y);
                    } while (i < 2);
                    func_079880(0);
                }
            }
        }
        func_0A0418();
        func_09FE70();
        func_0A4FE0();
        func_09F770();
        func_11D060();
        func_11D610();
        func_11D7D0();
        func_11DFE0();
        func_125B68();
        return 1;
    }
    return 0;
}
