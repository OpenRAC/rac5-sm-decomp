/* LEVEL_05:0x028FB8 -- placement copy of LEVEL_01_02A340.c: runs an optional table callback, then clears one bit of a shared status word. */

struct Ent02A340 {
    char pad00[0x10];
    void (*f10)(int);
};

struct Obj02A340 {
    char pad000[0x1940];
    unsigned int f1940;
};

extern struct Ent02A340 D_001E36E8[];
extern struct Obj02A340 *D_001E332C;

void func_028FB8(int i)
{
    struct Ent02A340 *e;

    e = &D_001E36E8[i];
    if (e->f10 != 0) {
        e->f10(0);
    }
    D_001E332C->f1940 &= ~(1U << i);
}
