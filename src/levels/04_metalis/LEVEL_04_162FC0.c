/* LEVEL_04:0x162FC0 -- placement copy of LEVEL_02_160E08.c: sets a status bit on a sub-record and calls two helpers on the object. */

extern void func_162F38(void *a0);
extern void func_07FAE8(void *a0, int a1);
extern void func_07FC48(void *a0);

void func_162FC0(char *a0)
{
    char *p;

    func_162F38(a0);
    p = *(char **)(a0 + 0x58);
    *(unsigned int *)(p + 0x44) = *(unsigned int *)(p + 0x44) | 1;
    func_07FAE8(a0, 1);
    if ((*(unsigned int *)(a0 + 0x64) & 6) != 0) {
        func_07FC48(a0);
    }
}
