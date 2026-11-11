/* LEVEL_01:0x02A340 -- runs an optional table callback, then clears one bit of a shared status word. */

struct Ent02A340 {
    char pad00[0x10];
    void (*f10)(int);
};

struct Obj02A340 {
    char pad000[0x1940];
    unsigned int f1940;
};

extern struct Ent02A340 D_001F4368[];
extern struct Obj02A340 *D_001F3FAC;

void func_02A340(int i)
{
    struct Ent02A340 *e;

    e = &D_001F4368[i];
    if (e->f10 != 0) {
        e->f10(0);
    }
    D_001F3FAC->f1940 &= ~(1U << i);
}
