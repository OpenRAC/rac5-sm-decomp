/* LEVEL_01:0x1BF9F8 -- asks the helper about the object with its state block, first value and the global table; when it accepts, runs the follow-up with 1. */
extern char D_00229010[];
extern int func_1CF9B0(float f, char *state, char *object, int first, char *table);
extern void func_07C670(char *object, int a1);

void func_1BF9F8(char *object)
{
    if (func_1CF9B0(0.0f, *(char **)(object + 0x58), object, **(int **)(object + 0x54), D_00229010) != 0) {
        func_07C670(object, 1);
    }
}
