typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern V4 D_001C01C8;

extern void func_05CF28(void *a0, int a1);
extern void func_036010(void *a0);

void func_04CFD0(void *a0)
{
    unsigned short mode;
    V4 *d;

    if (*(unsigned short *)((char *)a0 + 0x108) == 9) {
        func_05CF28(a0, 0);
    }
    mode = *(unsigned short *)((char *)a0 + 0x102);
    if ((unsigned)(mode - 0x28) >= 12) {
        d = (V4 *)((char *)a0 + 0x304);
        d->x = D_001C01C8.x;
        d->y = D_001C01C8.y;
        d->z = D_001C01C8.z;
        d->w = D_001C01C8.w;
    }
    func_036010(a0);
}
