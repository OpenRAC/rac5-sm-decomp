/* LEVEL_05:0x19B7F8 -- placement copy of LEVEL_01_19D4F8.c: runs the state check on the object, kicks the follow-up on state 1 and flags the object. */
extern int func_038E30(void *a, void *b);
extern void func_19BF18(void);

int func_19B7F8(char *object)
{
    int result = func_038E30(object, 0);

    if (result == 1)
        func_19BF18();
    *(unsigned int *)(object + 0x64) |= 0x4000000;
    return result;
}
