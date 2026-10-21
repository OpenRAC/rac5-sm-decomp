/* FRONTEND:0x022A58 -- tests the low bit of the first word. */
int func_022A58(int *p)
{
    return ((*p ^ 1) == 0);
}
