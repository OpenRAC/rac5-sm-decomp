/* LEVEL_15:0x0A1E28 -- placement copy of LEVEL_01_0C17E0.c: handles one frame of menu input: confirm, cancel, toggle and cursor movement. */
extern int D_00153ADC;
extern int D_00153AD8;
extern int D_00153AF4;
extern int D_00153AF0;
extern int D_00153AE0;
extern int D_00153AE4;
extern int D_00151688;
extern unsigned char D_00153AEC;
extern int D_00153B48[][4];
extern char D_00153AF8[];
extern char D_00153B20[];
extern unsigned int func_06C700(int a);
extern int func_096530(int a);
extern void func_016A10(int a, int b);
extern int func_09D0C8(int a);
extern void func_0AB988(int a);
extern int func_01F230(int s, int a);
extern int func_01F258(int s, int a);
extern int func_01E930(int s, int a);
extern void func_0A1D68(void);
extern void func_0932E8(char *p);
extern void func_0A2720(int a);

void func_0A1E28(void)
{
    unsigned int pad;
    int sel;
    pad = func_06C700(0x6B10);
    sel = D_00153B48[D_00153ADC][D_00153AD8];
    if (pad & 0x8) {
        func_096530(0);
        func_096530(7);
        func_016A10(4, 0);
    } else if (pad & 0x1000) {
        func_096530(0);
        func_096530(6);
        func_09D0C8(3);
    } else if (pad & 0x2000) {
        func_0AB988(5);
        func_09D0C8(10);
    } else if (pad & 0x8000) {
        if (sel && func_01F230(sel, -1) && !func_01F258(sel, -1)) {
            D_00153AEC ^= 1;
            func_096530(1);
        }
    } else if (pad & 0x4000) {
        if (sel && func_01F230(sel, -1) && !func_01F258(sel, -1)) {
            if (func_01E930(sel, -1)) {
                func_096530(0xC);
            } else {
                D_00151688 = sel;
                D_00153AE0 = D_00153AD8;
                D_00153AE4 = D_00153ADC;
                func_096530(1);
            }
        }
    } else if (!D_00153AEC) {
        if (pad & 0x10) {
            func_096530(8);
            D_00153ADC--;
            if (D_00153ADC < 0) D_00153ADC = D_00153AF4;
            func_0A1D68();
        } else if (pad & 0x40) {
            func_096530(8);
            D_00153ADC++;
            if (D_00153AF4 < D_00153ADC) D_00153ADC = 0;
            func_0A1D68();
        } else if (pad & 0x80) {
            func_096530(8);
            D_00153AD8--;
            if (D_00153AD8 < 0) D_00153AD8 = D_00153AF0;
            func_0A1D68();
        } else if (pad & 0x20) {
            func_096530(8);
            D_00153AD8++;
            if (D_00153AF0 < D_00153AD8) D_00153AD8 = 0;
            func_0A1D68();
        }
    }
    func_0932E8(D_00153AF8);
    func_0932E8(D_00153B20);
    func_0A2720(0);
}
