/* LEVEL_21:0x013970 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_0651C8(char *object, int mode);
extern unsigned int func_13FF70(float f);
extern int func_0139C0(char *record, int wanted, unsigned int amount);
int func_013970(char *record, int wanted, char *object, int mode)
{
    return func_0139C0(record, wanted, func_13FF70(func_0651C8(object, mode)));
}
