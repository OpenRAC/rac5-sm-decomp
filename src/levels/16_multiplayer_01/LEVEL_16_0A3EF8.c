/* LEVEL_16:0x0A3EF8 -- calls func_0A3DC8 for the two indices 0 and 1 with the object. */
struct Obj;

extern void func_0A3DC8(unsigned int i, struct Obj *o);

void func_0A3EF8(struct Obj *o)
{
    unsigned int i;

    for (i = 0; i < 2; i++)
        func_0A3DC8(i, o);
}
