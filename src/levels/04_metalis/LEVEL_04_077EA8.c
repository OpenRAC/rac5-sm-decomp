/* LEVEL_04.REL:0x077EA8: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_07A640(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_077EA8(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_07A640(object, context, 1, mode, first, second);
    func_07A640(object, context, 0, mode, first, second);
}
