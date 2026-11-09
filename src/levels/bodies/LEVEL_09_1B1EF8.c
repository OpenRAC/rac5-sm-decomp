/* LEVEL_09:0x1B1EF8 -- placement copy of LEVEL_01_1CB9D8.c. */
/* LEVEL_01:1CB9D8 -- builds a temporary frame from the source vector, hands
   it to func_030DD8 and returns the address of the +0x70 member. */
typedef struct {
    char pad_00[0x2C];
    float f_2C;
} Src;

void func_121EE8(float *buf, void *a1, void *a2, float x, float y, float z);
void func_030DD8(char *a0, float *buf, float *tail);

char *func_1B1EF8(char *a0, int a1, int a2, Src *a3, void *a4)
{
    float buf[12];

    func_121EE8(buf, 0, a4, a3->f_2C, a3->f_2C, a3->f_2C);
    func_030DD8(a0, buf, buf + 9);
    return a0 + 0x70;
}
