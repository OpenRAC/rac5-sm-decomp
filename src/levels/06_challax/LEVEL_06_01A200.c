/* LEVEL_06:0x01A200 -- placement copy of LEVEL_01_01BA00.c: tells whether the shared lookup for slot 3 finds anything. */
extern int func_125798(int a, int b);

int func_01A200(void)
{
    return func_125798(0, 3) != 0;
}
