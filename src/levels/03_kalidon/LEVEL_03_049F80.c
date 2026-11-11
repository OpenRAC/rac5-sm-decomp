/* LEVEL_03:0x049F80 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_0024FFC0[];
extern int func_069508(char *object);
extern void func_0696B8(void *);

void func_049F80(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_069508(D_0024FFC0);
        calls++;
        if (probe != 0)
            func_0696B8(D_0024FFC0);
    } while (calls == 0);
}
