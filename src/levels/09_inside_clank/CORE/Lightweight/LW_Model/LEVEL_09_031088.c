/* LEVEL_09.REL @ 0x031088 — 72 octets, swc1 (deux fonctions) */
typedef struct {
    int f00;
    int f04;
    char pad08[0x78];
    float f80;
} Rec;

void func_030DD8(char *a0, int a1, int a2);

void func_031088(Rec *a0, int a1, int a2, int a3, int a4, int a5, float f12)
{
    a0->f04 = a4;
    a0->f80 = f12;
    a0->f00 = a5;
    func_030DD8((char *)a0 + 0x10, a2, a3);
}

int func_0310C0(int *a0, int *a1)
{
    return *a0 - *a1;
}
