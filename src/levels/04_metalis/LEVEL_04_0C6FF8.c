/* LEVEL_04:0x0C6FF8 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_0021831C;
extern int D_00218318;
extern int D_00218334;
extern int D_00218330;
extern int D_00218320;
extern int D_00218324;
extern int D_00215EC8;
extern unsigned char D_0021832C;
extern int D_00218388[][4];
extern char D_00218338[];
extern char D_00218360[];
extern unsigned int func_08B2B8(int a);
extern int func_0BB828(int a);
extern void func_01A4A8(int a, int b);
extern int func_0C2298(int a);
extern void func_0D0BD8(int a);
extern int func_024B48(int s, int a);
extern int func_024B70(int s, int a);
extern int func_024248(int s, int a);
extern void func_0C6F38(void);
extern void func_0B7FD0(char *p);
extern void func_0C78F0(int a);

void func_0C6FF8(void)
{
    unsigned int pad;
    int sel;
    pad = func_08B2B8(0x6B10);
    sel = D_00218388[D_0021831C][D_00218318];
    if (pad & 0x8) {
        func_0BB828(0);
        func_0BB828(7);
        func_01A4A8(4, 0);
    } else if (pad & 0x1000) {
        func_0BB828(0);
        func_0BB828(6);
        func_0C2298(3);
    } else if (pad & 0x2000) {
        func_0D0BD8(5);
        func_0C2298(10);
    } else if (pad & 0x8000) {
        if (sel && func_024B48(sel, -1) && !func_024B70(sel, -1)) {
            D_0021832C ^= 1;
            func_0BB828(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_024B48(sel, -1) && !func_024B70(sel, -1)) {
            if (func_024248(sel, -1)) {
                func_0BB828(0xC);
            } else {
                D_00215EC8 = sel;
                D_00218320 = D_00218318;
                D_00218324 = D_0021831C;
                func_0BB828(1);
            }
        }
    } else if (!D_0021832C) {
        if (pad & 0x10) {
            func_0BB828(8);
            D_0021831C--;
            if (D_0021831C < 0) D_0021831C = D_00218334;
            func_0C6F38();
        } else if (pad & 0x40) {
            func_0BB828(8);
            D_0021831C++;
            if (D_00218334 < D_0021831C) D_0021831C = 0;
            func_0C6F38();
        } else if (pad & 0x80) {
            func_0BB828(8);
            D_00218318--;
            if (D_00218318 < 0) D_00218318 = D_00218330;
            func_0C6F38();
        } else if (pad & 0x20) {
            func_0BB828(8);
            D_00218318++;
            if (D_00218330 < D_00218318) D_00218318 = 0;
            func_0C6F38();
        }
    }
    func_0B7FD0(D_00218338);
    func_0B7FD0(D_00218360);
    func_0C78F0(0);
}
