/* LEVEL_08:0x02A8B8 -- placement copy of LEVEL_01_02A340.c: runs an optional table callback, then clears one bit of a shared status word. */

struct Ent02A340 {
    char pad00[0x10];
    void (*f10)(int);
};

struct Obj02A340 {
    char pad000[0x1940];
    unsigned int f1940;
};

extern struct Ent02A340 D_0023CEE8[];
extern struct Obj02A340 *D_0023CB2C;

void func_02A8B8(int i)
{
    struct Ent02A340 *e;

    e = &D_0023CEE8[i];
    if (e->f10 != 0) {
        e->f10(0);
    }
    D_0023CB2C->f1940 &= ~(1U << i);
}
