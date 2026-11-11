/* LEVEL_18:0x10FDF8 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_001B6010;

extern void func_10FE60(void);
extern void func_110228(void);

void func_10FDF8(void)
{
    switch (D_001B6010) {
    case 1:
        func_10FE60();
        break;
    case 2:
        func_110228();
        break;
    case 0:
        break;
    }
}
