/* LEVEL_01:0x0C17E0 -- handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001FEE5C;
extern int D_001FEE58;
extern int D_001FEE74;
extern int D_001FEE70;
extern int D_001FEE60;
extern int D_001FEE64;
extern int D_001FCA08;
extern unsigned char D_001FEE6C;
extern int D_001FEEC8[][4];
extern char D_001FEE78[];
extern char D_001FEEA0[];
extern unsigned int func_088020(int a);
extern int func_0B6020(int a);
extern void func_01A828(int a, int b);
extern int func_0BCA80(int a);
extern void func_0CB340(int a);
extern int func_024EC8(int s, int a);
extern int func_024EF0(int s, int a);
extern int func_0245C8(int s, int a);
extern void func_0C1720(void);
extern void func_0B2A20(char *p);
extern void func_0C20D8(int a);

void func_0C17E0(void)
{
    unsigned int pad;
    int sel;
    pad = func_088020(0x6B10);
    sel = D_001FEEC8[D_001FEE5C][D_001FEE58];
    if (pad & 0x8) {
        func_0B6020(0);
        func_0B6020(7);
        func_01A828(4, 0);
    } else if (pad & 0x1000) {
        func_0B6020(0);
        func_0B6020(6);
        func_0BCA80(3);
    } else if (pad & 0x2000) {
        func_0CB340(5);
        func_0BCA80(10);
    } else if (pad & 0x8000) {
        if (sel && func_024EC8(sel, -1) && !func_024EF0(sel, -1)) {
            D_001FEE6C ^= 1;
            func_0B6020(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_024EC8(sel, -1) && !func_024EF0(sel, -1)) {
            if (func_0245C8(sel, -1)) {
                func_0B6020(0xC);
            } else {
                D_001FCA08 = sel;
                D_001FEE60 = D_001FEE58;
                D_001FEE64 = D_001FEE5C;
                func_0B6020(1);
            }
        }
    } else if (!D_001FEE6C) {
        if (pad & 0x10) {
            func_0B6020(8);
            D_001FEE5C--;
            if (D_001FEE5C < 0) D_001FEE5C = D_001FEE74;
            func_0C1720();
        } else if (pad & 0x40) {
            func_0B6020(8);
            D_001FEE5C++;
            if (D_001FEE74 < D_001FEE5C) D_001FEE5C = 0;
            func_0C1720();
        } else if (pad & 0x80) {
            func_0B6020(8);
            D_001FEE58--;
            if (D_001FEE58 < 0) D_001FEE58 = D_001FEE70;
            func_0C1720();
        } else if (pad & 0x20) {
            func_0B6020(8);
            D_001FEE58++;
            if (D_001FEE70 < D_001FEE58) D_001FEE58 = 0;
            func_0C1720();
        }
    }
    func_0B2A20(D_001FEE78);
    func_0B2A20(D_001FEEA0);
    func_0C20D8(0);
}
