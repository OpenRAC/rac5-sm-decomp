/* LEVEL_01:0x199280 -- first phase change of the object: while its state byte (+0x45) is below 2 it moves to state 2, queues the 0.15 s sound request and, when the global target is set, starts the effect at the target's position; returns 3 on the change and 1 otherwise. */
extern char *D_00396E48;

extern void func_07CD28(float t, float u, char *object, int a, int b, int c);
extern void func_0809D0(char *object, char *target, int a, int b, int c, int d, int e, int f, float x, float y, float z, float w);

int func_199280(char *object)
{
    if (*(unsigned char *)(object + 0x45) >= 2) {
        return 1;
    }
    *(unsigned char *)(object + 0x45) = 2;
    func_07CD28(0.15f, 0.0f, object, 3, 0, 1);
    if (D_00396E48 != 0) {
        func_0809D0(object, D_00396E48, 0, 0, 0, 0, 0, 1, *(float *)(D_00396E48 + 0x14), *(float *)(D_00396E48 + 0x18), *(float *)(D_00396E48 + 0x1C), *(float *)(D_00396E48 + 0x20));
    }
    return 3;
}
