extern void func_080188(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_1883B8(char *object)
{
    func_080188(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
