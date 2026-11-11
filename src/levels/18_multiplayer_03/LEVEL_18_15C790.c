/* LEVEL_18:0x15C790 -- notifies the owner of every active slot whose key matches the given key. */
extern int func_10DFE0(int id);
extern void func_0A3318(void *a, void *b, void *c, void *d, void *e);

typedef struct Rec {
    char pad_00[0x1F0];
    unsigned int flags;
    int slots[2];
    unsigned char count;
} Rec;

void func_15C790(char *object, int *key)
{
    unsigned int i;
    Rec *record = *(Rec **)(object + 0x58);

    for (i = 0; i < record->count; i++) {
        if ((record->flags & 1) != 0 && record->slots[i] == *key) {
            int owner = *(int *)(record->slots[i] + 0xF4);

            func_0A3318((void *)(owner - 1), 0, (void *)func_10DFE0(0x252), 0, 0);
        }
    }
}
