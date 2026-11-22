/* LEVEL_23:0x000520 -- one row of the level table is staged on the stack
   and two of its words are handed to the setup routine. */
typedef struct {
    int i[5];
} Row;

extern Row D_001DE680[];

unsigned int func_0004F8(int a, int b);

unsigned int func_000520(int index)
{
    Row row = D_001DE680[index];

    return func_0004F8(row.i[3], row.i[1]);
}
