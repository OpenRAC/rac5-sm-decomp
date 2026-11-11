/* LEVEL_10:0x0C5D98 -- forwards two pointers to a helper with the global as first argument. */
extern char D_00209A58[];
extern int func_0BAD10(char *, unsigned int, int, int);
void func_0C5D98(int a, int b)
{
    func_0BAD10(D_00209A58, 0, a, b);
}
