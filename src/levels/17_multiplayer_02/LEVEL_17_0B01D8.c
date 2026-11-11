/* LEVEL_17:0x0B01D8 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001A04D4;
extern int D_001A04D0;
extern int D_001A04EC;
extern int D_001A04E8;
extern int D_001A04D8;
extern int D_001A04DC;
extern int D_0019E088;
extern unsigned char D_001A04E4;
extern int D_001A0540[][4];
extern char D_001A04F0[];
extern char D_001A0518[];
extern unsigned int func_07A030(int a);
extern int func_0A4590(int a);
extern void func_018518(int a, int b);
extern int func_0AB448(int a);
extern void func_0B9F80(int a);
extern int func_022210(int s, int a);
extern int func_022238(int s, int a);
extern int func_0219F0(int s, int a);
extern void func_0B0118(void);
extern void func_0A0880(char *p);
extern void func_0B0AD0(int a);

void func_0B01D8(void)
{
    unsigned int pad;
    int sel;
    pad = func_07A030(0x6B10);
    sel = D_001A0540[D_001A04D4][D_001A04D0];
    if (pad & 0x8) {
        func_0A4590(0);
        func_0A4590(7);
        func_018518(4, 0);
    } else if (pad & 0x1000) {
        func_0A4590(0);
        func_0A4590(6);
        func_0AB448(3);
    } else if (pad & 0x2000) {
        func_0B9F80(5);
        func_0AB448(10);
    } else if (pad & 0x8000) {
        if (sel && func_022210(sel, -1) && !func_022238(sel, -1)) {
            D_001A04E4 ^= 1;
            func_0A4590(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_022210(sel, -1) && !func_022238(sel, -1)) {
            if (func_0219F0(sel, -1)) {
                func_0A4590(0xC);
            } else {
                D_0019E088 = sel;
                D_001A04D8 = D_001A04D0;
                D_001A04DC = D_001A04D4;
                func_0A4590(1);
            }
        }
    } else if (!D_001A04E4) {
        if (pad & 0x10) {
            func_0A4590(8);
            D_001A04D4--;
            if (D_001A04D4 < 0) D_001A04D4 = D_001A04EC;
            func_0B0118();
        } else if (pad & 0x40) {
            func_0A4590(8);
            D_001A04D4++;
            if (D_001A04EC < D_001A04D4) D_001A04D4 = 0;
            func_0B0118();
        } else if (pad & 0x80) {
            func_0A4590(8);
            D_001A04D0--;
            if (D_001A04D0 < 0) D_001A04D0 = D_001A04E8;
            func_0B0118();
        } else if (pad & 0x20) {
            func_0A4590(8);
            D_001A04D0++;
            if (D_001A04E8 < D_001A04D0) D_001A04D0 = 0;
            func_0B0118();
        }
    }
    func_0A0880(D_001A04F0);
    func_0A0880(D_001A0518);
    func_0B0AD0(0);
}
