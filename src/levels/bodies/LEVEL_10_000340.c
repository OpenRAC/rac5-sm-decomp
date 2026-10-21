/* LEVEL_10:0x000340 -- picks one row of the global table and hands two of
   its fields to the row handler. */
typedef struct {
    float weight;
    int a;
    int b;
    int c;
    int d;
} Row;

extern Row D_00214480[];

void func_000318(int first, int second);

void func_000340(int index)
{
    Row row = D_00214480[index];

    func_000318(row.c, row.a);
}
