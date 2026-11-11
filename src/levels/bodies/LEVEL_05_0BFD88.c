/* LEVEL_05:0x0BFD88 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001EE1DC;
extern int D_001EE1D8;
extern int D_001EE1F4;
extern int D_001EE1F0;
extern int D_001EE1E0;
extern int D_001EE1E4;
extern int D_001EBD88;
extern unsigned char D_001EE1EC;
extern int D_001EE248[][4];
extern char D_001EE1F8[];
extern char D_001EE220[];
extern unsigned int func_085978(int a);
extern int func_0B45C8(int a);
extern void func_019DC0(int a, int b);
extern int func_0BB028(int a);
extern void func_0C98E8(int a);
extern int func_023E60(int s, int a);
extern int func_023E88(int s, int a);
extern int func_023560(int s, int a);
extern void func_0BFCC8(void);
extern void func_0B0FE0(char *p);
extern void func_0C0680(int a);

void func_0BFD88(void)
{
    unsigned int pad;
    int sel;
    pad = func_085978(0x6B10);
    sel = D_001EE248[D_001EE1DC][D_001EE1D8];
    if (pad & 0x8) {
        func_0B45C8(0);
        func_0B45C8(7);
        func_019DC0(4, 0);
    } else if (pad & 0x1000) {
        func_0B45C8(0);
        func_0B45C8(6);
        func_0BB028(3);
    } else if (pad & 0x2000) {
        func_0C98E8(5);
        func_0BB028(10);
    } else if (pad & 0x8000) {
        if (sel && func_023E60(sel, -1) && !func_023E88(sel, -1)) {
            D_001EE1EC ^= 1;
            func_0B45C8(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_023E60(sel, -1) && !func_023E88(sel, -1)) {
            if (func_023560(sel, -1)) {
                func_0B45C8(0xC);
            } else {
                D_001EBD88 = sel;
                D_001EE1E0 = D_001EE1D8;
                D_001EE1E4 = D_001EE1DC;
                func_0B45C8(1);
            }
        }
    } else if (!D_001EE1EC) {
        if (pad & 0x10) {
            func_0B45C8(8);
            D_001EE1DC--;
            if (D_001EE1DC < 0) D_001EE1DC = D_001EE1F4;
            func_0BFCC8();
        } else if (pad & 0x40) {
            func_0B45C8(8);
            D_001EE1DC++;
            if (D_001EE1F4 < D_001EE1DC) D_001EE1DC = 0;
            func_0BFCC8();
        } else if (pad & 0x80) {
            func_0B45C8(8);
            D_001EE1D8--;
            if (D_001EE1D8 < 0) D_001EE1D8 = D_001EE1F0;
            func_0BFCC8();
        } else if (pad & 0x20) {
            func_0B45C8(8);
            D_001EE1D8++;
            if (D_001EE1F0 < D_001EE1D8) D_001EE1D8 = 0;
            func_0BFCC8();
        }
    }
    func_0B0FE0(D_001EE1F8);
    func_0B0FE0(D_001EE220);
    func_0C0680(0);
}
