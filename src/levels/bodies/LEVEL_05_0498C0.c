/* LEVEL_05:0x0498C0 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_00220E40[];
extern int func_0687E8(char *object);
extern void func_068998(void *);

void func_0498C0(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_0687E8(D_00220E40);
        calls++;
        if (probe != 0)
            func_068998(D_00220E40);
    } while (calls == 0);
}
