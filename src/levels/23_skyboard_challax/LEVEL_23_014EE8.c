/* LEVEL_23.REL:0x014EE8: complete reviewed body; pure C. */
extern int func_022838(int wanted, unsigned int amount, int context);
extern void func_021C60(char *record, int wanted);
extern void func_019AF0(int wanted);

int func_014EE8(char *record, int wanted, unsigned int amount)
{
    int result = func_022838(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_021C60(record, wanted);
        func_019AF0(wanted);
    }
    return result;
}
