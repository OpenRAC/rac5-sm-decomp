/* LEVEL_01:0x015D88 -- converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_0806E8(char *object, int mode);
extern unsigned int func_1EB278(float f);
extern int func_015DD8(char *record, int wanted, unsigned int amount);
int func_015D88(char *record, int wanted, char *object, int mode)
{
    return func_015DD8(record, wanted, func_1EB278(func_0806E8(object, mode)));
}
