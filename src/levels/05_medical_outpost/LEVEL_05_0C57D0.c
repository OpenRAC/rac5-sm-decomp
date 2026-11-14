/* LEVEL_05:0x0C57D0 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_001EFF90;
extern int D_001EFF80;
extern int D_001EFF84;
extern int D_001EFF88;
extern unsigned int D_001EFF8C;
extern int func_12E758(int unused);
extern void func_0D54F8(int a0, int a1, int a2, int a3);
extern void func_0D5530(int a0);
extern unsigned int func_0D5000(void);
extern unsigned int func_0D5010(void);
extern void func_0D52D8(int a0);
extern void func_131088(char *record);

void func_0C57D0(char *o)
{
    unsigned int n;

    if (D_001EFF90 != 0) {
        if (func_12E758(0) == 0) {
            func_0D52D8(0);
            func_131088(o);
            return;
        }
    }
    func_0D54F8(3, D_001EFF80, D_001EFF84, D_001EFF88);
    func_0D5530(10);
    D_001EFF8C = func_0D5000();
    if (func_0D5010() != 0) {
        n = func_0D5000();
        if (n != 0) {
            if (n < 3) {
                func_0D52D8(0);
                func_131088(o);
            }
        } else {
            func_0D5530(5);
        }
    } else {
        func_131088(o);
    }
}
