/* LEVEL_01.REL:0x1B0EC8: count collected entries that differ from the selected value. */
extern float func_1B0978(float value);
extern int func_01C3E8(void *scratch, int count, void *record, int a3,
                       int t0, int t1, int t2, float scale);

int func_1B0EC8(char *object)
{
    int scratch[32];
    char *record = object + 0x30;
    char *state = *(char **)(object + 0x58);
    float scale = func_1B0978(*(float *)(state + 0x10));
    int count = func_01C3E8(scratch, 0x20, record,
                            0x129, 0x101, 0x22, 1, scale);
    int result = count;
    if (count > 0) {
        int *cursor = scratch;
        int remaining = count;
        int target = *(int *)(*(char **)state + 0x59C);
        do {
            if (*cursor == target)
                result--;
            cursor++;
            remaining--;
        } while (remaining != 0);
    }
    return result;
}
