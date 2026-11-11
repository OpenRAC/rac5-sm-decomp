/* FRONTEND:0x021488 -- tests the state word of the global object at 0x3282C. */
extern int *D_0003282C;

int func_021488(void)
{
    return D_0003282C[1] == 0;
}
