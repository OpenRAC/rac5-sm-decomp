/* LEVEL_04.REL:0x015CD0: complete reviewed body; pure C. */
extern int func_024418(int wanted, unsigned int amount, int context);
extern void func_023738(char *record, int wanted);
extern void func_01AC60(int wanted);

int func_015CD0(char *record, int wanted, unsigned int amount)
{
    int result = func_024418(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_023738(record, wanted);
        func_01AC60(wanted);
    }
    return result;
}
