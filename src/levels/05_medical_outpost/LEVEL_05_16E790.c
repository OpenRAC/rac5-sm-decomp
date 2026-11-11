extern void func_07A398(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_16E790(char *object)
{
    func_07A398(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
