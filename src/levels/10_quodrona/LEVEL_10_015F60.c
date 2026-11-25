/* LEVEL_10:0x015F60 -- placement copy of LEVEL_01_015D88.c: converts the helper's float result for the object and mode into an integer amount, forwards it to the record helper and returns that result. */
extern float func_080D18(char *object, int mode);
extern unsigned int func_1F42D0(float f);
extern int func_015FB0(char *record, int wanted, unsigned int amount);
int func_015F60(char *record, int wanted, char *object, int mode)
{
    return func_015FB0(record, wanted, func_1F42D0(func_080D18(object, mode)));
}
