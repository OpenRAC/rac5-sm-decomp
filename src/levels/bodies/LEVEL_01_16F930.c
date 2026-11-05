struct Child_16F930 {
    char *members[12];
    int values[12];
    unsigned char count;
};

void func_16F930(char *object, char *member, int value)
{
    struct Child_16F930 *child = *(struct Child_16F930 **)(object + 0x58);
    child->members[child->count] = member;
    child->values[child->count] = value;
    *(unsigned int *)(member + 0x64) |= 0x430u;
    child->count++;
}
