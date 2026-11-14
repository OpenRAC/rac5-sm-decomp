/* LEVEL_24:0x0C0AF0 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_001D1890;
extern int D_001D1880;
extern int D_001D1884;
extern int D_001D1888;
extern unsigned int D_001D188C;
extern int func_1288E0(int unused);
extern void func_0D08A8(int a0, int a1, int a2, int a3);
extern void func_0D08E0(int a0);
extern unsigned int func_0D03B0(void);
extern unsigned int func_0D03C0(void);
extern void func_0D0688(int a0);
extern void func_12B210(char *record);

void func_0C0AF0(char *o)
{
    unsigned int n;

    if (D_001D1890 != 0) {
        if (func_1288E0(0) == 0) {
            func_0D0688(0);
            func_12B210(o);
            return;
        }
    }
    func_0D08A8(3, D_001D1880, D_001D1884, D_001D1888);
    func_0D08E0(10);
    D_001D188C = func_0D03B0();
    if (func_0D03C0() != 0) {
        n = func_0D03B0();
        if (n != 0) {
            if (n < 3) {
                func_0D0688(0);
                func_12B210(o);
            }
        } else {
            func_0D08E0(5);
        }
    } else {
        func_12B210(o);
    }
}
