/* LEVEL_02:0x0C9FF8 -- placement copy of LEVEL_01_0C36E8.c: reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_08E950(int value);
extern void func_0BC930(int a);
extern void func_01B188(int a, int b);
extern int func_0C3430(void);

void func_0C9FF8(void)
{
    unsigned int v;

    v = func_08E950(0x6B10);
    if (v & 8) {
        func_0BC930(7);
        func_0BC930(0);
        func_01B188(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0BC930(0);
        func_0BC930(7);
        if (func_0C3430() == 0) {
            func_01B188(4, 0);
        }
    }
}
