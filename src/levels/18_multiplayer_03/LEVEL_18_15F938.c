/* LEVEL_18:0x15F938 -- clears the word at offset 0x154 of the state of every flagged record in the object's record list. */
typedef struct {
    char pad_00[0x58];
    char *state_58;
    char pad_5C[8];
    unsigned int flags_64;
    char pad_68[0x18];
} Rec;

typedef struct {
    char pad_00[0xC];
    Rec *recs_0C;
    char pad_10[0x20];
    int count_30;
} List;

void func_15F938(List *list)
{
    Rec *rec = list->recs_0C;
    Rec *end = rec + list->count_30;

    for (; rec != end; rec++) {
        if ((rec->flags_64 & 1) != 0) {
            *(int *)(rec->state_58 + 0x154) = 0;
        }
    }
}
