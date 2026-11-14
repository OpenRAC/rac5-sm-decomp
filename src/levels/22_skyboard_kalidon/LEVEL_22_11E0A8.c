/* LEVEL_22:0x11E0A8 -- placement copy of LEVEL_01_148758.c: initializes the object's state block: runs the setup helper with a zero float, the fade update, then the per-index helper for indices 0 and 1. */
typedef struct {
    char pad_00[4];
    int id;
    float previous;
    float current;
    int data;
} State;

extern void func_102DF8(float scale, char *object, char *block);
extern void func_103338(State *state);
extern void func_1033A8(char *object, char *block, unsigned int index);

void func_11E0A8(char *object)
{
    char *state = *(char **)(object + 0x58);
    unsigned int i;

    func_102DF8(0.0f, object, state + 0x2C);
    func_103338((State *)(state + 8));
    for (i = 0; i < 1; i++) {
        func_1033A8(object, state + 8, i);
    }
}
