/* LEVEL_04:0x034750 -- placement copy of LEVEL_02_037288.c: calls a virtual method on an owner, then visits two slots and clears the owner word. */

void func_162F38(void *a);

void func_034750(char *a0, int a1)
{
    char *s2;
    char *obj;
    char *inner;
    void (*fn)(void *, char *, int);
    int *s0;
    unsigned int s1;

    s2 = *(char **)(a0 + 0x58);
    obj = *(char **)s2;
    inner = *(char **)(obj + 0x58);
    fn = (void (*)(void *, char *, int))((void **)*(void **)inner)[1];
    s0 = (int *)(s2 + 4);
    fn(obj, a0, a1);
    s1 = 0;
    do {
        if (*s0 != 0) {
            func_162F38((void *)*s0);
        }
        s1++;
        s0++;
    } while (s1 < 2);
    *(int *)s2 = 0;
}
