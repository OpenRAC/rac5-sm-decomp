struct Child_1661E0 {
    char *members[8];
    int values[8];
    char pad_40[0x7E];
    unsigned char count;
};

void func_1661E0(char *object, char *member, int value)
{
    struct Child_1661E0 *child = *(struct Child_1661E0 **)(object + 0x54);
    child->members[child->count] = member;
    child->values[child->count] = value;
    *(unsigned int *)(member + 0x64) |= 0x430u;
    child->count++;
}
