/* LEVEL_15:0x13BA10 -- forwards its arguments plus an int and two record floats to a helper. */
extern void func_13B918(int, int *, int, float, float);

void func_13BA10(int a, int *slot)
{
    char *record = (char *)*slot;
    int index = *(int *)(record + 0xc0);
    func_13B918(a, slot, *(int *)(record + 0xcc),
                *(float *)(record + index * 0x28 + 100),
                *(float *)(record + 0xd0));
}
