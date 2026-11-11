/* LEVEL_03:0x1A1790 -- tests whether a value lies in a type-dependent range. */
extern int func_07CC20(char *a);
extern float func_07C888(void *a);

int func_1A1790(char *a)
{
    int t = func_07CC20(a);
    float f = func_07C888(a);
    if (t == 0x15) {
        if (f >= 0.5f && f <= 0.8333333f)
            return 1;
    } else {
        if (f >= 0.23333333f && f <= 0.56666667f)
            return 1;
    }
    return 0;
}
