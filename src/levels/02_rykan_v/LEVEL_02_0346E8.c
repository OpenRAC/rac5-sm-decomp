/* LEVEL_02:0x0346E8 -- runs the first pass on the pair, then hands its
   result to the second pass. */
extern int func_034880(void *a, void *b, int c);
extern int func_035480(void *o, void *pt, int idx);

void func_0346E8(void *a, void *b)
{
    func_035480(a, b, func_034880(a, b, 0));
}
