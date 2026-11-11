/* LEVEL_02:0x160E08 -- sets a status bit on a sub-record and calls two helpers on the object. */

extern void func_160D80(void *a0);
extern void func_082F58(void *a0, int a1);
extern void func_0830B8(void *a0);

void func_160E08(char *a0)
{
    char *p;

    func_160D80(a0);
    p = *(char **)(a0 + 0x58);
    *(unsigned int *)(p + 0x44) = *(unsigned int *)(p + 0x44) | 1;
    func_082F58(a0, 1);
    if ((*(unsigned int *)(a0 + 0x64) & 6) != 0) {
        func_0830B8(a0);
    }
}
