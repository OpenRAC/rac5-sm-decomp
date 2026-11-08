/* LEVEL_01.REL:0x056D68: reviewed 124-byte candidate.
 * pinned C with gnu-ee-trial links 116 bytes; first differs at +18.
 * Retry: Recover the nullable indexed pointer selection and retail branch-likely
 * register lifetime while preserving the conditional float call.
 * No matching credit.
 */
extern void func_0588A8(float, char *, void *);

void func_056D68(char *state)
{
    char *root = *(char **)(state + 0xCA4);
    void *object;

    if (root != 0) {
        int index = *(int *)(state + 0xCC8);
        char *entry = *(char **)(root + 0x54);
        if (index >= 0)
            entry = *(char **)(entry + index * 4 + 0x18);
        object = *(void **)(entry + 0x10);
    } else
        object = 0;
    if (object != 0) {
        func_0588A8(0.10000001f, state, object);
        *(float *)(state + 0xCD8) = 60.0f;
    }
}
