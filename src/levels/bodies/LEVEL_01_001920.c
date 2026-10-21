/* LEVEL_01:0x001920 -- copies one float of the record and clears the two
   neighbouring words, then stores the counter 2. */
struct S {
    float f;
    int b;
    float g;
    int c;
    int d;
};

void func_001920(struct S *a0)
{
    a0->f = a0->g;
    a0->b = 0;
    a0->c = 0;
    a0->d = 2;
}
