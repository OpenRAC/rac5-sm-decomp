/* LEVEL_22:0x013B88 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_0730C0(char *object, int mode);
extern unsigned int func_14A630(float f);
extern int func_013BD8(char *record, int wanted, unsigned int amount);
int func_013B88(char *record, int wanted, char *object, int mode)
{
    return func_013BD8(record, wanted, func_14A630(func_0730C0(object, mode)));
}
