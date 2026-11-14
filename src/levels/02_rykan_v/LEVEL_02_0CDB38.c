/* LEVEL_02:0x0CDB38 -- placement copy of LEVEL_01_0C7228.c: state step: bails out through the shared cleanup when the guard check fails, otherwise starts effect 3 with the stored parameters, queries the shared state twice and either finishes the object, plays effect 5 or runs the cleanup depending on the answers. */
extern unsigned char D_00215BD0;
extern int D_00215BC0;
extern int D_00215BC4;
extern int D_00215BC8;
extern unsigned int D_00215BCC;
extern int func_139190(int unused);
extern void func_0DD8E0(int a0, int a1, int a2, int a3);
extern void func_0DD918(int a0);
extern unsigned int func_0DD3E8(void);
extern unsigned int func_0DD3F8(void);
extern void func_0DD6C0(int a0);
extern void func_13BAC0(char *record);

void func_0CDB38(char *o)
{
    unsigned int n;

    if (D_00215BD0 != 0) {
        if (func_139190(0) == 0) {
            func_0DD6C0(0);
            func_13BAC0(o);
            return;
        }
    }
    func_0DD8E0(3, D_00215BC0, D_00215BC4, D_00215BC8);
    func_0DD918(10);
    D_00215BCC = func_0DD3E8();
    if (func_0DD3F8() != 0) {
        n = func_0DD3E8();
        if (n != 0) {
            if (n < 3) {
                func_0DD6C0(0);
                func_13BAC0(o);
            }
        } else {
            func_0DD918(5);
        }
    } else {
        func_13BAC0(o);
    }
}
