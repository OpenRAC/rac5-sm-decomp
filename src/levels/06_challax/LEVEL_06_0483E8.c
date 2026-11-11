/* LEVEL_06:0x0483E8 -- placement copy of LEVEL_01_04BCC0.c: probes a record once, runs a follow-up when the probe is set, then checks a counter. */
extern char D_00221EC0[];
extern int func_067940(char *object);
extern void func_067AF0(void *);

void func_0483E8(void)
{
    int calls = 0;
    int probe;

    do {
        probe = func_067940(D_00221EC0);
        calls++;
        if (probe != 0)
            func_067AF0(D_00221EC0);
    } while (calls == 0);
}
