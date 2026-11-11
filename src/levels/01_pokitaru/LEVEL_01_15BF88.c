/* LEVEL_01:0x15BF88 -- clears a field of a linked record, calls a helper with two record pointers and a signed byte, then calls a second helper with fixed constants. */
extern void func_15D498(void *a0, char *a1, signed char a2);
extern void func_07CD28(char *a0, int a1, int a2, int a3, float f1, float f2);

void func_15BF88(char *a0)
{
    char *p;
    char *q;

    p = *(char **)(a0 + 0x58);
    q = *(char **)(a0 + 0x54);
    *(int *)(p + 0x68) = 0;
    func_15D498(*(void **)(q + 0x34), a0, *(signed char *)(p + 0x7C));
    func_07CD28(a0, 12, 0, 1, 0.0f, 0.0f);
}
