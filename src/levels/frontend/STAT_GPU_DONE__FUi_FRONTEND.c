/* FRONTEND:0x0064B8 -- raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_0002B028;
extern unsigned int D_0002B02C;
extern int D_0002B020;
extern long long D_0002B018;
extern int D_0010EBC0[];

long long func_007A58(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_0002B028 = a0;
    if (D_0002B02C < a0) {
        D_0002B02C = a0;
    }
    r = func_007A58();
    D_0010EBC0[D_0002B020 & 0x1F] = (int)(r - D_0002B018);
}
