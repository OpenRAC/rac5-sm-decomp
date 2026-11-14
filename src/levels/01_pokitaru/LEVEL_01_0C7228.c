/* LEVEL_01:0x0C7228 -- state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_00200C10;
extern int D_00200C00;
extern int D_00200C04;
extern int D_00200C08;
extern unsigned int D_00200C0C;
extern int func_132DE0(int unused);
extern void func_0D6F50(int a0, int a1, int a2, int a3);
extern void func_0D6F88(int a0);
extern unsigned int func_0D6A58(void);
extern unsigned int func_0D6A68(void);
extern void func_0D6D30(int a0);
extern void func_135710(char *record);

void func_0C7228(char *o)
{
    unsigned int n;

    if (D_00200C10 != 0) {
        if (func_132DE0(0) == 0) {
            func_0D6D30(0);
            func_135710(o);
            return;
        }
    }
    func_0D6F50(3, D_00200C00, D_00200C04, D_00200C08);
    func_0D6F88(10);
    D_00200C0C = func_0D6A58();
    if (func_0D6A68() != 0) {
        n = func_0D6A58();
        if (n != 0) {
            if (n < 3) {
                func_0D6D30(0);
                func_135710(o);
            }
        } else {
            func_0D6F88(5);
        }
    } else {
        func_135710(o);
    }
}
