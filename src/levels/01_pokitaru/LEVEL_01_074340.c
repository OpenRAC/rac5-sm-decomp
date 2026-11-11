/* LEVEL_01.REL @ 0x074340 — 60 octets, lwc1 */
typedef struct {
    int f00;
    float f04;
    int f08;
    int f0C;
} Entry;

extern Entry D_00218D58[];

void func_074188(int a0, int a1, int a2, int a3, float f12, float f13);

void func_074340(int a0, int a1, int a2, int a3, float f12)
{
    Entry *e = &D_00218D58[a1];

    func_074188(a0, a2, a3, e->f0C, e->f04, f12);
}
