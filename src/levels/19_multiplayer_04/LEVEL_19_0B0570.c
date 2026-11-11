/* LEVEL_19:0x0B0570 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001AE054;
extern int D_001AE050;
extern int D_001AE06C;
extern int D_001AE068;
extern int D_001AE058;
extern int D_001AE05C;
extern int D_001ABC08;
extern unsigned char D_001AE064;
extern int D_001AE0C0[][4];
extern char D_001AE070[];
extern char D_001AE098[];
extern unsigned int func_079AA0(int a);
extern int func_0A4928(int a);
extern void func_018898(int a, int b);
extern int func_0AB7E0(int a);
extern void func_0BA318(int a);
extern int func_0224D0(int s, int a);
extern int func_0224F8(int s, int a);
extern int func_021CB0(int s, int a);
extern void func_0B04B0(void);
extern void func_0A0C18(char *p);
extern void func_0B0E68(int a);

void func_0B0570(void)
{
    unsigned int pad;
    int sel;
    pad = func_079AA0(0x6B10);
    sel = D_001AE0C0[D_001AE054][D_001AE050];
    if (pad & 0x8) {
        func_0A4928(0);
        func_0A4928(7);
        func_018898(4, 0);
    } else if (pad & 0x1000) {
        func_0A4928(0);
        func_0A4928(6);
        func_0AB7E0(3);
    } else if (pad & 0x2000) {
        func_0BA318(5);
        func_0AB7E0(10);
    } else if (pad & 0x8000) {
        if (sel && func_0224D0(sel, -1) && !func_0224F8(sel, -1)) {
            D_001AE064 ^= 1;
            func_0A4928(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_0224D0(sel, -1) && !func_0224F8(sel, -1)) {
            if (func_021CB0(sel, -1)) {
                func_0A4928(0xC);
            } else {
                D_001ABC08 = sel;
                D_001AE058 = D_001AE050;
                D_001AE05C = D_001AE054;
                func_0A4928(1);
            }
        }
    } else if (!D_001AE064) {
        if (pad & 0x10) {
            func_0A4928(8);
            D_001AE054--;
            if (D_001AE054 < 0) D_001AE054 = D_001AE06C;
            func_0B04B0();
        } else if (pad & 0x40) {
            func_0A4928(8);
            D_001AE054++;
            if (D_001AE06C < D_001AE054) D_001AE054 = 0;
            func_0B04B0();
        } else if (pad & 0x80) {
            func_0A4928(8);
            D_001AE050--;
            if (D_001AE050 < 0) D_001AE050 = D_001AE068;
            func_0B04B0();
        } else if (pad & 0x20) {
            func_0A4928(8);
            D_001AE050++;
            if (D_001AE068 < D_001AE050) D_001AE050 = 0;
            func_0B04B0();
        }
    }
    func_0A0C18(D_001AE070);
    func_0A0C18(D_001AE098);
    func_0B0E68(0);
}
