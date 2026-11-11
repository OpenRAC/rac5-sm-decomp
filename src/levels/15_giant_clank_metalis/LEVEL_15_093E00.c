/* LEVEL_15:0x093E00 -- calls itself once and returns its result (recursive stub). */
int func_093E00(void);

int func_093E00(void)
{
    int result = func_093E00();
    return result;
}
