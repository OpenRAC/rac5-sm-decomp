/* LEVEL_22:0x0B56D8 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_0015FF90;
extern int D_0015FF80;
extern int D_0015FF84;
extern int D_0015FF88;
extern unsigned int D_0015FF8C;
extern int func_10A2B0(int unused);
extern void func_0C5490(int a0, int a1, int a2, int a3);
extern void func_0C54C8(int a0);
extern unsigned int func_0C4F98(void);
extern unsigned int func_0C4FA8(void);
extern void func_0C5270(int a0);
extern void func_10CBE0(char *record);

void func_0B56D8(char *o)
{
    unsigned int n;

    if (D_0015FF90 != 0) {
        if (func_10A2B0(0) == 0) {
            func_0C5270(0);
            func_10CBE0(o);
            return;
        }
    }
    func_0C5490(3, D_0015FF80, D_0015FF84, D_0015FF88);
    func_0C54C8(10);
    D_0015FF8C = func_0C4F98();
    if (func_0C4FA8() != 0) {
        n = func_0C4F98();
        if (n != 0) {
            if (n < 3) {
                func_0C5270(0);
                func_10CBE0(o);
            }
        } else {
            func_0C54C8(5);
        }
    } else {
        func_10CBE0(o);
    }
}
