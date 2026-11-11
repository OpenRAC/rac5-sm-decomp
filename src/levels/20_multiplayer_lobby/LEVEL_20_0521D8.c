/* LEVEL_20:0x0521D8 -- placement copy of LEVEL_16_058BB0.c: lazily acquires a handle, releases an optional resource, resets flags and runs three update hooks. */
extern int func_051C40(char *o, int z);
extern void func_0F7A30(void *p);
extern void func_053A00(char *o);
extern void func_052378(char *o);
extern void func_052260(char *o);

void func_0521D8(char *o)
{
    int v;

    if (*(int *)(o + 0xB8C) == 0) {
        v = func_051C40(o, 0);
        *(int *)(o + 0xB8C) = v;
        if (v == 0) {
            return;
        }
    }
    if (*(void **)(o + 0x5AC) != 0) {
        func_0F7A30(*(void **)(o + 0x5AC));
    }
    *(unsigned char *)(o + 0xBCB) = 0;
    *(unsigned char *)(o + 0x9CF) = 1;
    *(float *)(o + 0xFC4) = 0.13333334f;
    func_053A00(o);
    func_052378(o);
    func_052260(o);
}
