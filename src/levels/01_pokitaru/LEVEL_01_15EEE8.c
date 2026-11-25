/* LEVEL_01:0x15EEE8 -- runs two update helpers on the object, hands it to a registration helper with two globals, then links it. */
extern char D_00393AB8[];
extern char D_0021F390[];

extern void func_1CAA20(void);
extern void func_1CAC10(void *object);
extern void func_1CB728(char *a, char *b, void *object);
extern void func_1CBA28(char *object);

void func_15EEE8(void *object)
{
    ((void (*)(void *))func_1CAA20)(object);
    func_1CAC10(object);
    func_1CB728(D_00393AB8, D_0021F390, object);
    func_1CBA28(D_00393AB8);
}
