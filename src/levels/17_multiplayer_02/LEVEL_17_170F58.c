/* LEVEL_17:0x170F58 -- placement copy of LEVEL_01_1B63C8.c: clears a slot value, sets a flag byte, calls two helpers. */
extern int func_171C10(unsigned char *);
extern void func_06FF78(void *, int);
extern void func_1287B0(void *);

typedef struct Slot {
    int pad_00;
    int value;
    char pad_08[12];
} Slot;

void func_170F58(unsigned char *state, int index)
{
    unsigned char *base = *(unsigned char **)(state + 0x58);
    unsigned int off = index * sizeof(Slot);

    *(int *)(base + off + 4) = -1;
    *(base + index + 0x84) = 1;
    if (func_171C10(state) != 0) {
        void *item;
        func_06FF78(state, 1);
        item = *(void **)(base + 0x80);
        if (item != 0)
            func_1287B0(item);
    }
}
