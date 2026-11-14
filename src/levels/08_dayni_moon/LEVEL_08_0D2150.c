/* LEVEL_08:0x0D2150 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_00249AD0;
extern int D_00249AC0;
extern int D_00249AC4;
extern int D_00249AC8;
extern unsigned int D_00249ACC;
extern int func_144318(int unused);
extern void func_0E1F10(int a0, int a1, int a2, int a3);
extern void func_0E1F48(int a0);
extern unsigned int func_0E1A18(void);
extern unsigned int func_0E1A28(void);
extern void func_0E1CF0(int a0);
extern void func_146C48(char *record);

void func_0D2150(char *o)
{
    unsigned int n;

    if (D_00249AD0 != 0) {
        if (func_144318(0) == 0) {
            func_0E1CF0(0);
            func_146C48(o);
            return;
        }
    }
    func_0E1F10(3, D_00249AC0, D_00249AC4, D_00249AC8);
    func_0E1F48(10);
    D_00249ACC = func_0E1A18();
    if (func_0E1A28() != 0) {
        n = func_0E1A18();
        if (n != 0) {
            if (n < 3) {
                func_0E1CF0(0);
                func_146C48(o);
            }
        } else {
            func_0E1F48(5);
        }
    } else {
        func_146C48(o);
    }
}
