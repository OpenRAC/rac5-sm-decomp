/* LEVEL_22:0x10B8A8 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_00166060;

extern void func_10B910(void);
extern void func_10BCD8(void);

void func_10B8A8(void)
{
    switch (D_00166060) {
    case 1:
        func_10B910();
        break;
    case 2:
        func_10BCD8();
        break;
    case 0:
        break;
    }
}
