struct Owner {
    unsigned char pad[0x1C];
    int count;
    unsigned char *children[2];
};

int func_08BDD8(struct Owner *owner, unsigned char *child)
{
    int index;
    if (owner->count >= 2)
        return 0;
    child[4] = ((unsigned char *)owner)[0x1C];
    index = owner->count;
    owner->children[index] = child;
    owner->count = index + 1;
    return 1;
}
