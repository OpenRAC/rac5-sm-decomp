/* LEVEL_23:0x1998C0 -- placement copy of LEVEL_01_1B63C8.c: clears a slot value, sets a flag byte, calls two helpers. */
extern int func_19A420(unsigned char *);
extern void func_073A88(void *, int);
extern void func_146F00(void *);

typedef struct Slot {
    int pad_00;
    int value;
    char pad_08[12];
} Slot;

void func_1998C0(unsigned char *state, int index)
{
    unsigned char *base = *(unsigned char **)(state + 0x58);
    unsigned int off = index * sizeof(Slot);

    *(int *)(base + off + 4) = -1;
    *(base + index + 0x84) = 1;
    if (func_19A420(state) != 0) {
        void *item;
        func_073A88(state, 1);
        item = *(void **)(base + 0x80);
        if (item != 0)
            func_146F00(item);
    }
}
