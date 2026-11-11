/* LEVEL_10.REL:0x075FB0: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_0786A8(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_075FB0(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_0786A8(object, context, 1, mode, first, second);
    func_0786A8(object, context, 0, mode, first, second);
}
