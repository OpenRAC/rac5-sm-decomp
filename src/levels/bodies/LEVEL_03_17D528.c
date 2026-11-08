extern void func_07CB08(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_17D528(char *object)
{
    func_07CB08(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
