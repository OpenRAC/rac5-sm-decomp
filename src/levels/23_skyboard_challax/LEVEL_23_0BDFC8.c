/* LEVEL_23:0x0BDFC8 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_001D4010;
extern int D_001D4000;
extern int D_001D4004;
extern int D_001D4008;
extern unsigned int D_001D400C;
extern int func_124558(int unused);
extern void func_0CDD80(int a0, int a1, int a2, int a3);
extern void func_0CDDB8(int a0);
extern unsigned int func_0CD888(void);
extern unsigned int func_0CD898(void);
extern void func_0CDB60(int a0);
extern void func_126E88(char *record);

void func_0BDFC8(char *o)
{
    unsigned int n;

    if (D_001D4010 != 0) {
        if (func_124558(0) == 0) {
            func_0CDB60(0);
            func_126E88(o);
            return;
        }
    }
    func_0CDD80(3, D_001D4000, D_001D4004, D_001D4008);
    func_0CDDB8(10);
    D_001D400C = func_0CD888();
    if (func_0CD898() != 0) {
        n = func_0CD888();
        if (n != 0) {
            if (n < 3) {
                func_0CDB60(0);
                func_126E88(o);
            }
        } else {
            func_0CDDB8(5);
        }
    } else {
        func_126E88(o);
    }
}
