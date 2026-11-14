/* FRONTEND:0x017228 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_00030490;
extern int D_00030480;
extern int D_00030484;
extern int D_00030488;
extern unsigned int D_0003048C;
extern int func_0207B0(int unused);
extern void func_0140E0(int a0, int a1, int a2, int a3);
extern void func_014118(int a0);
extern unsigned int func_013BF0(void);
extern unsigned int func_013C00(void);
extern void func_013EC0(int a0);
extern void func_0229D0(char *record);

void func_017228(char *o)
{
    unsigned int n;

    if (D_00030490 != 0) {
        if (func_0207B0(0) == 0) {
            func_013EC0(0);
            func_0229D0(o);
            return;
        }
    }
    func_0140E0(3, D_00030480, D_00030484, D_00030488);
    func_014118(10);
    D_0003048C = func_013BF0();
    if (func_013C00() != 0) {
        n = func_013BF0();
        if (n != 0) {
            if (n < 3) {
                func_013EC0(0);
                func_0229D0(o);
            }
        } else {
            func_014118(5);
        }
    } else {
        func_0229D0(o);
    }
}
