/* LEVEL_16:0x05D818 -- draws a fading element positioned from an entry count when its alpha is positive. */
typedef struct {
    char pad0[0xF4];
    unsigned count;
    char padF8[0xF9C - 0xF8];
    float alpha;
} Obj;
extern void func_08FE90(int a, int b, int c, int d, int e);
extern void func_094530(int a, short x, int w, int h, unsigned col, unsigned mask);

void func_05D818(Obj *o)
{
    int c;
    if (o->alpha <= 0.0f)
        return;
    c = (int)(o->alpha * 255.9f);
    func_08FE90(0, 2, 3, 0, 0);
    func_094530(0, (short)(int)((float)(o->count - 1) * 0.5f * 416.0f), 0x200, 0xD0, (c << 24) | 0xFF, 0xFFFFFF);
}
