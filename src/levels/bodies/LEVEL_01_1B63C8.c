/* LEVEL_01:0x1B63C8 -- clears a slot value, sets a flag byte, calls two helpers. */
extern int func_1B6F28(unsigned char *);
extern void func_07C670(void *, int);
extern void func_144050(void *);

typedef struct Slot {
    int pad_00;
    int value;
    char pad_08[12];
} Slot;

void func_1B63C8(unsigned char *state, int index)
{
    unsigned char *base = *(unsigned char **)(state + 0x58);
    unsigned int off = index * sizeof(Slot);

    *(int *)(base + off + 4) = -1;
    *(base + index + 0x84) = 1;
    if (func_1B6F28(state) != 0) {
        void *item;
        func_07C670(state, 1);
        item = *(void **)(base + 0x80);
        if (item != 0)
            func_144050(item);
    }
}
