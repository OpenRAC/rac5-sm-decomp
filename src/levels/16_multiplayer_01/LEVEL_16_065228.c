/* LEVEL_16:065228 -- forwards the a1-th entry of the table D_001CDC28 to
   func_065070: two floats (its f_04 and the incoming one) and four words. */
typedef struct {
    int pad_00;
    float f_04;
    int pad_08;
    int f_0C;
} Entry;

extern Entry D_001CDC28[];

void func_065070(int a0, int a1, float f12, float f13, int a2, int a3);

void func_065228(int a0, int a1, float x, int a2, int a3)
{
    Entry *e = &D_001CDC28[a1];
    func_065070(a0, a2, e->f_04, x, a3, e->f_0C);
}
