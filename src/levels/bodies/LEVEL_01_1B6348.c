/* LEVEL_01:0x1B6348 -- marks up to five slot objects with state 12 and a -1 value when their flag is clear. */
typedef struct { int value; char pad[0x10]; } Slot;
typedef struct {
    char pad0[4];
    Slot slot[5];
    char *obj[5];
    char pad7c[8];
    unsigned char flag[5];
} State;

void func_1B6348(char *record)
{
    State *state = *(State **)(record + 0x58);
    unsigned int i = 0;
    do {
        char *object = state->obj[i];
        if (object != 0 && state->flag[i] == 0) {
            object[0x45] = 0x0c;
            state->slot[i].value = -1;
            state->flag[i] = 1;
        }
        i++;
    } while (i < 5);
}
