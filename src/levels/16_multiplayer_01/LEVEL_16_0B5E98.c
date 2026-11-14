/* LEVEL_16:0x0B5E98 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_001AEC88;
extern int D_001AEC78;
extern int D_001AEC7C;
extern int D_001AEC80;
extern unsigned int D_001AEC84;
extern int func_10FC58(int unused);
extern void func_0C6648(int a0, int a1, int a2, int a3);
extern void func_0C6680(int a0);
extern unsigned int func_0C6150(void);
extern unsigned int func_0C6160(void);
extern void func_0C6428(int a0);
extern void func_111DE0(char *record);

void func_0B5E98(char *o)
{
    unsigned int n;

    if (D_001AEC88 != 0) {
        if (func_10FC58(0) == 0) {
            func_0C6428(0);
            func_111DE0(o);
            return;
        }
    }
    func_0C6648(3, D_001AEC78, D_001AEC7C, D_001AEC80);
    func_0C6680(10);
    D_001AEC84 = func_0C6150();
    if (func_0C6160() != 0) {
        n = func_0C6150();
        if (n != 0) {
            if (n < 3) {
                func_0C6428(0);
                func_111DE0(o);
            }
        } else {
            func_0C6680(5);
        }
    } else {
        func_111DE0(o);
    }
}
