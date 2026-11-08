/* LEVEL_22.REL:0x013BD8: complete reviewed body; pure C. */
extern int func_01F5D0(int wanted, unsigned int amount, int context);
extern void func_01E9F8(char *record, int wanted);
extern void func_0175F8(int wanted);

int func_013BD8(char *record, int wanted, unsigned int amount)
{
    int result = func_01F5D0(wanted, amount, *(int *)(record + 0xF8));
    if (result != 0) {
        func_01E9F8(record, wanted);
        func_0175F8(wanted);
    }
    return result;
}
