/* LEVEL_06:0x12AAA8 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_001F5C80;

extern void func_12AB10(void);
extern void func_12AED8(void);

void func_12AAA8(void)
{
    switch (D_001F5C80) {
    case 1:
        func_12AB10();
        break;
    case 2:
        func_12AED8();
        break;
    case 0:
        break;
    }
}
