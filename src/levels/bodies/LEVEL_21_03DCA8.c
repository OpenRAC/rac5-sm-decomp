/* LEVEL_21:0x03DCA8 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_0017D2C0[];
extern int func_05BCB8(char *object);
extern void func_05BE58(void *);

void func_03DCA8(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_05BCB8(D_0017D2C0);
        calls++;
        if (probe != 0)
            func_05BE58(D_0017D2C0);
    } while (calls == 0);
}
