/* LEVEL_24:0x044CA8 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_00201040[];
extern int func_0641D0(char *object);
extern void func_064380(void *);

void func_044CA8(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_0641D0(D_00201040);
        calls++;
        if (probe != 0)
            func_064380(D_00201040);
    } while (calls == 0);
}
