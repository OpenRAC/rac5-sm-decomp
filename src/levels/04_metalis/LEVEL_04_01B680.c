/* LEVEL_04:0x01B680 -- placement copy of LEVEL_01_01BA00.c: tells whether the shared lookup for slot 3 finds anything. */
extern int func_13B590(int a, int b);

int func_01B680(void)
{
    return func_13B590(0, 3) != 0;
}
