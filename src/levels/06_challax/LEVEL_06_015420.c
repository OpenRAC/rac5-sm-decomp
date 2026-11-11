/* LEVEL_06.REL:0x015420: complete reviewed body; pure C. */
extern int func_022EA0(int wanted, unsigned int amount, int context);
extern void func_022058(char *record, int wanted);
extern void func_0197E0(int wanted);

int func_015420(char *record, int wanted, unsigned int amount)
{
    int result = func_022EA0(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_022058(record, wanted);
        func_0197E0(wanted);
    }
    return result;
}
