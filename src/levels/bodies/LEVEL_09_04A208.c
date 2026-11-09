/* LEVEL_09:0x04A208 -- placement copy of LEVEL_03_04BF88.c: runs the two handlers in turn with the same three
   arguments. */
extern void func_058988(void *a, void *b, void *c);
extern void func_04A0C8(void *a, void *b, void *c);

void func_04A208(void *a, void *b, void *c)
{
    func_058988(a, b, c);
    func_04A0C8(a, b, c);
}
