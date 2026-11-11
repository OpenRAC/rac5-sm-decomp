/* LEVEL_06:0x04A420 -- placement copy of LEVEL_03_04BF88.c: runs the two handlers in turn with the same three
   arguments. */
extern void func_058B48(void *a, void *b, void *c);
extern void func_04A2E0(void *a, void *b, void *c);

void func_04A420(void *a, void *b, void *c)
{
    func_058B48(a, b, c);
    func_04A2E0(a, b, c);
}
