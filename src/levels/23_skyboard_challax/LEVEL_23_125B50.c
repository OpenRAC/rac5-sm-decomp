/* LEVEL_23:0x125B50 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_001DA480;

extern void func_125BB8(void);
extern void func_125F80(void);

void func_125B50(void)
{
    switch (D_001DA480) {
    case 1:
        func_125BB8();
        break;
    case 2:
        func_125F80();
        break;
    case 0:
        break;
    }
}
