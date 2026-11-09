/* LEVEL_10:0x04A3C8 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_0023E540[];
extern int func_0699B0(char *object);
extern void func_069B60(void *);

void func_04A3C8(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_0699B0(D_0023E540);
        calls++;
        if (probe != 0)
            func_069B60(D_0023E540);
    } while (calls == 0);
}
