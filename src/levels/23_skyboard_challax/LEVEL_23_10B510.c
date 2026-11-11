/* LEVEL_23:0x10B510 -- copies the global position, hands one word to the helper. */
union Vec {
    float f[3];
    int i[3];
};

struct Global {
    union Vec pos;
};

extern struct Global D_001EAF18;
extern void func_027278(int, int, int);

void func_10B510(int count, int flags, int index)
{
    union Vec v;

    v = D_001EAF18.pos;
    func_027278(count - 1, flags, v.i[index]);
}
