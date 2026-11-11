/* LEVEL_19.REL:0x066A80: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_069178(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_066A80(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_069178(object, context, 1, mode, first, second);
    func_069178(object, context, 0, mode, first, second);
}
