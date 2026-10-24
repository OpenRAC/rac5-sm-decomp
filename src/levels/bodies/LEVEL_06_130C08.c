/* LEVEL_06:0x130C08 -- picks one of the two depth biases and submits the
   object to the drawing call. */
typedef struct {
    char pad0[0x6C];
    int f6C;
    char pad1[0xD8 - 0x70];
    float fD8;
    float fDC;
} Inner;

typedef struct {
    char pad0[0x58];
    Inner *p58;
} Obj;

extern void func_01AE28(int, int, void *, int, int, int, int, float);

void func_130C08(Obj *a0, int a1, int a2)
{
    Inner *p = a0->p58;
    float v = p->f6C ? p->fDC : p->fD8;

    func_01AE28(a1, a2, (char *)a0 + 0x30, 0x529, 0x101, 2, 1, v);
}
