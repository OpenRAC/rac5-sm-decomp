/* LEVEL_17:0x0585E0 -- placement copy of LEVEL_16_058BB0.c: lazily acquires a handle, releases an optional resource, resets flags and runs three update hooks. */
extern int func_058048(char *o, int z);
extern void func_1253B0(void *p);
extern void func_059E08(char *o);
extern void func_058780(char *o);
extern void func_058668(char *o);

void func_0585E0(char *o)
{
    int v;

    if (*(int *)(o + 0xB8C) == 0) {
        v = func_058048(o, 0);
        *(int *)(o + 0xB8C) = v;
        if (v == 0) {
            return;
        }
    }
    if (*(void **)(o + 0x5AC) != 0) {
        func_1253B0(*(void **)(o + 0x5AC));
    }
    *(unsigned char *)(o + 0xBCB) = 0;
    *(unsigned char *)(o + 0x9CF) = 1;
    *(float *)(o + 0xFC4) = 0.13333334f;
    func_059E08(o);
    func_058780(o);
    func_058668(o);
}
