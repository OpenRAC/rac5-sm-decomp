/* LEVEL_08:0x050DC8 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_002843D0[];
extern int func_0703C8(char *object);
extern void func_070578(void *);

void func_050DC8(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_0703C8(D_002843D0);
        calls++;
        if (probe != 0)
            func_070578(D_002843D0);
    } while (calls == 0);
}
