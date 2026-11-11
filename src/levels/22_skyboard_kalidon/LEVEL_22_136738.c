/* LEVEL_22:0x136738 -- placement copy of LEVEL_03_1C4918.c: compares a global byte-sized selector with an argument and runs a fixed helper sequence on match. */
extern int D_00153CFC;
extern int func_1311E0(int a0, unsigned int a1);
extern void func_136AE0(int a0);
extern void func_133DA0(int a0);
extern void func_134EB8(int a0);
extern void func_135578(int a0);

void func_136738(int a0)
{
    if (D_00153CFC >= 0) {
        if (func_1311E0(0, *(unsigned char *)&D_00153CFC) != a0) {
            return;
        }
    }
    func_136AE0(a0);
    func_133DA0(a0);
    func_134EB8(a0);
    func_135578(a0);
}
