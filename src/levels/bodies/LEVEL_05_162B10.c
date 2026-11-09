/* LEVEL_05:0x162B10 -- finds the slot holding an id among eight and reports
   its index (0xFF when absent). */
typedef struct {
    int id;
    char pad[0x24];
} Slot;

typedef struct {
    char pad[0x58];
    Slot *slots;
} Obj;

int func_162B10(Obj *obj, int id, unsigned char *out)
{
    Slot *slot = obj->slots;
    unsigned int i;

    for (i = 0; i < 8; i++, slot++) {
        if (slot->id == id) {
            if (out != 0)
                *out = i;
            return 1;
        }
    }
    if (out != 0)
        *out = 0xFF;
    return 0;
}
