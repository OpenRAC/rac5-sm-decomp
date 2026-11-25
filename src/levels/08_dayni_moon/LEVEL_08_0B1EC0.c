extern int func_0B12B0(void);
extern void func_0B0F68(void *, void *);
extern void func_0B1CE0(void);
extern void func_0B1F08(void *);
extern void *D_0023F7A0;

void func_0B1EC0(void *value)
{
    if (func_0B12B0() != 0) {
        func_0B0F68(D_0023F7A0, value);
        func_0B1CE0();
        func_0B1F08(value);
    }
}
