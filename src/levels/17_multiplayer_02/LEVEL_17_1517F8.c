extern void func_0703D8(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_1517F8(char *object)
{
    func_0703D8(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
