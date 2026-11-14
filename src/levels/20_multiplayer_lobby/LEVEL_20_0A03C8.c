/* LEVEL_20:0x0A03C8 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_00111368;
extern int D_00111358;
extern int D_0011135C;
extern int D_00111360;
extern unsigned int D_00111364;
extern int func_0E2A40(int unused);
extern void func_0B0B78(int a0, int a1, int a2, int a3);
extern void func_0B0BB0(int a0);
extern unsigned int func_0B0680(void);
extern unsigned int func_0B0690(void);
extern void func_0B0958(int a0);
extern void func_0E4BC8(char *record);

void func_0A03C8(char *o)
{
    unsigned int n;

    if (D_00111368 != 0) {
        if (func_0E2A40(0) == 0) {
            func_0B0958(0);
            func_0E4BC8(o);
            return;
        }
    }
    func_0B0B78(3, D_00111358, D_0011135C, D_00111360);
    func_0B0BB0(10);
    D_00111364 = func_0B0680();
    if (func_0B0690() != 0) {
        n = func_0B0680();
        if (n != 0) {
            if (n < 3) {
                func_0B0958(0);
                func_0E4BC8(o);
            }
        } else {
            func_0B0BB0(5);
        }
    } else {
        func_0E4BC8(o);
    }
}
