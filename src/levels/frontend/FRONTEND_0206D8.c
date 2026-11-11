/* FRONTEND:0x0206D8 -- clears the field of the global object. */
extern int *D_0032814;

int func_020698(int mode, int arg);

int func_0206D8(void)
{
    if (func_020698(0x10, 0)) {
        int *p = D_0032814;

        if (p != 0)
            p[0x2C] = 0;
        return 1;
    }
    return 0;
}
