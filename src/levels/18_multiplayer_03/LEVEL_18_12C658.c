/* LEVEL_18:0x12C658 -- placement copy of LEVEL_16_12D5B0.c: initializes the object's state block: runs the setup helper with a zero float, the fade update, then the per-index helper for indices 0 and 1. */
typedef struct {
    char pad_00[4];
    int id;
    float previous;
    float current;
    int data;
} State;

extern void func_107CF8(float scale, char *object, char *block);
extern void func_108238(State *state);
extern void func_1082A8(char *object, char *block, unsigned int index);

void func_12C658(char *object)
{
    char *state = *(char **)(object + 0x58);
    unsigned int i;

    func_107CF8(0.0f, object, state + 0x2C);
    func_108238((State *)(state + 8));
    for (i = 0; i < 2; i++) {
        func_1082A8(object, state + 8, i);
    }
}
