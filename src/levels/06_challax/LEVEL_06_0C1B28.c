/* LEVEL_06:0x0C1B28 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_001EFB10;
extern int D_001EFB00;
extern int D_001EFB04;
extern int D_001EFB08;
extern unsigned int D_001EFB0C;
extern int func_1294B0(int unused);
extern void func_0D1850(int a0, int a1, int a2, int a3);
extern void func_0D1888(int a0);
extern unsigned int func_0D1358(void);
extern unsigned int func_0D1368(void);
extern void func_0D1630(int a0);
extern void func_12BDE0(char *record);

void func_0C1B28(char *o)
{
    unsigned int n;

    if (D_001EFB10 != 0) {
        if (func_1294B0(0) == 0) {
            func_0D1630(0);
            func_12BDE0(o);
            return;
        }
    }
    func_0D1850(3, D_001EFB00, D_001EFB04, D_001EFB08);
    func_0D1888(10);
    D_001EFB0C = func_0D1358();
    if (func_0D1368() != 0) {
        n = func_0D1358();
        if (n != 0) {
            if (n < 3) {
                func_0D1630(0);
                func_12BDE0(o);
            }
        } else {
            func_0D1888(5);
        }
    } else {
        func_12BDE0(o);
    }
}
