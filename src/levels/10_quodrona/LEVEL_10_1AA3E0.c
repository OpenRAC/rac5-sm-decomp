/* LEVEL_10:0x1AA3E0 -- forwards a field of the large global state block with a fixed count and scale. */
typedef struct State {
    char pad_00[0x13734];
    int handle;
} State;

extern State *D_001FCFAC;
extern void func_1E0320(int handle, int count, float scale);

void func_1AA3E0(void)
{
    func_1E0320(D_001FCFAC->handle, 0x20, 0.2f);
}
