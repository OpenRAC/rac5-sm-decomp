/* LEVEL_02:0x1ABFC8 -- clears a 26-byte table from the end. */
extern char D_003AEDF0[26];

void func_1ABFC8(void)
{
    char *p;
    int i;
    p = D_003AEDF0;
    p += 25;
    for (i = 25; i >= 0; i--)
        *p-- = 0;
}
