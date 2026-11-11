/* FRONTEND:0x001808 -- clears the flag byte, then an empty helper. */
extern char D_00020000[];

void func_001808(void)
{
    D_00020000[0x7D76] = 0;
}

void func_001818(void)
{
}
