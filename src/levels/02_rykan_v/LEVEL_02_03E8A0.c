/* LEVEL_02:0x03E8A0 -- calls a helper for each of six words in the object with the slot index and a zero-test flag. */
extern void func_03E908(char *a0, unsigned int a1, unsigned int a2);

void func_03E8A0(char *a0)
{
    int *p;
    unsigned int i;

    p = (int *)(a0 + 0x5B8);
    for (i = 0; i < 6; i++) {
        func_03E908(a0, i, p[i] == 0);
    }
}
