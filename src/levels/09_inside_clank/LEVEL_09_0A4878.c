extern int func_0A3C68(void);
extern void func_0A3920(void *, void *);
extern void func_0A4698(void);
extern void func_0A48C0(void *);
extern void *D_001E06E0;

void func_0A4878(void *value)
{
    if (func_0A3C68() != 0) {
        func_0A3920(D_001E06E0, value);
        func_0A4698();
        func_0A48C0(value);
    }
}
