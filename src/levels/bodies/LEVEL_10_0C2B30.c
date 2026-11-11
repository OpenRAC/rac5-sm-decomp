/* LEVEL_10:0x0C2B30 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_00207E5C;
extern int D_00207E58;
extern int D_00207E74;
extern int D_00207E70;
extern int D_00207E60;
extern int D_00207E64;
extern int D_00205A08;
extern unsigned char D_00207E6C;
extern int D_00207EC8[][4];
extern char D_00207E78[];
extern char D_00207EA0[];
extern unsigned int func_088388(int a);
extern int func_0B71F8(int a);
extern void func_019EA8(int a, int b);
extern int func_0BDDD0(int a);
extern void func_0CC780(int a);
extern int func_024830(int s, int a);
extern int func_024858(int s, int a);
extern int func_023F30(int s, int a);
extern void func_0C2A70(void);
extern void func_0B3BF8(char *p);
extern void func_0C3428(int a);

void func_0C2B30(void)
{
    unsigned int pad;
    int sel;
    pad = func_088388(0x6B10);
    sel = D_00207EC8[D_00207E5C][D_00207E58];
    if (pad & 0x8) {
        func_0B71F8(0);
        func_0B71F8(7);
        func_019EA8(4, 0);
    } else if (pad & 0x1000) {
        func_0B71F8(0);
        func_0B71F8(6);
        func_0BDDD0(3);
    } else if (pad & 0x2000) {
        func_0CC780(5);
        func_0BDDD0(10);
    } else if (pad & 0x8000) {
        if (sel && func_024830(sel, -1) && !func_024858(sel, -1)) {
            D_00207E6C ^= 1;
            func_0B71F8(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_024830(sel, -1) && !func_024858(sel, -1)) {
            if (func_023F30(sel, -1)) {
                func_0B71F8(0xC);
            } else {
                D_00205A08 = sel;
                D_00207E60 = D_00207E58;
                D_00207E64 = D_00207E5C;
                func_0B71F8(1);
            }
        }
    } else if (!D_00207E6C) {
        if (pad & 0x10) {
            func_0B71F8(8);
            D_00207E5C--;
            if (D_00207E5C < 0) D_00207E5C = D_00207E74;
            func_0C2A70();
        } else if (pad & 0x40) {
            func_0B71F8(8);
            D_00207E5C++;
            if (D_00207E74 < D_00207E5C) D_00207E5C = 0;
            func_0C2A70();
        } else if (pad & 0x80) {
            func_0B71F8(8);
            D_00207E58--;
            if (D_00207E58 < 0) D_00207E58 = D_00207E70;
            func_0C2A70();
        } else if (pad & 0x20) {
            func_0B71F8(8);
            D_00207E58++;
            if (D_00207E70 < D_00207E58) D_00207E58 = 0;
            func_0C2A70();
        }
    }
    func_0B3BF8(D_00207E78);
    func_0B3BF8(D_00207EA0);
    func_0C3428(0);
}
