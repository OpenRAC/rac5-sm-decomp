/* LEVEL_08:0x1FCBF8 -- placement copy of LEVEL_04_1D7C78.c: runs a helper on the object when the flag argument is zero. */
extern void func_0845F8(void *object, int flag);

void func_1FCBF8(void *object, int flag)
{
    if (flag == 0) {
        func_0845F8(object, 1);
    }
}
