/* FRONTEND:0x015EF8 -- slot lookup in the level object. */
int func_015EF8(int *p)
{
    int count = p[25];
    int other = p[24];

    if (other == count)
        return 0;
    return (int)p + count * 12;
}
