/* LEVEL_08.REL:0x17FF50: prepare a vector, create a record, preserve its owner.
   The measured callee ABI carries two integer and three float values. */
extern void func_088720(int owner, void *scratch, int a2, int a3);
extern char *func_17FE30(void *scratch, float x, float y,
                         int a1, float z, int a2);

char *func_17FF50(int owner, int a1, int a2, float x, float y, float z)
{
    char scratch[16];
    char *result;
    func_088720(owner, scratch, 0, 0);
    result = func_17FE30(scratch, x, y, a1, z, a2);
    if (result != 0)
        *(int *)(*(char **)(result + 0x58) + 0x14) = owner;
    return result;
}
