/* LEVEL_02.REL:0x0169A0: complete reviewed body; pure C. */
extern int func_0250F8(int wanted, unsigned int amount, int context);
extern void func_024418(char *record, int wanted);
extern void func_01B940(int wanted);

int func_0169A0(char *record, int wanted, unsigned int amount)
{
    int result = func_0250F8(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_024418(record, wanted);
        func_01B940(wanted);
    }
    return result;
}
