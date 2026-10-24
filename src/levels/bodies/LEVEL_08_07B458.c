/* LEVEL_08.REL:0x07B458 -- relays to func_07B2A0 with the entry of the
   16-byte table at 0x2629D8 selected by a1. */
typedef struct {
    char pad0[4];
    float f_04;
    char pad1[4];
    int f_0C;
} Ent;

extern Ent D_002629D8[];

void func_07B2A0(void *a0, int a1, int a2, int a3, float f0, float f1);

void func_07B458(void *a0, int a1, int a2, int a3, float f)
{
    Ent *e = &D_002629D8[a1];

    func_07B2A0(a0, a2, a3, e->f_0C, e->f_04, f);
}
