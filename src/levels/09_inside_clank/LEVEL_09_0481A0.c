/* LEVEL_09:0x0481A0 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_0021C8C0[];
extern int func_067780(char *object);
extern void func_067930(void *);

void func_0481A0(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_067780(D_0021C8C0);
        calls++;
        if (probe != 0)
            func_067930(D_0021C8C0);
    } while (calls == 0);
}
