/* LEVEL_08:0x1CFBB0 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_040278(void *a, void *b);
extern void func_1D02D0(void);

int func_1CFBB0(char *object)
{
    int result = func_040278(object, 0);

    if (result == 1)
        func_1D02D0();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
