/* LEVEL_24:0x014E20 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_07ADC8(char *object, int mode);
extern unsigned int func_1BBF50(float f);
extern int func_014E70(char *record, int wanted, unsigned int amount);
int func_014E20(char *record, int wanted, char *object, int mode)
{
    return func_014E70(record, wanted, func_1BBF50(func_07ADC8(object, mode)));
}
