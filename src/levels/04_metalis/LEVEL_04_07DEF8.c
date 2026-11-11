/* LEVEL_04:0x07DEF8 -- stores the input pointer, sizes a table from two counts, allocates it and fills the output record. */

extern char D_00229300[];

void func_07DFB0(int *a0, int *a1);
int func_11AC58(int a0, int a1, int a2, void *a3, int a4);
void func_0A2C58(void *a0, int a1, int a2, int a3, float f12, float f13, float f14);

void func_07DEF8(int *out, int *in)
{
    int n;
    char *r;

    out[0] = (int)in;
    func_07DFB0(out, in);
    n = in[1];
    n = n + 1;
    n = n << 1;
    n = n + 1;
    n = n * (in[0] - 1);
    n = n - 1;
    r = (char *)func_11AC58(0x10, n * 0x30, 0, D_00229300, 0x31);
    func_0A2C58(r, n, in[0], in[1],
                *(float *)((char *)in + 0x08),
                *(float *)((char *)in + 0x0C),
                *(float *)((char *)in + 0x10));
    out[1] = (int)r;
    out[2] = n;
}
