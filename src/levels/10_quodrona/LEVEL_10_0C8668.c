/* LEVEL_10:0x0C8668 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_00209C10;
extern int D_00209C00;
extern int D_00209C04;
extern int D_00209C08;
extern unsigned int D_00209C0C;
extern int func_130C40(int unused);
extern void func_0D8390(int a0, int a1, int a2, int a3);
extern void func_0D83C8(int a0);
extern unsigned int func_0D7E98(void);
extern unsigned int func_0D7EA8(void);
extern void func_0D8170(int a0);
extern void func_133590(char *record);

void func_0C8668(char *o)
{
    unsigned int n;

    if (D_00209C10 != 0) {
        if (func_130C40(0) == 0) {
            func_0D8170(0);
            func_133590(o);
            return;
        }
    }
    func_0D8390(3, D_00209C00, D_00209C04, D_00209C08);
    func_0D83C8(10);
    D_00209C0C = func_0D7E98();
    if (func_0D7EA8() != 0) {
        n = func_0D7E98();
        if (n != 0) {
            if (n < 3) {
                func_0D8170(0);
                func_133590(o);
            }
        } else {
            func_0D83C8(5);
        }
    } else {
        func_133590(o);
    }
}
