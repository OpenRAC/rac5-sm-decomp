/* LEVEL_09.REL:0x15C268: prepare a vector, create a record, preserve its owner.
   The measured callee ABI carries two integer and three float values. */
extern void func_07D230(int owner, void *scratch, int a2, int a3);
extern char *func_15C148(void *scratch, float x, float y,
                         int a1, float z, int a2);

char *func_15C268(int owner, int a1, int a2, float x, float y, float z)
{
    char scratch[16];
    char *result;
    func_07D230(owner, scratch, 0, 0);
    result = func_15C148(scratch, x, y, a1, z, a2);
    if (result != 0)
        *(int *)(*(char **)(result + 0x58) + 0x14) = owner;
    return result;
}
