/* LEVEL_16:0x016CE8 -- copies the sixteen floats of the indexed row of the
   global table into the argument's block. */
typedef struct {
    float f[16];
} Block;

typedef struct {
    Block b;
    char pad[16];
} Row;

typedef struct {
    char pad00[0x44];
    int origin;
} Base;

extern char D_001B48A0[];
extern char D_0019AE54[];

void func_016CE8(Row *dst)
{
    Base *base = *(Base **)D_001B48A0;
    Row *table = *(*(Row ***)D_0019AE54);
    int index = ((char *)dst - (char *)base->origin) >> 7;
    Block *b = &table[index].b;

    dst->b = *b;
}
