/* LEVEL_10:0x1731E8 -- calls a probe and returns a float result, or zero when the probe reports -1. */
extern int func_173020(char *object);
extern float func_07D0C0(void *a0);

float func_1731E8(void **record)
{
    if (func_173020((char *)record) == -1) return 0;
    return func_07D0C0(*record);
}
