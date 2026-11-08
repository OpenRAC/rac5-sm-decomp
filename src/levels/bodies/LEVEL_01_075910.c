/* LEVEL_01.REL:0x075910: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_078008(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_075910(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_078008(object, context, 1, mode, first, second);
    func_078008(object, context, 0, mode, first, second);
}
