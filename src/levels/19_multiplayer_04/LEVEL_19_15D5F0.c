/* LEVEL_19:0x15D5F0 -- drops every entry of the object's eleven-slot list (state +0x58) whose target has flag bits 2/4 set, then (when the global record exists and the state's handle word at +0x384 is empty) registers the record's four floats with the object, and finally runs the follow-up routine with the object and the float parameter. */
extern char *D_001BF054;

extern void func_073660(char *object, char *rec, int *slot, int z0, int z1, int z2, int z3, int one, float a, float b, float c, float d);
extern void func_15D7E0(char *object, float f);

void func_15D5F0(char *object, float f)
{
    int **list;
    int i;
    char *state;

    state = *(char **)(object + 0x58);
    list = (int **)state;
    i = 10;
    do {
        if (*list != 0 && (*(unsigned int *)((char *)*list + 0x64) & 6) != 0) {
            *list = 0;
        }
        i--;
        list++;
    } while (i >= 0);
    if (D_001BF054 != 0 && *(int *)(state + 0x384) == 0) {
        func_073660(object, D_001BF054, (int *)(state + 0x384), 0, 0, 0, 0, 1, *(float *)(D_001BF054 + 0x14), *(float *)(D_001BF054 + 0x18), *(float *)(D_001BF054 + 0x1C), *(float *)(D_001BF054 + 0x20));
    }
    func_15D7E0(object, f);
}
