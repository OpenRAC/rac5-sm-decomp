extern long long func_094FC8(void);
extern void func_094C80(void *, void *);
extern void func_0959F8(void);
extern void func_095C20(void *);
extern void *D_00155C60;

void func_095BD8(void *value)
{
    if (func_094FC8() != 0) {
        func_094C80(D_00155C60, value);
        func_0959F8();
        func_095C20(value);
    }
}
