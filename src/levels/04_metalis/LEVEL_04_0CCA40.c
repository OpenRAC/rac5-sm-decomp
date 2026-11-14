/* LEVEL_04:0x0CCA40 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_0021A0D0;
extern int D_0021A0C0;
extern int D_0021A0C4;
extern int D_0021A0C8;
extern unsigned int D_0021A0CC;
extern int func_13F260(int unused);
extern void func_0DC800(int a0, int a1, int a2, int a3);
extern void func_0DC838(int a0);
extern unsigned int func_0DC308(void);
extern unsigned int func_0DC318(void);
extern void func_0DC5E0(int a0);
extern void func_141B90(char *record);

void func_0CCA40(char *o)
{
    unsigned int n;

    if (D_0021A0D0 != 0) {
        if (func_13F260(0) == 0) {
            func_0DC5E0(0);
            func_141B90(o);
            return;
        }
    }
    func_0DC800(3, D_0021A0C0, D_0021A0C4, D_0021A0C8);
    func_0DC838(10);
    D_0021A0CC = func_0DC308();
    if (func_0DC318() != 0) {
        n = func_0DC308();
        if (n != 0) {
            if (n < 3) {
                func_0DC5E0(0);
                func_141B90(o);
            }
        } else {
            func_0DC838(5);
        }
    } else {
        func_141B90(o);
    }
}
