/* LEVEL_01:0x04BCC0 -- probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_00235140[];
extern int func_06AB80(char *object);
extern void func_06AD30(void *);

void func_04BCC0(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_06AB80(D_00235140);
        calls++;
        if (probe != 0)
            func_06AD30(D_00235140);
    } while (calls == 0);
}
