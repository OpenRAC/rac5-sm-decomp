/* LEVEL_03:0x1D0A80 -- queries a nested record; returns one when the check fails, else inverts a follow-up. */
typedef struct {
    char pad_00[0x04];
    int f_04;
} Inner;

typedef struct {
    char pad_00[0x54];
    Inner *f_54;
} Outer;

extern void func_01A0B0(int *a0);
extern int func_084588(int a0, int *a1);
extern int func_1D0320(Outer *a0);

int func_1D0A80(Outer *a0)
{
    Inner *inner;
    int buf[4];

    inner = a0->f_54;
    func_01A0B0(buf);
    if (func_084588(inner->f_04, buf) == 0) {
        return 1;
    }
    return func_1D0320(a0) == 0;
}
