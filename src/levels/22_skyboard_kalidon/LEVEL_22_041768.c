/* LEVEL_22:0x041768 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_00186D40[];
extern int func_060788(char *object);
extern void func_060938(void *);

void func_041768(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_060788(D_00186D40);
        calls++;
        if (probe != 0)
            func_060938(D_00186D40);
    } while (calls == 0);
}
