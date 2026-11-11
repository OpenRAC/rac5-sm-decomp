struct Owner { unsigned char pad[0x30]; int count; int entries[9]; };
int func_08BDA0(struct Owner *owner, int value)
{
    int index = owner->count;
    if (index >= 9)
        return 0;
    owner->entries[index] = value;
    owner->count = index + 1;
    return 1;
}
