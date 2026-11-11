/* LEVEL_18.REL:0x0660E0: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_0687D8(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_0660E0(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_0687D8(object, context, 1, mode, first, second);
    func_0687D8(object, context, 0, mode, first, second);
}
