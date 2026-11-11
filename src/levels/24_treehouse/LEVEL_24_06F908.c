/* LEVEL_24.REL:0x06F908: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_0720A0(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_06F908(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_0720A0(object, context, 1, mode, first, second);
    func_0720A0(object, context, 0, mode, first, second);
}
