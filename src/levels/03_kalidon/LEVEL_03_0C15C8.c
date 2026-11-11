/* LEVEL_03:0x0C15C8 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_002174DC;
extern int D_002174D8;
extern int D_002174F4;
extern int D_002174F0;
extern int D_002174E0;
extern int D_002174E4;
extern int D_00215088;
extern unsigned char D_002174EC;
extern int D_00217548[][4];
extern char D_002174F8[];
extern char D_00217520[];
extern unsigned int func_087E78(int a);
extern int func_0B5E08(int a);
extern void func_01A590(int a, int b);
extern int func_0BC868(int a);
extern void func_0CB128(int a);
extern int func_024D98(int s, int a);
extern int func_024DC0(int s, int a);
extern int func_024498(int s, int a);
extern void func_0C1508(void);
extern void func_0B2808(char *p);
extern void func_0C1EC0(int a);

void func_0C15C8(void)
{
    unsigned int pad;
    int sel;
    pad = func_087E78(0x6B10);
    sel = D_00217548[D_002174DC][D_002174D8];
    if (pad & 0x8) {
        func_0B5E08(0);
        func_0B5E08(7);
        func_01A590(4, 0);
    } else if (pad & 0x1000) {
        func_0B5E08(0);
        func_0B5E08(6);
        func_0BC868(3);
    } else if (pad & 0x2000) {
        func_0CB128(5);
        func_0BC868(10);
    } else if (pad & 0x8000) {
        if (sel && func_024D98(sel, -1) && !func_024DC0(sel, -1)) {
            D_002174EC ^= 1;
            func_0B5E08(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_024D98(sel, -1) && !func_024DC0(sel, -1)) {
            if (func_024498(sel, -1)) {
                func_0B5E08(0xC);
            } else {
                D_00215088 = sel;
                D_002174E0 = D_002174D8;
                D_002174E4 = D_002174DC;
                func_0B5E08(1);
            }
        }
    } else if (!D_002174EC) {
        if (pad & 0x10) {
            func_0B5E08(8);
            D_002174DC--;
            if (D_002174DC < 0) D_002174DC = D_002174F4;
            func_0C1508();
        } else if (pad & 0x40) {
            func_0B5E08(8);
            D_002174DC++;
            if (D_002174F4 < D_002174DC) D_002174DC = 0;
            func_0C1508();
        } else if (pad & 0x80) {
            func_0B5E08(8);
            D_002174D8--;
            if (D_002174D8 < 0) D_002174D8 = D_002174F0;
            func_0C1508();
        } else if (pad & 0x20) {
            func_0B5E08(8);
            D_002174D8++;
            if (D_002174F0 < D_002174D8) D_002174D8 = 0;
            func_0C1508();
        }
    }
    func_0B2808(D_002174F8);
    func_0B2808(D_00217520);
    func_0C1EC0(0);
}
