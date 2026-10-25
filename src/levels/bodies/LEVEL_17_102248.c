/* LEVEL_17:102248 -- the squared length of the vector (fields 0xC, 0x00, 0x04,
   0x08) through the three chained calls. */
typedef struct {
    float f_00;
    float f_04;
    float f_08;
    float f_0C;
} Vec;

int func_18A428(float x);
int func_000000(int a0);
int func_18A138(int a0);

void func_102248(Vec *a0)
{
    func_18A138(func_000000(func_18A428(
        a0->f_0C * a0->f_0C + a0->f_00 * a0->f_00 +
        a0->f_04 * a0->f_04 + a0->f_08 * a0->f_08)));
}
