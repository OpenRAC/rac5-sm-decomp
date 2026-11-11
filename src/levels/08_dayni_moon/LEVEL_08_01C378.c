/* LEVEL_08:0x01C378 -- placement copy of LEVEL_01_01BA00.c: tells whether the shared lookup for slot 3 finds anything. */
extern int func_140648(int a, int b);

int func_01C378(void)
{
    return func_140648(0, 3) != 0;
}
