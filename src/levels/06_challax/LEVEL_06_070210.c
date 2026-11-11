/* LEVEL_06.REL @ 0x070210 — 60 octets, lwc1 */
typedef struct {
    int f00;
    float f04;
    int f08;
    int f0C;
} Entry;

extern Entry D_00207BD8[];

void func_070058(int a0, int a1, int a2, int a3, float f12, float f13);

void func_070210(int a0, int a1, int a2, int a3, float f12)
{
    Entry *e = &D_00207BD8[a1];

    func_070058(a0, a2, a3, e->f0C, e->f04, f12);
}
