/* FRONTEND:0x021CB0 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_00032848;

extern void func_021D18(void);
extern void func_0220E0(void);

void func_021CB0(void)
{
    switch (D_00032848) {
    case 1:
        func_021D18();
        break;
    case 2:
        func_0220E0();
        break;
    case 0:
        break;
    }
}
