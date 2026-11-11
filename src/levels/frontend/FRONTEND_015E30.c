struct Slot {
    char pad00[0x60];
    unsigned int f60;
    unsigned int f64;
};

int func_015E30(struct Slot *s, int idx)
{
    if (s->f60 == s->f64)
        return 0;
    if (idx < s->f60)
        return (int)s + idx * 12;
    return 0;
}
