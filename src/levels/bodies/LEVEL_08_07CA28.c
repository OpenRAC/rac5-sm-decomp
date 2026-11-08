/* LEVEL_08.REL:0x07CA28: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_07F1C0(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_07CA28(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_07F1C0(object, context, 1, mode, first, second);
    func_07F1C0(object, context, 0, mode, first, second);
}
