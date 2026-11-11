/* LEVEL_06:0x1930D0 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_037918(void *a, void *b);
extern void func_1937F0(void);

int func_1930D0(char *object)
{
    int result = func_037918(object, 0);

    if (result == 1)
        func_1937F0();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
