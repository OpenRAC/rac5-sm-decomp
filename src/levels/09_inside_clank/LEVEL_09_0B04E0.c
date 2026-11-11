/* Capture two state records and return the difference in their fourth words. */
typedef struct {
    int w[4];
} Buf;

extern void func_0AB9B8(int a0, void *a1, float v);
extern int func_0AF538(void);

int func_0B04E0(void)
{
    Buf a;
    Buf b;

    func_0AB9B8(0x6C, &a, 0.0f);
    if (func_0AF538() == 0) {
        return 0;
    }
    func_0AB9B8(0x6B, &b, 0.0f);
    return b.w[3] - a.w[3];
}
