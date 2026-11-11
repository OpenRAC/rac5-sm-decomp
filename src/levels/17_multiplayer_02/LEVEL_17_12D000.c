/* LEVEL_17:0x12D000 -- placement copy of LEVEL_16_12D5B0.c: initializes the object's state block: runs the setup helper with a zero float, the fade update, then the per-index helper for indices 0 and 1. */
typedef struct {
    char pad_00[4];
    int id;
    float previous;
    float current;
    int data;
} State;

extern void func_1085C0(float scale, char *object, char *block);
extern void func_108B00(State *state);
extern void func_108B70(char *object, char *block, unsigned int index);

void func_12D000(char *object)
{
    char *state = *(char **)(object + 0x58);
    unsigned int i;

    func_1085C0(0.0f, object, state + 0x2C);
    func_108B00((State *)(state + 8));
    for (i = 0; i < 2; i++) {
        func_108B70(object, state + 8, i);
    }
}
