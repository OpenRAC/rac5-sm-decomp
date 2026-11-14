/* LEVEL_17:0x11C918 -- stores a pointer, a byte and the square root of a value into three parallel tables at the given index. */
extern float sqrtf(float x);
extern int func_11C8F8(int index);

extern void *D_001ABB80[];
extern unsigned int D_001ABB88[];
extern float D_001ABB70[];

void func_11C918(int index, void *p, unsigned char b, float v)
{
    func_11C8F8(index);
    D_001ABB80[index] = p;
    if (p != 0) {
        D_001ABB88[index] = b;
        D_001ABB70[index] = sqrtf(v);
    }
}
