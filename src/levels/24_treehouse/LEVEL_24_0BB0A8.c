/* LEVEL_24:0x0BB0A8 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001CFADC;
extern int D_001CFAD8;
extern int D_001CFAF4;
extern int D_001CFAF0;
extern int D_001CFAE0;
extern int D_001CFAE4;
extern int D_001CD688;
extern unsigned char D_001CFAEC;
extern int D_001CFB48[][4];
extern char D_001CFAF8[];
extern char D_001CFB20[];
extern unsigned int func_0812C0(int a);
extern int func_0AF8B0(int a);
extern void func_018E18(int a, int b);
extern int func_0B6348(int a);
extern void func_0C4C88(int a);
extern int func_022CA0(int s, int a);
extern int func_022CC8(int s, int a);
extern int func_0223A0(int s, int a);
extern void func_0BAFE8(void);
extern void func_0AC298(char *p);
extern void func_0BB9A0(int a);

void func_0BB0A8(void)
{
    unsigned int pad;
    int sel;
    pad = func_0812C0(0x6B10);
    sel = D_001CFB48[D_001CFADC][D_001CFAD8];
    if (pad & 0x8) {
        func_0AF8B0(0);
        func_0AF8B0(7);
        func_018E18(4, 0);
    } else if (pad & 0x1000) {
        func_0AF8B0(0);
        func_0AF8B0(6);
        func_0B6348(3);
    } else if (pad & 0x2000) {
        func_0C4C88(5);
        func_0B6348(10);
    } else if (pad & 0x8000) {
        if (sel && func_022CA0(sel, -1) && !func_022CC8(sel, -1)) {
            D_001CFAEC ^= 1;
            func_0AF8B0(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_022CA0(sel, -1) && !func_022CC8(sel, -1)) {
            if (func_0223A0(sel, -1)) {
                func_0AF8B0(0xC);
            } else {
                D_001CD688 = sel;
                D_001CFAE0 = D_001CFAD8;
                D_001CFAE4 = D_001CFADC;
                func_0AF8B0(1);
            }
        }
    } else if (!D_001CFAEC) {
        if (pad & 0x10) {
            func_0AF8B0(8);
            D_001CFADC--;
            if (D_001CFADC < 0) D_001CFADC = D_001CFAF4;
            func_0BAFE8();
        } else if (pad & 0x40) {
            func_0AF8B0(8);
            D_001CFADC++;
            if (D_001CFAF4 < D_001CFADC) D_001CFADC = 0;
            func_0BAFE8();
        } else if (pad & 0x80) {
            func_0AF8B0(8);
            D_001CFAD8--;
            if (D_001CFAD8 < 0) D_001CFAD8 = D_001CFAF0;
            func_0BAFE8();
        } else if (pad & 0x20) {
            func_0AF8B0(8);
            D_001CFAD8++;
            if (D_001CFAF0 < D_001CFAD8) D_001CFAD8 = 0;
            func_0BAFE8();
        }
    }
    func_0AC298(D_001CFAF8);
    func_0AC298(D_001CFB20);
    func_0BB9A0(0);
}
