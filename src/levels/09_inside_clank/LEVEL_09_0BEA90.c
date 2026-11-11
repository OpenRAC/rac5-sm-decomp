/* LEVEL_09:0x0BEA90 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_001E8C5C;
extern int D_001E8C58;
extern int D_001E8C74;
extern int D_001E8C70;
extern int D_001E8C60;
extern int D_001E8C64;
extern int D_001E6808;
extern unsigned char D_001E8C6C;
extern int D_001E8CC8[][4];
extern char D_001E8C78[];
extern char D_001E8CA0[];
extern unsigned int func_0849D8(int a);
extern int func_0B32D0(int a);
extern void func_019C18(int a, int b);
extern int func_0B9D30(int a);
extern void func_0C85F0(int a);
extern int func_0241C0(int s, int a);
extern int func_0241E8(int s, int a);
extern int func_0238C0(int s, int a);
extern void func_0BE9D0(void);
extern void func_0AFCD0(char *p);
extern void func_0BF388(int a);

void func_0BEA90(void)
{
    unsigned int pad;
    int sel;
    pad = func_0849D8(0x6B10);
    sel = D_001E8CC8[D_001E8C5C][D_001E8C58];
    if (pad & 0x8) {
        func_0B32D0(0);
        func_0B32D0(7);
        func_019C18(4, 0);
    } else if (pad & 0x1000) {
        func_0B32D0(0);
        func_0B32D0(6);
        func_0B9D30(3);
    } else if (pad & 0x2000) {
        func_0C85F0(5);
        func_0B9D30(10);
    } else if (pad & 0x8000) {
        if (sel && func_0241C0(sel, -1) && !func_0241E8(sel, -1)) {
            D_001E8C6C ^= 1;
            func_0B32D0(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_0241C0(sel, -1) && !func_0241E8(sel, -1)) {
            if (func_0238C0(sel, -1)) {
                func_0B32D0(0xC);
            } else {
                D_001E6808 = sel;
                D_001E8C60 = D_001E8C58;
                D_001E8C64 = D_001E8C5C;
                func_0B32D0(1);
            }
        }
    } else if (!D_001E8C6C) {
        if (pad & 0x10) {
            func_0B32D0(8);
            D_001E8C5C--;
            if (D_001E8C5C < 0) D_001E8C5C = D_001E8C74;
            func_0BE9D0();
        } else if (pad & 0x40) {
            func_0B32D0(8);
            D_001E8C5C++;
            if (D_001E8C74 < D_001E8C5C) D_001E8C5C = 0;
            func_0BE9D0();
        } else if (pad & 0x80) {
            func_0B32D0(8);
            D_001E8C58--;
            if (D_001E8C58 < 0) D_001E8C58 = D_001E8C70;
            func_0BE9D0();
        } else if (pad & 0x20) {
            func_0B32D0(8);
            D_001E8C58++;
            if (D_001E8C70 < D_001E8C58) D_001E8C58 = 0;
            func_0BE9D0();
        }
    }
    func_0AFCD0(D_001E8C78);
    func_0AFCD0(D_001E8CA0);
    func_0BF388(0);
}
