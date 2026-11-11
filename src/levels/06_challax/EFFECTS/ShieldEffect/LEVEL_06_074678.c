/* LEVEL_06:0x074678 -- placement copy of LEVEL_04_07DEF8.c: stores the input pointer, sizes a table from two counts, allocates it and fills the output record. */

extern char D_001FE800[];

void func_074730(int *a0, int *a1);
int func_105CC0(int a0, int a1, int a2, void *a3, int a4);
void func_098218(void *a0, int a1, int a2, int a3, float f12, float f13, float f14);

void func_074678(int *out, int *in)
{
    int n;
    char *r;

    out[0] = (int)in;
    func_074730(out, in);
    n = in[1];
    n = n + 1;
    n = n << 1;
    n = n + 1;
    n = n * (in[0] - 1);
    n = n - 1;
    r = (char *)func_105CC0(0x10, n * 0x30, 0, D_001FE800, 0x31);
    func_098218(r, n, in[0], in[1],
                *(float *)((char *)in + 0x08),
                *(float *)((char *)in + 0x0C),
                *(float *)((char *)in + 0x10));
    out[1] = (int)r;
    out[2] = n;
}
