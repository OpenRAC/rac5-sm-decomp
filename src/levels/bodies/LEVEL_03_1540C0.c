/* LEVEL_03:0x1540C0 -- the row the object carries is copied out and the
   neighbouring flag byte is raised. */
typedef struct {
    int i[3];
} Row;

typedef struct {
    char pad[0x70];
    Row row;
} Obj;

extern Row D_003ACEE4;

Obj *func_0990B0(int a, int b);

void func_1540C0(void)
{
    Obj *obj = func_0990B0(0, 0);

    D_003ACEE4 = obj->row;
    *(char *)((char *)&D_003ACEE4 - 4) = 1;
}
