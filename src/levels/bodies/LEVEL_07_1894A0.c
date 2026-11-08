extern void func_07EE90(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_1894A0(char *object)
{
    func_07EE90(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
