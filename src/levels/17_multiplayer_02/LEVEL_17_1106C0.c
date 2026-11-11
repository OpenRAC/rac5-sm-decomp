/* LEVEL_17:0x1106C0 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_001A8190;

extern void func_110728(void);
extern void func_110AF0(void);

void func_1106C0(void)
{
    switch (D_001A8190) {
    case 1:
        func_110728();
        break;
    case 2:
        func_110AF0();
        break;
    case 0:
        break;
    }
}
