/* LEVEL_20:0x08E570 -- placement copy of LEVEL_16_0A3EF8.c: calls func_08E440 for the two indices 0 and 1 with the object. */
struct Obj;

extern void func_08E440(unsigned int i, struct Obj *o);

void func_08E570(struct Obj *o)
{
    unsigned int i;

    for (i = 0; i < 2; i++)
        func_08E440(i, o);
}
