extern void func_074128(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_167E98(char *object)
{
    func_074128(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
