/* LEVEL_03.REL:0x075700: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_077DF8(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_075700(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_077DF8(object, context, 1, mode, first, second);
    func_077DF8(object, context, 0, mode, first, second);
}
