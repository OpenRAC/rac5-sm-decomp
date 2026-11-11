/* LEVEL_07:0x04E2F8 -- placement copy of LEVEL_03_04BF88.c: runs the two handlers in turn with the same three
   arguments. */
extern void func_05CA78(void *a, void *b, void *c);
extern void func_04E1B8(void *a, void *b, void *c);

void func_04E2F8(void *a, void *b, void *c)
{
    func_05CA78(a, b, c);
    func_04E1B8(a, b, c);
}
