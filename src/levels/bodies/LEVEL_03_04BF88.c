/* LEVEL_03:0x04BF88 -- runs the two handlers in turn with the same three
   arguments. */
extern void func_05A708(void *a, void *b, void *c);
extern void func_04BE48(void *a, void *b, void *c);

void func_04BF88(void *a, void *b, void *c)
{
    func_05A708(a, b, c);
    func_04BE48(a, b, c);
}
