/* LEVEL_05:0x0160C8 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_07DD88(char *object, int mode);
extern unsigned int func_1DA670(float f);
extern int func_016118(char *record, int wanted, unsigned int amount);
int func_0160C8(char *record, int wanted, char *object, int mode)
{
    return func_016118(record, wanted, func_1DA670(func_07DD88(object, mode)));
}
