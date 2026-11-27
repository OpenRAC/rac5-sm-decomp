/* LEVEL_06:0x17DDB8 -- walks eight bytes of a record, invoking a handler with each byte that is not the 0xFF sentinel. */
struct Obj {
    char pad_00[0x54];
    unsigned char *p_54;
};

void func_016B60(int a0, int a1);

void func_17DDB8(struct Obj *a0)
{
    unsigned char *p;
    unsigned int count;

    p = a0->p_54 + 0x21;
    for (count = 0; count < 8; count++, p++) {
        if (*p != 0xFF)
            func_016B60(*p, 0);
    }
}
