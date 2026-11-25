/* LEVEL_10:0x1A0370 -- creates one handle with fixed parameters and two hash-tagged handles, stores them into globals and sets a float field of the second record. */
typedef struct { char pad00[0x28]; float f28; } Rec;
extern int D_002A1480;
extern Rec *D_00211814;
extern int D_00211818;
extern int D_0021181C;
extern int func_0EC9A8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0, unsigned int t1, unsigned int t2);
extern void func_0EF088(int index);
extern int func_127EC8(unsigned int value);

void func_1A0370(void)
{
    D_0021181C = func_0EC9A8(0x10, D_002A1480, 0, 0, 0, 0, 1);
    func_0EF088(0);
    D_00211814 = (Rec *)func_127EC8(0xC381C0F8u);
    D_00211818 = func_127EC8(0x8F8F4AE5u);
    if (D_00211814 != 0) {
        D_00211814->f28 = -1.0f;
    }
}
