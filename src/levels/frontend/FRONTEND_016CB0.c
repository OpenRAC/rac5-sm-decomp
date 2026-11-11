/* FRONTEND:0x016CB0 -- calls the helper when the flag bit is set. */
void func_024180(int *, unsigned int);

void func_016CB0(int *p, unsigned int flag)
{
    if (flag & 1)
        func_024180(p, flag & 1);
}
