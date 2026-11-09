/* LEVEL_04:0x04D6E0 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_0024F950[];
extern int func_06C5E8(char *object);
extern void func_06C798(void *);

void func_04D6E0(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_06C5E8(D_0024F950);
        calls++;
        if (probe != 0)
            func_06C798(D_0024F950);
    } while (calls == 0);
}
