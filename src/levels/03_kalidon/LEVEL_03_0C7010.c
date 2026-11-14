/* LEVEL_03:0x0C7010 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_00219290;
extern int D_00219280;
extern int D_00219284;
extern int D_00219288;
extern unsigned int D_0021928C;
extern int func_1311A8(int unused);
extern void func_0D6D38(int a0, int a1, int a2, int a3);
extern void func_0D6D70(int a0);
extern unsigned int func_0D6840(void);
extern unsigned int func_0D6850(void);
extern void func_0D6B18(int a0);
extern void func_133AD8(char *record);

void func_0C7010(char *o)
{
    unsigned int n;

    if (D_00219290 != 0) {
        if (func_1311A8(0) == 0) {
            func_0D6B18(0);
            func_133AD8(o);
            return;
        }
    }
    func_0D6D38(3, D_00219280, D_00219284, D_00219288);
    func_0D6D70(10);
    D_0021928C = func_0D6840();
    if (func_0D6850() != 0) {
        n = func_0D6840();
        if (n != 0) {
            if (n < 3) {
                func_0D6B18(0);
                func_133AD8(o);
            }
        } else {
            func_0D6D70(5);
        }
    } else {
        func_133AD8(o);
    }
}
