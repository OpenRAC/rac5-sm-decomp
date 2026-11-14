/* LEVEL_18:0x0B4E70 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_001B0108;
extern int D_001B00F8;
extern int D_001B00FC;
extern int D_001B0100;
extern unsigned int D_001B0104;
extern int func_10E908(int unused);
extern void func_0C5620(int a0, int a1, int a2, int a3);
extern void func_0C5658(int a0);
extern unsigned int func_0C5128(void);
extern unsigned int func_0C5138(void);
extern void func_0C5400(int a0);
extern void func_110A90(char *record);

void func_0B4E70(char *o)
{
    unsigned int n;

    if (D_001B0108 != 0) {
        if (func_10E908(0) == 0) {
            func_0C5400(0);
            func_110A90(o);
            return;
        }
    }
    func_0C5620(3, D_001B00F8, D_001B00FC, D_001B0100);
    func_0C5658(10);
    D_001B0104 = func_0C5128();
    if (func_0C5138() != 0) {
        n = func_0C5128();
        if (n != 0) {
            if (n < 3) {
                func_0C5400(0);
                func_110A90(o);
            }
        } else {
            func_0C5658(5);
        }
    } else {
        func_110A90(o);
    }
}
