/* LEVEL_01:0x01BA00 -- tells whether the shared lookup for slot 3 finds anything. */
extern int func_12F110(int a, int b);

int func_01BA00(void)
{
    return func_12F110(0, 3) != 0;
}
