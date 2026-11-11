/* LEVEL_04:0x1D7C78 -- runs a helper on the object when the flag argument is zero. */
extern void func_07FAE8(void *object, int flag);

void func_1D7C78(void *object, int flag)
{
    if (flag == 0) {
        func_07FAE8(object, 1);
    }
}
