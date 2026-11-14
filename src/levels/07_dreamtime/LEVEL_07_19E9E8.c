/* LEVEL_07:0x19E9E8 -- flags the object when the given partner's definition carries the expected id; returns 1. */
int func_19E9E8(char *object, int a1, int a2, int a3, int a4, char *other)
{
    if (other != 0) {
        if (*(unsigned int *)(*(char **)(other + 0x40) + 0x24) == 0xF44DD93FU) {
            *(unsigned int *)(object + 0x64) |= 0x200000;
        }
    }
    return 1;
}
