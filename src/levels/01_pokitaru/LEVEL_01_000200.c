/* LEVEL_01:0x000200 -- returns a word of the indexed table entry. */
typedef struct { char pad00[0x10]; int w10; } Ent;
extern Ent D_0020B500[];

int func_000200(int index)
{
    return D_0020B500[index].w10;
}
