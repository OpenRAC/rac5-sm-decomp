/* FRONTEND:0x002660 -- forwards to ps2fioLseek and truncates its result. */
extern long long ps2fioLseek(int, long long, int);

int higIoLseek__Fiii(int param_1, int param_2, int param_3)
{
    return (int)ps2fioLseek(param_1, param_2, param_3);
}
