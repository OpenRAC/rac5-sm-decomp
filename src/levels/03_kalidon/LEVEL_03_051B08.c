extern void func_03A0C0(void *obj);
extern void func_003720(int, int, float, float);
extern void func_003750(int, int, float, float);
extern void func_0038C0(int, int, float, float);
extern void func_003C00(int);

void func_051B08(char *state)
{
    func_03A0C0(state);
    func_003720(0xA, 2, 6.0f, 1.0f);
    func_003750(0xA, 2, 3.0f, 1.0f);
    func_0038C0(0xA, 2, -0.3f, 1.0f);
    func_003C00(0);
}
