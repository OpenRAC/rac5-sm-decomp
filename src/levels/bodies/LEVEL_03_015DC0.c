/* LEVEL_03.REL:0x015DC0: complete reviewed body; pure C. */
extern int func_024668(int wanted, unsigned int amount, int context);
extern void func_023820(char *record, int wanted);
extern void func_01AD48(int wanted);

int func_015DC0(char *record, int wanted, unsigned int amount)
{
    int result = func_024668(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_023820(record, wanted);
        func_01AD48(wanted);
    }
    return result;
}
