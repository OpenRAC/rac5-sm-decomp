/* LEVEL_02:0x0C80F0 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_00213E1C;
extern int D_00213E18;
extern int D_00213E34;
extern int D_00213E30;
extern int D_00213E20;
extern int D_00213E24;
extern int D_002119C8;
extern unsigned char D_00213E2C;
extern int D_00213E88[][4];
extern char D_00213E38[];
extern char D_00213E60[];
extern unsigned int func_08E950(int a);
extern int func_0BC930(int a);
extern void func_01B188(int a, int b);
extern int func_0C3390(int a);
extern void func_0D1CD0(int a);
extern int func_025828(int s, int a);
extern int func_025850(int s, int a);
extern int func_024F28(int s, int a);
extern void func_0C8030(void);
extern void func_0B9330(char *p);
extern void func_0C89E8(int a);

void func_0C80F0(void)
{
    unsigned int pad;
    int sel;
    pad = func_08E950(0x6B10);
    sel = D_00213E88[D_00213E1C][D_00213E18];
    if (pad & 0x8) {
        func_0BC930(0);
        func_0BC930(7);
        func_01B188(4, 0);
    } else if (pad & 0x1000) {
        func_0BC930(0);
        func_0BC930(6);
        func_0C3390(3);
    } else if (pad & 0x2000) {
        func_0D1CD0(5);
        func_0C3390(10);
    } else if (pad & 0x8000) {
        if (sel && func_025828(sel, -1) && !func_025850(sel, -1)) {
            D_00213E2C ^= 1;
            func_0BC930(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_025828(sel, -1) && !func_025850(sel, -1)) {
            if (func_024F28(sel, -1)) {
                func_0BC930(0xC);
            } else {
                D_002119C8 = sel;
                D_00213E20 = D_00213E18;
                D_00213E24 = D_00213E1C;
                func_0BC930(1);
            }
        }
    } else if (!D_00213E2C) {
        if (pad & 0x10) {
            func_0BC930(8);
            D_00213E1C--;
            if (D_00213E1C < 0) D_00213E1C = D_00213E34;
            func_0C8030();
        } else if (pad & 0x40) {
            func_0BC930(8);
            D_00213E1C++;
            if (D_00213E34 < D_00213E1C) D_00213E1C = 0;
            func_0C8030();
        } else if (pad & 0x80) {
            func_0BC930(8);
            D_00213E18--;
            if (D_00213E18 < 0) D_00213E18 = D_00213E30;
            func_0C8030();
        } else if (pad & 0x20) {
            func_0BC930(8);
            D_00213E18++;
            if (D_00213E30 < D_00213E18) D_00213E18 = 0;
            func_0C8030();
        }
    }
    func_0B9330(D_00213E38);
    func_0B9330(D_00213E60);
    func_0C89E8(0);
}
