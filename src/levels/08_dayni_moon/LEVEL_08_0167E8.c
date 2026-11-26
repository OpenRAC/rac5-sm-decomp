/* LEVEL_08:0x0167E8 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_088658(char *object, int mode);
extern unsigned int func_233E00(float f);
extern int func_016838(char *record, int wanted, unsigned int amount);
int func_0167E8(char *record, int wanted, char *object, int mode)
{
    return func_016838(record, wanted, func_233E00(func_088658(object, mode)));
}
