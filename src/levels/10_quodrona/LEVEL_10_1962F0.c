/* LEVEL_10:0x1962F0 -- placement copy of LEVEL_02_1ABFC8.c: clears a 26-byte table from the end. */
extern char D_003A0268[26];

void func_1962F0(void)
{
    char *p;
    int i;
    p = D_003A0268;
    p += 25;
    for (i = 25; i >= 0; i--)
        *p-- = 0;
}
