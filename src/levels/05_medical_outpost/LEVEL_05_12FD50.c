/* LEVEL_05:0x12FD50 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_001F6100;

extern void func_12FDB8(void);
extern void func_130180(void);

void func_12FD50(void)
{
    switch (D_001F6100) {
    case 1:
        func_12FDB8();
        break;
    case 2:
        func_130180();
        break;
    case 0:
        break;
    }
}
