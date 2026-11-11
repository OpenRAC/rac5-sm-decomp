/* LEVEL_23:0x0B8580 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001D225C;
extern int D_001D2258;
extern int D_001D2274;
extern int D_001D2270;
extern int D_001D2260;
extern int D_001D2264;
extern int D_001CFE08;
extern unsigned char D_001D226C;
extern int D_001D22C8[][4];
extern char D_001D2278[];
extern char D_001D22A0[];
extern unsigned int func_07DEE0(int a);
extern int func_0ACDE8(int a);
extern void func_019338(int a, int b);
extern int func_0B3820(int a);
extern void func_0C2178(int a);
extern int func_022F68(int s, int a);
extern int func_022F90(int s, int a);
extern int func_022668(int s, int a);
extern void func_0B84C0(void);
extern void func_0A9800(char *p);
extern void func_0B8E78(int a);

void func_0B8580(void)
{
    unsigned int pad;
    int sel;
    pad = func_07DEE0(0x6B10);
    sel = D_001D22C8[D_001D225C][D_001D2258];
    if (pad & 0x8) {
        func_0ACDE8(0);
        func_0ACDE8(7);
        func_019338(4, 0);
    } else if (pad & 0x1000) {
        func_0ACDE8(0);
        func_0ACDE8(6);
        func_0B3820(3);
    } else if (pad & 0x2000) {
        func_0C2178(5);
        func_0B3820(10);
    } else if (pad & 0x8000) {
        if (sel && func_022F68(sel, -1) && !func_022F90(sel, -1)) {
            D_001D226C ^= 1;
            func_0ACDE8(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_022F68(sel, -1) && !func_022F90(sel, -1)) {
            if (func_022668(sel, -1)) {
                func_0ACDE8(0xC);
            } else {
                D_001CFE08 = sel;
                D_001D2260 = D_001D2258;
                D_001D2264 = D_001D225C;
                func_0ACDE8(1);
            }
        }
    } else if (!D_001D226C) {
        if (pad & 0x10) {
            func_0ACDE8(8);
            D_001D225C--;
            if (D_001D225C < 0) D_001D225C = D_001D2274;
            func_0B84C0();
        } else if (pad & 0x40) {
            func_0ACDE8(8);
            D_001D225C++;
            if (D_001D2274 < D_001D225C) D_001D225C = 0;
            func_0B84C0();
        } else if (pad & 0x80) {
            func_0ACDE8(8);
            D_001D2258--;
            if (D_001D2258 < 0) D_001D2258 = D_001D2270;
            func_0B84C0();
        } else if (pad & 0x20) {
            func_0ACDE8(8);
            D_001D2258++;
            if (D_001D2270 < D_001D2258) D_001D2258 = 0;
            func_0B84C0();
        }
    }
    func_0A9800(D_001D2278);
    func_0A9800(D_001D22A0);
    func_0B8E78(0);
}
