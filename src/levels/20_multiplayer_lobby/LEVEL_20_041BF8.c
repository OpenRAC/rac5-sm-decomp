/* LEVEL_20:0x041BF8 -- placement copy of LEVEL_16_047AD8.c: compares two counters through helpers when a small field is in range. */
typedef struct {
    char pad_00[0xF4];
    int f_F4;
    char pad_F8[0xFC8 - 0xF8];
    int f_FC8;
} Obj;

extern unsigned int func_0E61C0(unsigned int a0);
extern unsigned int func_0E61F0(unsigned int a0);

int func_041BF8(Obj *a0)
{
    unsigned int x;
    unsigned int r1;
    unsigned int r2;

    x = (unsigned int)a0->f_FC8;
    if (x >= 0x13) {
        return 0;
    }
    r1 = func_0E61C0(x + 1);
    r2 = func_0E61F0((unsigned int)a0->f_F4 - 1);
    return r2 >= r1;
}
