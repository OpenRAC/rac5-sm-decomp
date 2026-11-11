/* LEVEL_07:0x1AF6A0 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_03B650(void *a, void *b);
extern void func_1AFDC0(void);

int func_1AF6A0(char *object)
{
    int result = func_03B650(object, 0);

    if (result == 1)
        func_1AFDC0();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
