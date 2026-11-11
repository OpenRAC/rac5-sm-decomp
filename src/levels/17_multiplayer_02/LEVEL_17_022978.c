extern int D_00195084;
extern int D_00195088;

void func_022978(void)
{
    int count = D_00195084 - 1;

    D_00195084 = count;
    if (count == 0)
        D_00195088 = 0;
}
