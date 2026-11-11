/* LEVEL_10:0x038808 -- placement copy of LEVEL_02_03E8A0.c: calls a helper for each of six words in the object with the slot index and a zero-test flag. */
extern void func_038870(char *a0, unsigned int a1, unsigned int a2);

void func_038808(char *a0)
{
    int *p;
    unsigned int i;

    p = (int *)(a0 + 0x5B8);
    for (i = 0; i < 6; i++) {
        func_038870(a0, i, p[i] == 0);
    }
}
