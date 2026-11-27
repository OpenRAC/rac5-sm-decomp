/* LEVEL_02:0x17BC18 -- selects the next occupied entry after the object's current one in a four-slot pool, wrapping the byte index; returns 255 when every slot is empty. */
typedef struct Obj {
    char pad_00[0x46];
    unsigned char current;
    char pad_47[0xD];
    void **slots;
} Obj;

int func_17BC18(Obj *o)
{
    void **slots = o->slots;
    unsigned int count = 0;
    unsigned char previous = o->current;
    int next;
    unsigned char index;

again:
    next = previous + 1;
    index = 0;
    if (next <= 3)
        index = next;
    previous = index;
    {
        void **slot = slots + index;

        if (*slot)
            return index;
    }
    if (++count < 4)
        goto again;
    return 255;
}
