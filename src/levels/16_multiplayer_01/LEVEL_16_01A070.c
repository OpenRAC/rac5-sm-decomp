/* LEVEL_16:0x01A070 -- placement copy of LEVEL_01_01BA00.c: tells whether the shared lookup for slot 3 finds anything. */
extern int func_10BF50(int a, int b);

int func_01A070(void)
{
    return func_10BF50(0, 3) != 0;
}
