/* LEVEL_05:073378 -- forwards the a1-th entry of the table D_00207C58 to
   func_0731C0: two floats (its f_04 and the incoming one) and four words. */
typedef struct {
    int pad_00;
    float f_04;
    int pad_08;
    int f_0C;
} Entry;

extern Entry D_00207C58[];

void func_0731C0(int a0, int a1, float f12, float f13, int a2, int a3);

void func_073378(int a0, int a1, float x, int a2, int a3)
{
    Entry *e = &D_00207C58[a1];
    func_0731C0(a0, a2, e->f_04, x, a3, e->f_0C);
}
