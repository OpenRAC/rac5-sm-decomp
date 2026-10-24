/* LEVEL_18.REL:0x184CF8 -- fills the local plane from the caller's record,
   hands the two halves to the intersection routine and returns the tail of
   the object. */
typedef struct {
    char pad0[0x2C];
    float f_2C;
} Src;

void func_104CC8(char *out, int a1, int a2, float f0, float f1, float f2);
void func_02F018(int a0, char *a1, char *a2);

char *func_184CF8(char *a0, int a1, int a2, Src *a3, int a4)
{
    char buf[0x30];
    float f = a3->f_2C;

    func_104CC8(buf, 0, a4, f, f, f);
    func_02F018((int)a0, buf, buf + 0x24);
    return a0 + 0x70;
}
