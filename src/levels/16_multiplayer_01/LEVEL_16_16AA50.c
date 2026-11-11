/* LEVEL_16.REL:0x16AA50 -- decreases the timer and fires the level callback once it
   is spent. */
typedef struct {
    char pad_00[0x70];
    float f_70;
} Node;

extern void func_06F940(Node *, int);

void func_16AA50(Node *a0, float a1)
{
    float t = a0->f_70 - a1;

    a0->f_70 = t;
    if (t <= 0.0f)
        func_06F940(a0, 1);
}
