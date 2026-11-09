/* LEVEL_22:0x024870 -- placement copy of LEVEL_01_02A2D8.c: calls an optional per-slot callback then sets the slot bit in a global mask. */
typedef struct Entry_1F4368 {
    int pad_00[4];
    void (*callback)(int);
} Entry_1F4368;

typedef struct State_1F3FAC {
    char pad_0000[0x1940];
    unsigned int mask;
} State_1F3FAC;

extern Entry_1F4368 D_001536E8[];
extern State_1F3FAC *D_0015332C;

void func_024870(int index)
{
    Entry_1F4368 *entry = &D_001536E8[index];

    if (entry->callback != 0)
        entry->callback(1);
    D_0015332C->mask |= 1 << index;
}
