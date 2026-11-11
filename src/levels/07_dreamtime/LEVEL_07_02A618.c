/* LEVEL_07:0x02A618 -- placement copy of LEVEL_01_02A2D8.c: calls an optional per-slot callback then sets the slot bit in a global mask. */
typedef struct Entry_1F4368 {
    int pad_00[4];
    void (*callback)(int);
} Entry_1F4368;

typedef struct State_1F3FAC {
    char pad_0000[0x1940];
    unsigned int mask;
} State_1F3FAC;

extern Entry_1F4368 D_00208668[];
extern State_1F3FAC *D_002082AC;

void func_02A618(int index)
{
    Entry_1F4368 *entry = &D_00208668[index];

    if (entry->callback != 0)
        entry->callback(1);
    D_002082AC->mask |= 1 << index;
}
