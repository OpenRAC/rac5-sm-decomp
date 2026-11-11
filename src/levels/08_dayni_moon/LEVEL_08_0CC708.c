/* LEVEL_08:0x0CC708 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_00247D1C;
extern int D_00247D18;
extern int D_00247D34;
extern int D_00247D30;
extern int D_00247D20;
extern int D_00247D24;
extern int D_002458C8;
extern unsigned char D_00247D2C;
extern int D_00247D88[][4];
extern char D_00247D38[];
extern char D_00247D60[];
extern unsigned int func_090070(int a);
extern int func_0C0F10(int a);
extern void func_01B1A0(int a, int b);
extern int func_0C79A8(int a);
extern void func_0D62E8(int a);
extern int func_025748(int s, int a);
extern int func_025770(int s, int a);
extern int func_024E48(int s, int a);
extern void func_0CC648(void);
extern void func_0BD6B8(char *p);
extern void func_0CD000(int a);

void func_0CC708(void)
{
    unsigned int pad;
    int sel;
    pad = func_090070(0x6B10);
    sel = D_00247D88[D_00247D1C][D_00247D18];
    if (pad & 0x8) {
        func_0C0F10(0);
        func_0C0F10(7);
        func_01B1A0(4, 0);
    } else if (pad & 0x1000) {
        func_0C0F10(0);
        func_0C0F10(6);
        func_0C79A8(3);
    } else if (pad & 0x2000) {
        func_0D62E8(5);
        func_0C79A8(10);
    } else if (pad & 0x8000) {
        if (sel && func_025748(sel, -1) && !func_025770(sel, -1)) {
            D_00247D2C ^= 1;
            func_0C0F10(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_025748(sel, -1) && !func_025770(sel, -1)) {
            if (func_024E48(sel, -1)) {
                func_0C0F10(0xC);
            } else {
                D_002458C8 = sel;
                D_00247D20 = D_00247D18;
                D_00247D24 = D_00247D1C;
                func_0C0F10(1);
            }
        }
    } else if (!D_00247D2C) {
        if (pad & 0x10) {
            func_0C0F10(8);
            D_00247D1C--;
            if (D_00247D1C < 0) D_00247D1C = D_00247D34;
            func_0CC648();
        } else if (pad & 0x40) {
            func_0C0F10(8);
            D_00247D1C++;
            if (D_00247D34 < D_00247D1C) D_00247D1C = 0;
            func_0CC648();
        } else if (pad & 0x80) {
            func_0C0F10(8);
            D_00247D18--;
            if (D_00247D18 < 0) D_00247D18 = D_00247D30;
            func_0CC648();
        } else if (pad & 0x20) {
            func_0C0F10(8);
            D_00247D18++;
            if (D_00247D30 < D_00247D18) D_00247D18 = 0;
            func_0CC648();
        }
    }
    func_0BD6B8(D_00247D38);
    func_0BD6B8(D_00247D60);
    func_0CD000(0);
}
