/* LEVEL_07.REL:0x077B00: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_07A1F8(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_077B00(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_07A1F8(object, context, 1, mode, first, second);
    func_07A1F8(object, context, 0, mode, first, second);
}
