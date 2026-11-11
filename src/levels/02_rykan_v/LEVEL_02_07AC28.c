/* LEVEL_02:0x07AC28 -- forwards a 16-byte table entry's fields to func_07AA70. */
typedef struct {
    char pad_00[0x04];
    float f_04;
    char pad_08[0x04];
    int i_0C;
} Entry;

extern char D_0022DCD8[];

extern void func_07AA70(int a0, int a1, int a2, int a3, float f12, float f13);

void func_07AC28(int a0, int a1, int a2, int a3, float x)
{
    Entry *e = (Entry *)(a1 * 16 + (int)D_0022DCD8);
    int w = e->i_0C;
    float f = e->f_04;

    func_07AA70(a0, a2, a3, w, f, x);
}
