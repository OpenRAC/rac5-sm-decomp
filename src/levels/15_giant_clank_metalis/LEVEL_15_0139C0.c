/* LEVEL_15.REL:0x0139C0: complete reviewed body; pure C. */
extern int func_01EB00(int wanted, unsigned int amount, int context);
extern void func_01DF40(char *record, int wanted);
extern void func_0171C8(int wanted);

int func_0139C0(char *record, int wanted, unsigned int amount)
{
    int result = func_01EB00(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_01DF40(record, wanted);
        func_0171C8(wanted);
    }
    return result;
}
