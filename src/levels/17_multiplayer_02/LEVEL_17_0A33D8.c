/* LEVEL_17:0x0A33D8 -- placement copy of LEVEL_16_0A3EF8.c: calls func_0A32A8 for the two indices 0 and 1 with the object. */
struct Obj;

extern void func_0A32A8(unsigned int i, struct Obj *o);

void func_0A33D8(struct Obj *o)
{
    unsigned int i;

    for (i = 0; i < 2; i++)
        func_0A32A8(i, o);
}
