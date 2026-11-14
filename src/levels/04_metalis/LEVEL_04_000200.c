/* LEVEL_04:0x000200 -- placement copy of LEVEL_01_000200.c: returns a word of the indexed table entry. */
typedef struct { char pad00[0x10]; int w10; } Ent;
extern Ent D_00224E80[];

int func_000200(int index)
{
    return D_00224E80[index].w10;
}
