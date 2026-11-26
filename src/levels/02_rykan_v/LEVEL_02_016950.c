/* LEVEL_02:0x016950 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_086FB8(char *object, int mode);
extern unsigned int func_1FFF10(float f);
extern int func_0169A0(char *record, int wanted, unsigned int amount);
int func_016950(char *record, int wanted, char *object, int mode)
{
    return func_0169A0(record, wanted, func_1FFF10(func_086FB8(object, mode)));
}
