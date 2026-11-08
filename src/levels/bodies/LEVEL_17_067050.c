/* LEVEL_17.REL:0x067050: complete reviewed body; pure C. */
typedef struct {
    int x;
    int y;
    int z;
} ThreeWords;

extern void func_069748(void *object, void *context, unsigned char flag,
                        int mode, const ThreeWords *first,
                        const ThreeWords *second);

void func_067050(void *context, void *object, int mode,
                 const ThreeWords *first, const ThreeWords *second)
{
    func_069748(object, context, 1, mode, first, second);
    func_069748(object, context, 0, mode, first, second);
}
