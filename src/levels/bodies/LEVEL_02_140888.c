/* LEVEL_02.REL @ 0x140888 — 80 octets, lwc1 */
typedef struct {
    char pad6C[0x6C];
    int f6C;
    char pad70[0x68];
    float fD8;
    float fDC;
} Inner;

typedef struct {
    char pad58[0x58];
    Inner *f58;
} Outer;

void func_01CF88(int a0, int a1, char *a2, int a3, int a4, int a5, int a6,
                 float f12);

void func_140888(int a0, int a1, int a2)
{
    Inner *p = ((Outer *)a0)->f58;
    float f;

    if (p->f6C != 0)
        f = p->fDC;
    else
        f = p->fD8;
    func_01CF88(a1, a2, (char *)a0 + 0x30, 0x529, 0x101, 2, 1, f);
}
