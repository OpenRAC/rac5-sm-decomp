/* LEVEL_08:0x082A78 -- placement copy of LEVEL_04_07DEF8.c: stores the input pointer, sizes a table from two counts, allocates it and fills the output record. */

extern char D_00259600[];

void func_082B30(int *a0, int *a1);
int func_11FE90(int a0, int a1, int a2, void *a3, int a4);
void func_0A8340(void *a0, int a1, int a2, int a3, float f12, float f13, float f14);

void func_082A78(int *out, int *in)
{
    int n;
    char *r;

    out[0] = (int)in;
    func_082B30(out, in);
    n = in[1];
    n = n + 1;
    n = n << 1;
    n = n + 1;
    n = n * (in[0] - 1);
    n = n - 1;
    r = (char *)func_11FE90(0x10, n * 0x30, 0, D_00259600, 0x31);
    func_0A8340(r, n, in[0], in[1],
                *(float *)((char *)in + 0x08),
                *(float *)((char *)in + 0x0C),
                *(float *)((char *)in + 0x10));
    out[1] = (int)r;
    out[2] = n;
}
