/* LEVEL_16:0x0B0C98 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001ACED4;
extern int D_001ACED0;
extern int D_001ACEEC;
extern int D_001ACEE8;
extern int D_001ACED8;
extern int D_001ACEDC;
extern int D_001AAA88;
extern unsigned char D_001ACEE4;
extern int D_001ACF40[][4];
extern char D_001ACEF0[];
extern char D_001ACF18[];
extern unsigned int func_0795B8(int a);
extern int func_0A50B0(int a);
extern void func_018B98(int a, int b);
extern int func_0ABF08(int a);
extern void func_0BAA40(int a);
extern int func_022890(int s, int a);
extern int func_0228B8(int s, int a);
extern int func_022070(int s, int a);
extern void func_0B0BD8(void);
extern void func_0A1388(char *p);
extern void func_0B1590(int a);

void func_0B0C98(void)
{
    unsigned int pad;
    int sel;
    pad = func_0795B8(0x6B10);
    sel = D_001ACF40[D_001ACED4][D_001ACED0];
    if (pad & 0x8) {
        func_0A50B0(0);
        func_0A50B0(7);
        func_018B98(4, 0);
    } else if (pad & 0x1000) {
        func_0A50B0(0);
        func_0A50B0(6);
        func_0ABF08(3);
    } else if (pad & 0x2000) {
        func_0BAA40(5);
        func_0ABF08(10);
    } else if (pad & 0x8000) {
        if (sel && func_022890(sel, -1) && !func_0228B8(sel, -1)) {
            D_001ACEE4 ^= 1;
            func_0A50B0(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_022890(sel, -1) && !func_0228B8(sel, -1)) {
            if (func_022070(sel, -1)) {
                func_0A50B0(0xC);
            } else {
                D_001AAA88 = sel;
                D_001ACED8 = D_001ACED0;
                D_001ACEDC = D_001ACED4;
                func_0A50B0(1);
            }
        }
    } else if (!D_001ACEE4) {
        if (pad & 0x10) {
            func_0A50B0(8);
            D_001ACED4--;
            if (D_001ACED4 < 0) D_001ACED4 = D_001ACEEC;
            func_0B0BD8();
        } else if (pad & 0x40) {
            func_0A50B0(8);
            D_001ACED4++;
            if (D_001ACEEC < D_001ACED4) D_001ACED4 = 0;
            func_0B0BD8();
        } else if (pad & 0x80) {
            func_0A50B0(8);
            D_001ACED0--;
            if (D_001ACED0 < 0) D_001ACED0 = D_001ACEE8;
            func_0B0BD8();
        } else if (pad & 0x20) {
            func_0A50B0(8);
            D_001ACED0++;
            if (D_001ACEE8 < D_001ACED0) D_001ACED0 = 0;
            func_0B0BD8();
        }
    }
    func_0A1388(D_001ACEF0);
    func_0A1388(D_001ACF18);
    func_0B1590(0);
}
