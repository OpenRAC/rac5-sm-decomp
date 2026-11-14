/* LEVEL_19:0x000200 -- placement copy of LEVEL_01_000200.c: returns a word of the indexed table entry. */
typedef struct { char pad00[0x10]; int w10; } Ent;
extern Ent D_001C1680[];

int func_000200(int index)
{
    return D_001C1680[index].w10;
}
