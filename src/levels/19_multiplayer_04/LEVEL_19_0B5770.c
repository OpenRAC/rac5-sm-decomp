/* LEVEL_19:0x0B5770 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_001AFE08;
extern int D_001AFDF8;
extern int D_001AFDFC;
extern int D_001AFE00;
extern unsigned int D_001AFE04;
extern int func_1102F8(int unused);
extern void func_0C5F20(int a0, int a1, int a2, int a3);
extern void func_0C5F58(int a0);
extern unsigned int func_0C5A28(void);
extern unsigned int func_0C5A38(void);
extern void func_0C5D00(int a0);
extern void func_112480(char *record);

void func_0B5770(char *o)
{
    unsigned int n;

    if (D_001AFE08 != 0) {
        if (func_1102F8(0) == 0) {
            func_0C5D00(0);
            func_112480(o);
            return;
        }
    }
    func_0C5F20(3, D_001AFDF8, D_001AFDFC, D_001AFE00);
    func_0C5F58(10);
    D_001AFE04 = func_0C5A28();
    if (func_0C5A38() != 0) {
        n = func_0C5A28();
        if (n != 0) {
            if (n < 3) {
                func_0C5D00(0);
                func_112480(o);
            }
        } else {
            func_0C5F58(5);
        }
    } else {
        func_112480(o);
    }
}
