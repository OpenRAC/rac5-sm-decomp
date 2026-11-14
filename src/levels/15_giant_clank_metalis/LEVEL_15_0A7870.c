/* LEVEL_15:0x0A7870 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_00155890;
extern int D_00155880;
extern int D_00155884;
extern int D_00155888;
extern unsigned int D_0015588C;
extern int func_0F1CA8(int unused);
extern void func_0B7590(int a0, int a1, int a2, int a3);
extern void func_0B75C8(int a0);
extern unsigned int func_0B7098(void);
extern unsigned int func_0B70A8(void);
extern void func_0B7370(int a0);
extern void func_0F45D8(char *record);

void func_0A7870(char *o)
{
    unsigned int n;

    if (D_00155890 != 0) {
        if (func_0F1CA8(0) == 0) {
            func_0B7370(0);
            func_0F45D8(o);
            return;
        }
    }
    func_0B7590(3, D_00155880, D_00155884, D_00155888);
    func_0B75C8(10);
    D_0015588C = func_0B7098();
    if (func_0B70A8() != 0) {
        n = func_0B7098();
        if (n != 0) {
            if (n < 3) {
                func_0B7370(0);
                func_0F45D8(o);
            }
        } else {
            func_0B75C8(5);
        }
    } else {
        func_0F45D8(o);
    }
}
