/* LEVEL_10:0x01B080 -- placement copy of LEVEL_01_01BA00.c: tells whether the shared lookup for slot 3 finds anything. */
extern int func_12CF70(int a, int b);

int func_01B080(void)
{
    return func_12CF70(0, 3) != 0;
}
