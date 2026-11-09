/* LEVEL_19:0x058010 -- placement copy of LEVEL_16_058BB0.c: lazily acquires a handle, releases an optional resource, resets flags and runs three update hooks. */
extern int func_057A78(char *o, int z);
extern void func_1262B8(void *p);
extern void func_059838(char *o);
extern void func_0581B0(char *o);
extern void func_058098(char *o);

void func_058010(char *o)
{
    int v;

    if (*(int *)(o + 0xB8C) == 0) {
        v = func_057A78(o, 0);
        *(int *)(o + 0xB8C) = v;
        if (v == 0) {
            return;
        }
    }
    if (*(void **)(o + 0x5AC) != 0) {
        func_1262B8(*(void **)(o + 0x5AC));
    }
    *(unsigned char *)(o + 0xBCB) = 0;
    *(unsigned char *)(o + 0x9CF) = 1;
    *(float *)(o + 0xFC4) = 0.13333334f;
    func_059838(o);
    func_0581B0(o);
    func_058098(o);
}
