/* LEVEL_06:0x0286C0 -- placement copy of LEVEL_01_02A2D8.c: calls an optional per-slot callback then sets the slot bit in a global mask. */
typedef struct Entry_1F4368 {
    int pad_00[4];
    void (*callback)(int);
} Entry_1F4368;

typedef struct State_1F3FAC {
    char pad_0000[0x1940];
    unsigned int mask;
} State_1F3FAC;

extern Entry_1F4368 D_001E3268[];
extern State_1F3FAC *D_001E2EAC;

void func_0286C0(int index)
{
    Entry_1F4368 *entry = &D_001E3268[index];

    if (entry->callback != 0)
        entry->callback(1);
    D_001E2EAC->mask |= 1 << index;
}
