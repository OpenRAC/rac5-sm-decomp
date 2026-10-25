/* LEVEL_07.REL:0x1D7FB8 -- fills the local plane from the caller's record,
   hands the two halves to the intersection routine and returns the tail of
   the object. */
typedef struct {
    char pad0[0x2C];
    float f_2C;
} Src;

void func_12BF50(char *out, int a1, int a2, float f0, float f1, float f2);
void func_034B00(int a0, char *a1, char *a2);

char *func_1D7FB8(char *a0, int a1, int a2, Src *a3, int a4)
{
    char buf[0x30];
    float f = a3->f_2C;

    func_12BF50(buf, 0, a4, f, f, f);
    func_034B00((int)a0, buf, buf + 0x24);
    return a0 + 0x70;
}
