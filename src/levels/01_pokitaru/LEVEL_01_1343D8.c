/* LEVEL_01:0x1343D8 -- runs the handler for the current global mode (1 or 2). */
extern int D_00207080;

extern void func_134440(void);
extern void func_134808(void);

void func_1343D8(void)
{
    switch (D_00207080) {
    case 1:
        func_134440();
        break;
    case 2:
        func_134808();
        break;
    case 0:
        break;
    }
}
