/* LEVEL_15:0x0F32A0 -- placement copy of LEVEL_01_1343D8.c: runs the handler for the current global mode (1 or 2). */
extern int D_0015B9E0;

extern void func_0F3308(void);
extern void func_0F36D0(void);

void func_0F32A0(void)
{
    switch (D_0015B9E0) {
    case 1:
        func_0F3308();
        break;
    case 2:
        func_0F36D0();
        break;
    case 0:
        break;
    }
}
