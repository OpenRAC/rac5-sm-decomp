/* LEVEL_01:0x0C36E8 -- reads a status word and runs the matching startup or fallback calls. */
extern unsigned int func_088020(int value);
extern int func_0B6020(int index);
extern void func_01A828(int a, int b);
extern int func_0BCB20(void);

void func_0C36E8(void)
{
    unsigned int v;

    v = func_088020(0x6B10);
    if (v & 8) {
        func_0B6020(7);
        func_0B6020(0);
        func_01A828(4, 0);
        return;
    }
    if (v & 0x1000) {
        func_0B6020(0);
        func_0B6020(7);
        if (func_0BCB20() == 0) {
            func_01A828(4, 0);
        }
    }
}
