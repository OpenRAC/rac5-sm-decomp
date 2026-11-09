/* LEVEL_19:0x027930 -- placement copy of LEVEL_01_02A340.c: runs an optional table callback, then clears one bit of a shared status word. */

struct Ent02A340 {
    char pad00[0x10];
    void (*f10)(int);
};

struct Obj02A340 {
    char pad000[0x1940];
    unsigned int f1940;
};

extern struct Ent02A340 D_001A3018[];
extern struct Obj02A340 *D_001A2C34;

void func_027930(int i)
{
    struct Ent02A340 *e;

    e = &D_001A3018[i];
    if (e->f10 != 0) {
        e->f10(0);
    }
    D_001A2C34->f1940 &= ~(1U << i);
}
