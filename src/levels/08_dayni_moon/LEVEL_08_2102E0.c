/* LEVEL_08:0x2102E0 -- placement copy of LEVEL_15_13BA10.c: forwards its arguments plus an int and two record floats to a helper. */
extern int func_210008(int, int *, void *, float, float);

void func_2102E0(int a, int *slot)
{
    char *record = (char *)*slot;
    int index = *(int *)(record + 0xc0);
    func_210008(a, slot, *(void **)(record + 0xcc),
                *(float *)(record + index * 0x28 + 100),
                *(float *)(record + 0xd0));
}
