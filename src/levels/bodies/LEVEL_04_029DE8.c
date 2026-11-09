/* LEVEL_04:0x029DE8 -- placement copy of LEVEL_01_02A340.c: runs an optional table callback, then clears one bit of a shared status word. */

struct Ent02A340 {
    char pad00[0x10];
    void (*f10)(int);
};

struct Obj02A340 {
    char pad000[0x1940];
    unsigned int f1940;
};

extern struct Ent02A340 D_0020D4E8[];
extern struct Obj02A340 *D_0020D12C;

void func_029DE8(int i)
{
    struct Ent02A340 *e;

    e = &D_0020D4E8[i];
    if (e->f10 != 0) {
        e->f10(0);
    }
    D_0020D12C->f1940 &= ~(1U << i);
}
