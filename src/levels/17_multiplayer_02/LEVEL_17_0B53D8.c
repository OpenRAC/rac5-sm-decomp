/* LEVEL_17:0x0B53D8 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_001A2288;
extern int D_001A2278;
extern int D_001A227C;
extern int D_001A2280;
extern unsigned int D_001A2284;
extern int func_10F1D0(int unused);
extern void func_0C5B88(int a0, int a1, int a2, int a3);
extern void func_0C5BC0(int a0);
extern unsigned int func_0C5690(void);
extern unsigned int func_0C56A0(void);
extern void func_0C5968(int a0);
extern void func_111358(char *record);

void func_0B53D8(char *o)
{
    unsigned int n;

    if (D_001A2288 != 0) {
        if (func_10F1D0(0) == 0) {
            func_0C5968(0);
            func_111358(o);
            return;
        }
    }
    func_0C5B88(3, D_001A2278, D_001A227C, D_001A2280);
    func_0C5BC0(10);
    D_001A2284 = func_0C5690();
    if (func_0C56A0() != 0) {
        n = func_0C5690();
        if (n != 0) {
            if (n < 3) {
                func_0C5968(0);
                func_111358(o);
            }
        } else {
            func_0C5BC0(5);
        }
    } else {
        func_111358(o);
    }
}
