extern void func_06FCA8(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_158890(char *object)
{
    func_06FCA8(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
