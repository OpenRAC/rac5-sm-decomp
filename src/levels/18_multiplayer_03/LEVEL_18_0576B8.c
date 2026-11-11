/* LEVEL_18:0x0576B8 -- placement copy of LEVEL_16_058BB0.c: lazily acquires a handle, releases an optional resource, resets flags and runs three update hooks. */
extern int func_057120(char *o, int z);
extern void func_124A28(void *p);
extern void func_058EE0(char *o);
extern void func_057858(char *o);
extern void func_057740(char *o);

void func_0576B8(char *o)
{
    int v;

    if (*(int *)(o + 0xB8C) == 0) {
        v = func_057120(o, 0);
        *(int *)(o + 0xB8C) = v;
        if (v == 0) {
            return;
        }
    }
    if (*(void **)(o + 0x5AC) != 0) {
        func_124A28(*(void **)(o + 0x5AC));
    }
    *(unsigned char *)(o + 0xBCB) = 0;
    *(unsigned char *)(o + 0x9CF) = 1;
    *(float *)(o + 0xFC4) = 0.13333334f;
    func_058EE0(o);
    func_057858(o);
    func_057740(o);
}
