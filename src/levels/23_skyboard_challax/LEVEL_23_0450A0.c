/* LEVEL_23:0x0450A0 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_002025C0[];
extern int func_064338(char *object);
extern void func_0644E8(void *);

void func_0450A0(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_064338(D_002025C0);
        calls++;
        if (probe != 0)
            func_0644E8(D_002025C0);
    } while (calls == 0);
}
