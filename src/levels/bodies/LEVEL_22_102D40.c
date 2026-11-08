extern void func_06F718(float, float, void *, int, int, int);
typedef struct {
    float f00;
    char pad[0x18];
    float f1C;
    int f20;
} Rec;
extern void func_105690(char *, Rec *, signed char);

void func_102D40(char *source, int *state, char *destination, signed char mode)
{
    float *from;
    float *to;
    *state = 3;
    func_06F718(0.1f, 0.0f, source, 3, 0, 1);
    func_105690(source, (Rec *)destination, mode);
    from = (float *)(source + 0x30);
    to = (float *)(destination + 0x10);
    *(float *)(destination + 0x0c) = 15.0f;
    to[0] = from[0];
    to[1] = from[1];
    to[2] = from[2];
}
