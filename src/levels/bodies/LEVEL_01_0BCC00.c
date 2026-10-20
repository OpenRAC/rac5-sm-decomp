/* LEVEL_01:0x0BCC00 -- pops the last pushed word. */
int func_0BCC00(int *p)
{
    int count = p[8];

    if (count == 0)
        return 0;
    p[8] = count - 1;
    return 1;
}
