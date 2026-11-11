/* LEVEL_08.REL:0x016838: complete reviewed body; pure C. */
extern int func_025018(int wanted, unsigned int amount, int context);
extern void func_0241D0(char *record, int wanted);
extern void func_01B958(int wanted);

int func_016838(char *record, int wanted, unsigned int amount)
{
    int result = func_025018(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_0241D0(record, wanted);
        func_01B958(wanted);
    }
    return result;
}
