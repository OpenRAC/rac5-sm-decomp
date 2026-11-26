/* LEVEL_06:0x0153D0 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_07A2C8(char *object, int mode);
extern unsigned int func_1DA1C0(float f);
extern int func_015420(char *record, int wanted, unsigned int amount);
int func_0153D0(char *record, int wanted, char *object, int mode)
{
    return func_015420(record, wanted, func_1DA1C0(func_07A2C8(object, mode)));
}
