/* LEVEL_22:0x0AFC90 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_0015E1DC;
extern int D_0015E1D8;
extern int D_0015E1F4;
extern int D_0015E1F0;
extern int D_0015E1E0;
extern int D_0015E1E4;
extern int D_0015BD88;
extern unsigned char D_0015E1EC;
extern int D_0015E248[][4];
extern char D_0015E1F8[];
extern char D_0015E220[];
extern unsigned int func_079438(int a);
extern int func_0A4570(int a);
extern void func_016E40(int a, int b);
extern int func_0AAF30(int a);
extern void func_0B9888(int a);
extern int func_01FD00(int s, int a);
extern int func_01FD28(int s, int a);
extern int func_01F400(int s, int a);
extern void func_0AFBD0(void);
extern void func_0A10A0(char *p);
extern void func_0B0588(int a);

void func_0AFC90(void)
{
    unsigned int pad;
    int sel;
    pad = func_079438(0x6B10);
    sel = D_0015E248[D_0015E1DC][D_0015E1D8];
    if (pad & 0x8) {
        func_0A4570(0);
        func_0A4570(7);
        func_016E40(4, 0);
    } else if (pad & 0x1000) {
        func_0A4570(0);
        func_0A4570(6);
        func_0AAF30(3);
    } else if (pad & 0x2000) {
        func_0B9888(5);
        func_0AAF30(10);
    } else if (pad & 0x8000) {
        if (sel && func_01FD00(sel, -1) && !func_01FD28(sel, -1)) {
            D_0015E1EC ^= 1;
            func_0A4570(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_01FD00(sel, -1) && !func_01FD28(sel, -1)) {
            if (func_01F400(sel, -1)) {
                func_0A4570(0xC);
            } else {
                D_0015BD88 = sel;
                D_0015E1E0 = D_0015E1D8;
                D_0015E1E4 = D_0015E1DC;
                func_0A4570(1);
            }
        }
    } else if (!D_0015E1EC) {
        if (pad & 0x10) {
            func_0A4570(8);
            D_0015E1DC--;
            if (D_0015E1DC < 0) D_0015E1DC = D_0015E1F4;
            func_0AFBD0();
        } else if (pad & 0x40) {
            func_0A4570(8);
            D_0015E1DC++;
            if (D_0015E1F4 < D_0015E1DC) D_0015E1DC = 0;
            func_0AFBD0();
        } else if (pad & 0x80) {
            func_0A4570(8);
            D_0015E1D8--;
            if (D_0015E1D8 < 0) D_0015E1D8 = D_0015E1F0;
            func_0AFBD0();
        } else if (pad & 0x20) {
            func_0A4570(8);
            D_0015E1D8++;
            if (D_0015E1F0 < D_0015E1D8) D_0015E1D8 = 0;
            func_0AFBD0();
        }
    }
    func_0A10A0(D_0015E1F8);
    func_0A10A0(D_0015E220);
    func_0B0588(0);
}
