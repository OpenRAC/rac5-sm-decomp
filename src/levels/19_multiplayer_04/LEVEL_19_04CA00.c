typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern V4 D_001CDF48;

extern void func_05C958(void *a0, int a1);
extern void func_035A50(void *a0);

void func_04CA00(void *a0)
{
    unsigned short mode;
    V4 *d;

    if (*(unsigned short *)((char *)a0 + 0x108) == 9) {
        func_05C958(a0, 0);
    }
    mode = *(unsigned short *)((char *)a0 + 0x102);
    if ((unsigned)(mode - 0x28) >= 12) {
        d = (V4 *)((char *)a0 + 0x304);
        d->x = D_001CDF48.x;
        d->y = D_001CDF48.y;
        d->z = D_001CDF48.z;
        d->w = D_001CDF48.w;
    }
    func_035A50(a0);
}
