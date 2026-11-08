/* LEVEL_02.REL:0x07C1F8: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_07E8F0(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_07C1F8(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_07E8F0(object, context, 1, mode, first, second);
    func_07E8F0(object, context, 0, mode, first, second);
}
