/* LEVEL_02:0x003A18 -- the incoming vector and the two floats land in the
   object the global points at; the flag word is set and, when the second
   argument is there, one of its bits is cleared again. */
typedef struct {
    float f[2];
    int flag;
} Vec12;

extern void *D_00203ED4;

void func_003A18(Vec12 *src, Vec12 *opt, float a, float b)
{
    *(unsigned long long *)((char *)D_00203ED4 + 0x40) |= 0x40000;
    *(Vec12 *)((char *)D_00203ED4 + 0x250) = *src;
    *(float *)((char *)D_00203ED4 + 0x25C) = a;
    *(float *)((char *)D_00203ED4 + 0x260) = b;
    if (opt)
        *(unsigned long long *)((char *)D_00203ED4 + 0x40) &= ~0x20;
}
