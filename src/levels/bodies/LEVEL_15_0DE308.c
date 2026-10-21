/* LEVEL_15:0x0DE308 -- a 12-byte head taken from a global, then an indexed
   word of it handed to the shared code. */
typedef struct {
    float x;
    float y;
    int i;
} Head;

extern Head D_0016C518;
extern void func_022EE0(int a, int b, int c);

void func(int a, int b, int index)
{
    Head local = D_0016C518;
    int *p = (int *)&local + index;

    func_022EE0(a - 1, b, *p);
}
