/* LEVEL_07:0x1373D8 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_0021B380;

extern void func_137440(void);
extern void func_137808(void);

void func_1373D8(void)
{
    switch (D_0021B380) {
    case 1:
        func_137440();
        break;
    case 2:
        func_137808();
        break;
    case 0:
        break;
    }
}
