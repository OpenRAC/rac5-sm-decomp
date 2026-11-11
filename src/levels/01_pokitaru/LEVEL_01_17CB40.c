/* LEVEL_01:0x17CB40 -- placement copy of LEVEL_02_192350.c. */
extern void func_07CD28(float scale, float zero, void *object,
                         int mode, int unused, int active);

void func_17CB40(char *object)
{
    func_07CD28(0.1f, 0.0f, object, 3, 0, 1);
    object[0x45] = 1;
}
