/* LEVEL_16:0x000340 -- the indexed entry of the table is copied on the
   stack, then two of its pointers are given to the next routine. */
typedef union {
    float f[5];
    void *p[5];
    int i[5];
} Item;

extern Item D_001C0480[];
extern void func_000318(void *a, void *b);

void func_000340(int index)
{
    Item it = D_001C0480[index];

    func_000318(it.p[3], it.p[1]);
}
