/* LEVEL_01:1CB9D8 -- builds a temporary frame from the source vector, hands
   it to func_0345D0 and returns the address of the +0x70 member. */
typedef struct {
    char pad_00[0x2C];
    float f_2C;
} Src;

void func_128F50(char *buf, int a1, int a2, float x, float y, float z);
void func_0345D0(int a0, char *buf, char *tail);

char *func_1CB9D8(int a0, int a1, int a2, Src *a3, int a4)
{
    char buf[0x30];

    func_128F50(buf, 0, a4, a3->f_2C, a3->f_2C, a3->f_2C);
    func_0345D0(a0, buf, buf + 0x24);
    return (char *)(a0 + 0x70);
}
