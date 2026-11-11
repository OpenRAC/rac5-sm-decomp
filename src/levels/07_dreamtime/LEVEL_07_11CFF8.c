/* LEVEL_07.REL 0x11CFF8 -- takes one float triple out of the shared table
   and hands one of its components to the shared updater. */
typedef union {
    float f[3];
    int i[3];
} Vec3;

extern Vec3 D_22CA98;
extern void func_029A48(int first, float *second, int third);

void func(int index, float *second, int slot)
{
    Vec3 tmp = D_22CA98;

    func_029A48(index - 1, second, tmp.i[slot]);
}
