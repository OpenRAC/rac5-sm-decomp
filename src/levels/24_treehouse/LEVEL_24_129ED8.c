/* LEVEL_24:0x129ED8 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_001D7D00;

extern void func_129F40(void);
extern void func_12A308(void);

void func_129ED8(void)
{
    switch (D_001D7D00) {
    case 1:
        func_129F40();
        break;
    case 2:
        func_12A308();
        break;
    case 0:
        break;
    }
}
