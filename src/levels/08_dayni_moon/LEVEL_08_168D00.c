/* LEVEL_08:0x168D00 -- placement copy of LEVEL_02_160E08.c: sets a status bit on a sub-record and calls two helpers on the object. */

extern void func_168C78(void *a0);
extern void func_0845F8(void *a0, int a1);
extern void func_084758(void *a0);

void func_168D00(char *a0)
{
    char *p;

    func_168C78(a0);
    p = *(char **)(a0 + 0x58);
    *(unsigned int *)(p + 0x44) = *(unsigned int *)(p + 0x44) | 1;
    func_0845F8(a0, 1);
    if ((*(unsigned int *)(a0 + 0x64) & 6) != 0) {
        func_084758(a0);
    }
}
