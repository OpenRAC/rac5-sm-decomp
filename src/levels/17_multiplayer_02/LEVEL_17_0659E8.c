/* LEVEL_17:0x0659E8 -- entry through a local pointer. */
typedef struct {
    char pad_00[4];
    float f_04;
    char pad_08[4];
    int i_0C;
} Entry;

extern char D_001C10A8[];

extern void func_065830(int a0, int a1, int a2, int a3, float f12, float f13);

void func_0659E8(int a0, int a1, int a2, int a3, float x)
{
    Entry *e = (Entry *)(a1 * 16 + (int)D_001C10A8);
    int w = e->i_0C;
    float f = e->f_04;

    func_065830(a0, a2, a3, w, f, x);
}
