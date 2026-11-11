typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern V4 D_0012DDC8;

extern void func_056B20(void *a0, int a1);
extern void func_030AA8(void *a0);

void func_046BC8(void *a0)
{
    unsigned short mode;
    V4 *d;

    if (*(unsigned short *)((char *)a0 + 0x108) == 9) {
        func_056B20(a0, 0);
    }
    mode = *(unsigned short *)((char *)a0 + 0x102);
    if ((unsigned)(mode - 0x28) >= 12) {
        d = (V4 *)((char *)a0 + 0x304);
        d->x = D_0012DDC8.x;
        d->y = D_0012DDC8.y;
        d->z = D_0012DDC8.z;
        d->w = D_0012DDC8.w;
    }
    func_030AA8(a0);
}
