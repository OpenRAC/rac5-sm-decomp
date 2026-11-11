/* LEVEL_23:0x17E8E8 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_034650(void *a, void *b);
extern void func_17F008(void);

int func_17E8E8(char *object)
{
    int result = func_034650(object, 0);

    if (result == 1)
        func_17F008();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
