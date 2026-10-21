/* LEVEL_20:0x000340 -- take one entry of the table of twenty-byte records
   and hand two of its fields to the routine. */
typedef struct {
    int v[5];
} Elem;

extern Elem D_121500[];
extern void func_000318(int a, int b);

void func_000340(int index)
{
    Elem e = D_121500[index];
    func_000318(e.v[3], e.v[1]);
}
