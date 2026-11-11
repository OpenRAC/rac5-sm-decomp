/* FRONTEND:0x01F700 -- resets a small object when the flags allow it. */
struct Obj {
    char pad[0x38];
    unsigned int f38;
    unsigned int f3C;
    unsigned int f40;
};

void *memset(void *, int, unsigned int);

int func_01F700(struct Obj *p, unsigned int flags, unsigned int value,
                unsigned int extra)
{
    if (flags & 0xF)
        return 0;
    memset(p, 0, 0x44);
    p->f38 = flags;
    p->f3C = value;
    p->f40 = extra;
    return 1;
}
