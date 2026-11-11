/* LEVEL_01:0x17E200 -- searches downward from half the smaller value for a common divisor, returning one when none exists. */
int func_17E200(int a0, int a1)
{
    int a2;
    int t;

    if (a1 < a0) {
        t = a0;
        a0 = a1;
        a1 = t;
    }
    if (a1 % a0 == 0) {
        return a0;
    }
    a2 = a0 / 2;
    while (a2 >= 2) {
        if (a0 % a2 == 0 && a1 % a2 == 0) {
            return a2;
        }
        a2 = a2 - 1;
    }
    return 1;
}
