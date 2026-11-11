/* LEVEL_09:0x182880 -- calls helpers on the object sub-record and returns one when the checks pass. */

extern char *func_019740(void);
extern int func_0810E8(void *a0, unsigned int a1);
extern void func_079108(char *a0, int a1);

int func_182880(char *a0)
{
    int r;
    char *s0;

    s0 = *(char **)(a0 + 0x54);
    if (*(void **)(s0 + 0x14) == 0) {
        return 0;
    }
    r = func_0810E8(*(void **)(s0 + 0x14), (unsigned int)func_019740());
    if (r == 0) {
        return 0;
    }
    func_079108(a0, 1);
    return 1;
}
