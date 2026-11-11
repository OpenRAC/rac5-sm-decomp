/* LEVEL_08:0x052E30 -- placement copy of LEVEL_03_04BF88.c: runs the two handlers in turn with the same three
   arguments. */
extern void func_0615B0(void *a, void *b, void *c);
extern void func_052CF0(void *a, void *b, void *c);

void func_052E30(void *a, void *b, void *c)
{
    func_0615B0(a, b, c);
    func_052CF0(a, b, c);
}
