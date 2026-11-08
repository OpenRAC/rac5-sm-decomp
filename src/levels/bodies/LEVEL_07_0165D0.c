/* LEVEL_07.REL:0x0165D0: complete reviewed body; pure C. */
extern int func_024D60(int wanted, unsigned int amount, int context);
extern void func_023F18(char *record, int wanted);
extern void func_01B6A0(int wanted);

int func_0165D0(char *record, int wanted, unsigned int amount)
{
    int result = func_024D60(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_023F18(record, wanted);
        func_01B6A0(wanted);
    }
    return result;
}
