extern void func_06F370(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_154D38(char *object)
{
    func_06F370(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
