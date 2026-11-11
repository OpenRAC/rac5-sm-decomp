/* FRONTEND:0x022FC8 -- returns the address of the last pushed word. */
int *func_022FC8(int *p)
{
    int count = p[8];

    if (count == 0)
        return 0;
    return &p[count - 1];
}
