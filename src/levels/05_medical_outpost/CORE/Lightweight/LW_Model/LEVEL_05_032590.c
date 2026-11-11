/* LEVEL_05.REL:0x032590 -- primes three fields of the object then hands its
   buffer at 0x10 to func_0322E0; the 16 bytes that follow are the small
   difference helper. */
typedef struct {
    int f_00;
    int f_04;
    char pad0[0x80 - 0x08];
    float f_80;
} Obj;

void func_0322E0(void *a0, int a1, int a2);

void func_032590(Obj *a0, int b, int c, int d, int e, int f, float x)
{
    a0->f_04 = e;
    a0->f_80 = x;
    a0->f_00 = f;
    func_0322E0(&a0->f_00 + 4, c, d);
}

int func_0325C8(int *a, int *b)
{
    return *a - *b;
}
