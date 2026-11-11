/* LEVEL_04:0x125510 -- a 12-byte head taken from a global, then an indexed
   word of it handed to the shared code. */
typedef struct {
    float x;
    float y;
    int i;
} Head;

extern Head D_00231718;
extern void func_0291B0(int a, int b, int c);

void func(int a, int b, int index)
{
    Head local = D_00231718;
    int *p = (int *)&local + index;

    func_0291B0(a - 1, b, *p);
}
