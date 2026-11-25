/* LEVEL_18:0x014C70 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_0728A0(char *object, int mode);
extern unsigned int func_1981B8(float f);
extern int func_014CC0(char *record, int wanted, unsigned int amount);
int func_014C70(char *record, int wanted, char *object, int mode)
{
    return func_014CC0(record, wanted, func_1981B8(func_0728A0(object, mode)));
}
