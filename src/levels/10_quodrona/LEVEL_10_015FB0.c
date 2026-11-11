/* LEVEL_10.REL:0x015FB0: complete reviewed body; pure C. */
extern int func_024100(int wanted, unsigned int amount, int context);
extern void func_0232B8(char *record, int wanted);
extern void func_01A660(int wanted);

int func_015FB0(char *record, int wanted, unsigned int amount)
{
    int result = func_024100(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_0232B8(record, wanted);
        func_01A660(wanted);
    }
    return result;
}
