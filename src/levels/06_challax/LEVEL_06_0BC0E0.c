/* LEVEL_06:0x0BC0E0 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001EDD5C;
extern int D_001EDD58;
extern int D_001EDD74;
extern int D_001EDD70;
extern int D_001EDD60;
extern int D_001EDD64;
extern int D_001EB908;
extern unsigned char D_001EDD6C;
extern int D_001EDDC8[][4];
extern char D_001EDD78[];
extern char D_001EDDA0[];
extern unsigned int func_080E98(int a);
extern int func_0B0848(int a);
extern void func_019028(int a, int b);
extern int func_0B7380(int a);
extern void func_0C5C40(int a);
extern int func_0235D0(int s, int a);
extern int func_0235F8(int s, int a);
extern int func_022CD0(int s, int a);
extern void func_0BC020(void);
extern void func_0AD260(char *p);
extern void func_0BC9D8(int a);

void func_0BC0E0(void)
{
    unsigned int pad;
    int sel;
    pad = func_080E98(0x6B10);
    sel = D_001EDDC8[D_001EDD5C][D_001EDD58];
    if (pad & 0x8) {
        func_0B0848(0);
        func_0B0848(7);
        func_019028(4, 0);
    } else if (pad & 0x1000) {
        func_0B0848(0);
        func_0B0848(6);
        func_0B7380(3);
    } else if (pad & 0x2000) {
        func_0C5C40(5);
        func_0B7380(10);
    } else if (pad & 0x8000) {
        if (sel && func_0235D0(sel, -1) && !func_0235F8(sel, -1)) {
            D_001EDD6C ^= 1;
            func_0B0848(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_0235D0(sel, -1) && !func_0235F8(sel, -1)) {
            if (func_022CD0(sel, -1)) {
                func_0B0848(0xC);
            } else {
                D_001EB908 = sel;
                D_001EDD60 = D_001EDD58;
                D_001EDD64 = D_001EDD5C;
                func_0B0848(1);
            }
        }
    } else if (!D_001EDD6C) {
        if (pad & 0x10) {
            func_0B0848(8);
            D_001EDD5C--;
            if (D_001EDD5C < 0) D_001EDD5C = D_001EDD74;
            func_0BC020();
        } else if (pad & 0x40) {
            func_0B0848(8);
            D_001EDD5C++;
            if (D_001EDD74 < D_001EDD5C) D_001EDD5C = 0;
            func_0BC020();
        } else if (pad & 0x80) {
            func_0B0848(8);
            D_001EDD58--;
            if (D_001EDD58 < 0) D_001EDD58 = D_001EDD70;
            func_0BC020();
        } else if (pad & 0x20) {
            func_0B0848(8);
            D_001EDD58++;
            if (D_001EDD70 < D_001EDD58) D_001EDD58 = 0;
            func_0BC020();
        }
    }
    func_0AD260(D_001EDD78);
    func_0AD260(D_001EDDA0);
    func_0BC9D8(0);
}
