/* LEVEL_10:0x165250 -- starts a 0x15-count effect with scale 0.2 on the handle stored in the global state. */
typedef struct { char pad_00[0x13734]; int handle; } State;
extern State *D_001FCFAC;
extern void func_1E0320(int handle, int count, float scale);

void func_165250(void)
{
    func_1E0320(D_001FCFAC->handle, 0x15, 0.2f);
}
