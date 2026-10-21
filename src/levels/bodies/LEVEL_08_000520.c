/* LEVEL_08:0x000520 -- copies one record of the global table and calls the helper. */
struct Rec {
    int a;
    int b;
    int c;
    int d;
    int e;
};

extern struct Rec D_00255180[];
extern void func_0004F8(int, int);

void func_000520(int index)
{
    struct Rec rec = D_00255180[index];

    func_0004F8(rec.d, rec.b);
}
