/* LEVEL_09:0x0C44D8 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_001EAA10;
extern int D_001EAA00;
extern int D_001EAA04;
extern int D_001EAA08;
extern unsigned int D_001EAA0C;
extern int func_12BD78(int unused);
extern void func_0D4200(int a0, int a1, int a2, int a3);
extern void func_0D4238(int a0);
extern unsigned int func_0D3D08(void);
extern unsigned int func_0D3D18(void);
extern void func_0D3FE0(int a0);
extern void func_12E6A8(char *record);

void func_0C44D8(char *o)
{
    unsigned int n;

    if (D_001EAA10 != 0) {
        if (func_12BD78(0) == 0) {
            func_0D3FE0(0);
            func_12E6A8(o);
            return;
        }
    }
    func_0D4200(3, D_001EAA00, D_001EAA04, D_001EAA08);
    func_0D4238(10);
    D_001EAA0C = func_0D3D08();
    if (func_0D3D18() != 0) {
        n = func_0D3D08();
        if (n != 0) {
            if (n < 3) {
                func_0D3FE0(0);
                func_12E6A8(o);
            }
        } else {
            func_0D4238(5);
        }
    } else {
        func_12E6A8(o);
    }
}
