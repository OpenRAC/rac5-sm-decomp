/* LEVEL_01.REL:0x19B5B8 -- decreases the timer and fires the level callback once it
   is spent. */
typedef struct {
    char pad_00[0x70];
    float f_70;
} Node;

extern void func_07C670(Node *, int);

void func_19B5B8(Node *a0, float a1)
{
    float t = a0->f_70 - a1;

    a0->f_70 = t;
    if (t <= 0.0f)
        func_07C670(a0, 1);
}
