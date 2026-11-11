/* LEVEL_04:0x1F2C80 -- sets two status bits from a flag, then calls a follow-up when the flag is clear. */
typedef struct {
    char pad_00[0x64];
    int f_64;
} Obj;

extern void func_085B68(Obj *a0);

void func_1F2C80(Obj *a0, int a1)
{
    unsigned char bit;
    int v;

    v = a0->f_64;
    bit = (unsigned char)((a1 ^ 1) & 1);
    v &= ~0x20;
    v |= bit << 5;
    v &= ~0x10;
    v |= bit << 4;
    a0->f_64 = v;
    if (a1 == 0) {
        func_085B68(a0);
    }
}
