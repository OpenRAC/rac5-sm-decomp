extern void func_084C98(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_19E920(char *object)
{
    func_084C98(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
