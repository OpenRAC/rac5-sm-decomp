/* LEVEL_07:0x04C290 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_0024AA40[];
extern int func_06B888(char *object);
extern void func_06BA38(void *);

void func_04C290(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_06B888(D_0024AA40);
        calls++;
        if (probe != 0)
            func_06BA38(D_0024AA40);
    } while (calls == 0);
}
