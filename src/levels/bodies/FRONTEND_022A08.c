/* FRONTEND:0x022A08 -- dispatches through the object vtable. */
struct Vtable {
    char pad[0x28];
    short offset;
    int method;
};

void func_022A08(char *p)
{
    struct Vtable *vt = *(struct Vtable **)(p + 0x14);
    void (*method)(char *) = (void (*)(char *))vt->method;

    method(p + vt->offset);
}
