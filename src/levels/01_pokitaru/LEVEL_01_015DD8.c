/* LEVEL_01.REL:0x015DD8: complete reviewed body; pure C. */
extern int func_024798(int wanted, unsigned int amount, int context);
extern void func_023AB8(char *record, int wanted);
extern void func_01AFE0(int wanted);

int func_015DD8(char *record, int wanted, unsigned int amount)
{
    int result = func_024798(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_023AB8(record, wanted);
        func_01AFE0(wanted);
    }
    return result;
}
