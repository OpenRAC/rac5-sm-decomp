/* LEVEL_24.REL:0x014E70: complete reviewed body; pure C. */
extern int func_022570(int wanted, unsigned int amount, int context);
extern void func_021830(char *record, int wanted);
extern void func_0195D0(int wanted);

int func_014E70(char *record, int wanted, unsigned int amount)
{
    int result = func_022570(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_021830(record, wanted);
        func_0195D0(wanted);
    }
    return result;
}
