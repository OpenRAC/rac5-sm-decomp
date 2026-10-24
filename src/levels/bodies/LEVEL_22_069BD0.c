/* LEVEL_22.REL @ 0x069BD0 — 60 octets, lwc1 */
typedef struct {
    int f00;
    float f04;
    int f08;
    int f0C;
} Entry;

extern Entry D_001761D8[];

void func_069A18(int a0, int a1, int a2, int a3, float f12, float f13);

void func_069BD0(int a0, int a1, int a2, int a3, float f12)
{
    Entry *e = &D_001761D8[a1];

    func_069A18(a0, a2, a3, e->f0C, e->f04, f12);
}
