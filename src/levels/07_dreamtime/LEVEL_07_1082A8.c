/* LEVEL_07:0x1082A8 -- returns a cached status word and fills it from a helper pair on first use. */

extern int D_0021AD48;
extern int D_0021AD44;
extern char D_00108498[];
extern void func_0987D0(unsigned int *buf, unsigned int a, unsigned int tab, int n, int a4, int a5, unsigned int a6);
extern int func_0989A8(unsigned int *buf);

int func_1082A8(void)
{
    unsigned int buf[4];
    int v;

    v = D_0021AD48;
    if (v != -1) {
        return v;
    }
    func_0987D0(buf, D_0021AD44, (unsigned int)D_00108498, 0x38, 0, -1, 0);
    return (D_0021AD48 = func_0989A8(buf));
}
