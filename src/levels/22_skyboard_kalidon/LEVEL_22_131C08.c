/* LEVEL_22:0x131C08 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_030E18(void *a, void *b);
extern void func_132328(void);

int func_131C08(char *object)
{
    int result = func_030E18(object, 0);

    if (result == 1)
        func_132328();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
