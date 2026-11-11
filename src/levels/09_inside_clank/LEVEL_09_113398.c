/* LEVEL_09:0x113398 -- copies the global position, hands one word to the helper. */
union Vec {
    float f[3];
    int i[3];
};

struct Global {
    union Vec pos;
};

extern struct Global D_00201998;
extern void func_028570(int, int, int);

void func_113398(int count, int flags, int index)
{
    union Vec v;

    v = D_00201998.pos;
    func_028570(count - 1, flags, v.i[index]);
}
