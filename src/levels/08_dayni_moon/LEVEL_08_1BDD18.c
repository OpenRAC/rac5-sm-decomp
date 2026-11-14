/* LEVEL_08:0x1BDD18 -- placement copy of LEVEL_01_191B88.c: stores the result of the lookup helper in the record and, when it is nonzero, clears the object's state byte; reports whether it succeeded. */
extern unsigned int func_015290(int *p, unsigned int n);

struct Rec_191B88 {
    char pad_00[0x21];
    unsigned char b_21;
};

struct Obj_191B88 {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0xE];
};

int func_1BDD18(char *a0)
{
    struct Rec_191B88 *r = *(struct Rec_191B88 **)(a0 + 0x54);

    r->b_21 = func_015290((int *)r, 8);
    if (r->b_21 == 0) {
        return 0;
    }
    a0[0x45] = 0;
    return 1;
}
