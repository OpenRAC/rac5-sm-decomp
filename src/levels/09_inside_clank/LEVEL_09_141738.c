/* LEVEL_09:0x141738 -- placement copy of LEVEL_01_148758.c: initializes the object's state block: runs the setup helper with a zero float, the fade update, then the per-index helper for indices 0 and 1. */
typedef struct {
    char pad_00[4];
    int id;
    float previous;
    float current;
    int data;
} State;

extern void func_1251A0(float scale, char *object, char *block);
extern void func_1256E0(State *state);
extern void func_125750(char *object, char *block, unsigned int index);

void func_141738(char *object)
{
    char *state = *(char **)(object + 0x58);
    unsigned int i;

    func_1251A0(0.0f, object, state + 0x2C);
    func_1256E0((State *)(state + 8));
    for (i = 0; i < 1; i++) {
        func_125750(object, state + 8, i);
    }
}
