/* LEVEL_07:0x0C9288 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_00214F10;
extern int D_00214F00;
extern int D_00214F04;
extern int D_00214F08;
extern unsigned int D_00214F0C;
extern int func_135DE0(int unused);
extern void func_0D8FB0(int a0, int a1, int a2, int a3);
extern void func_0D8FE8(int a0);
extern unsigned int func_0D8AB8(void);
extern unsigned int func_0D8AC8(void);
extern void func_0D8D90(int a0);
extern void func_138710(char *record);

void func_0C9288(char *o)
{
    unsigned int n;

    if (D_00214F10 != 0) {
        if (func_135DE0(0) == 0) {
            func_0D8D90(0);
            func_138710(o);
            return;
        }
    }
    func_0D8FB0(3, D_00214F00, D_00214F04, D_00214F08);
    func_0D8FE8(10);
    D_00214F0C = func_0D8AB8();
    if (func_0D8AC8() != 0) {
        n = func_0D8AB8();
        if (n != 0) {
            if (n < 3) {
                func_0D8D90(0);
                func_138710(o);
            }
        } else {
            func_0D8FE8(5);
        }
    } else {
        func_138710(o);
    }
}
