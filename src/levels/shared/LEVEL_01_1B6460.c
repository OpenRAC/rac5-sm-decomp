/* LEVEL_01:0x1B6460 -- clears the five slot values (-1), object pointers and flags of the record and reports success. */
typedef struct { int value; char pad[0x10]; } Slot;
typedef struct {
    char pad0[4];
    Slot slot[5];
    char *obj[5];
    int f7C;
    int f80;
    unsigned char flag[5];
} State;

int func_1B6460(char *record)
{
    State *state = *(State **)(record + 0x58);
    unsigned int i = 0;

    do {
        state->slot[i].value = -1;
        state->obj[i] = 0;
        state->flag[i] = 0;
        i++;
    } while (i != 5);
    state->f7C = 0;
    state->f80 = 0;
    return 1;
}
