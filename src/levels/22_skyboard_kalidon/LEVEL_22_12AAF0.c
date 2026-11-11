extern void func_06F718(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_12AAF0(char *object)
{
    func_06F718(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
