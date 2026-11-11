extern void func_076908(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_170040(char *object)
{
    func_076908(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
