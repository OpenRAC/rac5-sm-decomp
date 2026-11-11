/* LEVEL_10:0x04C3D0 -- placement copy of LEVEL_03_04BF88.c: runs the two handlers in turn with the same three
   arguments. */
extern void func_05AB50(void *a, void *b, void *c);
extern void func_04C290(void *a, void *b, void *c);

void func_04C3D0(void *a, void *b, void *c)
{
    func_05AB50(a, b, c);
    func_04C290(a, b, c);
}
