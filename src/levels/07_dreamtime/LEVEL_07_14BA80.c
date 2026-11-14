/* LEVEL_07:0x14BA80 -- placement copy of LEVEL_01_148758.c: initializes the object's state block: runs the setup helper with a zero float, the fade update, then the per-index helper for indices 0 and 1. */
typedef struct {
    char pad_00[4];
    int id;
    float previous;
    float current;
    int data;
} State;

extern void func_12F208(float scale, char *object, char *block);
extern void func_12F748(State *state);
extern void func_12F7B8(char *object, char *block, unsigned int index);

void func_14BA80(char *object)
{
    char *state = *(char **)(object + 0x58);
    unsigned int i;

    func_12F208(0.0f, object, state + 0x2C);
    func_12F748((State *)(state + 8));
    for (i = 0; i < 1; i++) {
        func_12F7B8(object, state + 8, i);
    }
}
