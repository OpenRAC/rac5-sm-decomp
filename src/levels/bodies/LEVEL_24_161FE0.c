extern void func_077408(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_161FE0(char *object)
{
    func_077408(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
