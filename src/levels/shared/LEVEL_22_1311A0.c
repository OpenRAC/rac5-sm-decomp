/* LEVEL_22:0x1311A0 -- returns the selected slot index when its slot word is set, else -1. */
struct Ch {
    char pad0[0x40];
    int slots[4];
    char pad1[0xAD - 0x50];
    unsigned char sel;
};

struct Obj {
    char pad0[0x58];
    struct Ch *child;
};

int func_1311A0(struct Obj *object)
{
    struct Ch *child = object->child;

    if (child == 0)
        return -1;
    if (child->sel < 4) {
        if (child->slots[child->sel] != 0)
            return child->sel;
    }
    return -1;
}
