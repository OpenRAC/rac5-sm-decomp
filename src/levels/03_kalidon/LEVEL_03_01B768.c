/* LEVEL_03:0x01B768 -- placement copy of LEVEL_01_01BA00.c: tells whether the shared lookup for slot 3 finds anything. */
extern int func_12D4D8(int a, int b);

int func_01B768(void)
{
    return func_12D4D8(0, 3) != 0;
}
