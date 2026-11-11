/* LEVEL_09.REL:0x072418: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_074B10(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_072418(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_074B10(object, context, 1, mode, first, second);
    func_074B10(object, context, 0, mode, first, second);
}
