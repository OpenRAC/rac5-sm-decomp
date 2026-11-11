/* LEVEL_20:0x088BA0 -- placement copy of LEVEL_16_09E4A8.c: per-frame update of the front-end layer: runs the fixed list of subsystem ticks and, when no menu is active, refreshes the two player panels. */

extern unsigned char D_0010C4A8;
extern unsigned char D_0010C670;
extern unsigned char D_0010C67C;
extern char D_0013BA10[];

extern void func_088A18(void);
extern void func_081A48(unsigned int value);
extern void func_0817E0(void);
extern void func_095B80(void);
extern void func_0896E8(void);
extern void func_088A58(char *p);
extern void func_090408(void);
extern int func_016990(int value);
extern void func_080598(long long value);
extern unsigned int func_067138(int v);
extern void func_067008(int index);
extern void func_0B12F8(unsigned int a);
extern void func_0B0360(unsigned int a);
extern void func_0B0338(void);
extern void func_08E570(unsigned int a);
extern void func_08D190(void);
extern void func_08B5B0(void);
extern void func_08EE90(void);
extern void func_08E260(void);
extern void func_08B8F8(void);
extern void func_08F1D8(void);
extern void func_08E088(void);
extern void func_08C1B8(void);
extern void func_0F76C8(void);
extern void func_0B4B48(void);
extern void func_095CB0(void);
extern void func_096540(unsigned int value);
extern void func_09E370(void);
extern int func_08F6B0(int index);
extern void func_095C48(void *value);
extern char *func_067028(int id);
extern int func_0A3D58(unsigned int value);
extern void func_0A4250(int x, int y);
extern void func_08B280(void);
extern void func_08ACD8(void);
extern void func_08FD68(void);
extern void func_08A5D8(void);
extern void func_0EEA98(void);
extern void func_0EF048(void);
extern void func_0EF208(void);
extern void func_0EFA18(void);
extern void func_0F7300(void);

int func_088BA0(void)
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

    func_088A18();
    if (D_0010C4A8 != 0) {
        func_081A48(0xFFFFFFFF);
        if (D_0010C670 != 0) {
            func_0817E0();
        }
        func_095B80();
        if (D_0010C67C != 0) {
            D_0010C67C = 0;
            func_0896E8();
            p = D_0013BA10;
            func_088A58(p + 0x30);
        }
        func_090408();
        if (func_016990(4) != 0) {
            q = D_0013BA10;
            if (q != 0) {
                func_080598((long long)(q + 0x30));
            }
        }
        a = func_067138(0x7F12);
        func_067008(1);
        b = func_067138(0x7F12);
        func_067008(0);
        func_0B12F8(a);
        if (func_016990(6) == 0) {
            func_0B0360(a);
            func_0B0338();
        }
        func_08E570(a);
        func_08D190();
        func_08B5B0();
        func_08EE90();
        func_08E260();
        func_08B8F8();
        func_08F1D8();
        func_08E088();
        func_08C1B8();
        func_08F1D8();
        func_0F76C8();
        func_0B4B48();
        func_095CB0();
        nm = func_016990(6) ^ 1;
        if ((a & 0x80001) == 0 || nm == 0) {
            m = a & 8;
            if ((m != 0 || (b & 8) != 0) && nm != 0) {
                func_096540(m == 0);
                func_09E370();
                func_08F6B0(6);
                func_095C48(0);
            } else {
                if (func_016990(6) == 0) {
                    i = 0;
                    do {
                        func_067008(i);
                        x = func_067028(0xB82);
                        y = func_067138(0x82);
                        func_0A3D58(i);
                        i++;
                        func_0A4250((int)x, y);
                    } while (i < 2);
                    func_067008(0);
                }
            }
        }
        func_08B280();
        func_08ACD8();
        func_08FD68();
        func_08A5D8();
        func_0EEA98();
        func_0EF048();
        func_0EF208();
        func_0EFA18();
        func_0F7300();
        return 1;
    }
    return 0;
}
