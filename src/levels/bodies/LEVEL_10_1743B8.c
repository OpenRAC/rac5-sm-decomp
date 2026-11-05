struct Meter_1743B8 {
    char pad_00[0xF0];
    int value;
};

struct Child_1743B8 {
    char pad_00[0x50];
    struct Meter_1743B8 meter;
};

int func_1743B8(char *object, int delta)
{
    struct Child_1743B8 *child = *(struct Child_1743B8 **)(object + 0x58);
    struct Meter_1743B8 *meter = &child->meter;
    int old = meter->value;
    unsigned int next = old + delta;
    meter->value = next;
    if (next > 100)
        meter->value = 100;
    return meter->value - old;
}
