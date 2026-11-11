extern void func_07D358(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_17F1C8(char *object)
{
    func_07D358(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
