extern void func_06FE08(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_152C30(char *object)
{
    func_06FE08(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
