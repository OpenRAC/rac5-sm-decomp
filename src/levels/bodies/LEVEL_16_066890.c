/* LEVEL_16.REL:0x066890: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_068F88(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_066890(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_068F88(object, context, 1, mode, first, second);
    func_068F88(object, context, 0, mode, first, second);
}
