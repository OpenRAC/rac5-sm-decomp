/* LEVEL_08.REL:2100F8 -- scales the second float by the factor at 0x4 of
   the record at 0x4 of the third argument and forwards everything to
   func_210008. */
typedef struct {
    char pad_00[0x4];
    float f_04;
} Factor;

typedef struct {
    char pad_00[0x4];
    Factor *f_04;
} Holder;

extern void func_210008(void *a0, void *a1, void *a2, float a3, float a4);

void func_2100F8(void *a0, void *a1, Holder *a2, float x, float y)
{
    func_210008(a0, a1, a2, x, y * a2->f_04->f_04);
}
