/* LEVEL_01:0x000520 -- takes the record of the indexed slot and hands two
   of its fields to the shared code. */
typedef struct {
    float f;
    int i;
    float g;
    int j;
    int k;
} Rec;

extern Rec D_0020B500[];

void func_0004F8(int a, int b);

void func_000520(int index)
{
    Rec r;

    r = D_0020B500[index];
    func_0004F8(r.j, r.i);
}
