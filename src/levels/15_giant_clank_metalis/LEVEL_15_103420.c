/* LEVEL_15:0x103420 -- pushes a default entry into the object's three-slot ring, hooks the returned entry up to the linked record and starts it at full scale. */
struct Q;

typedef struct {
    char pad0[8];
    int w8;
    char *handle;
    char padF0[0xF4 - 0x10];
    char ring[0x23C - 0xF4];
    char *link;
    char pad240[0x454 - 0x240];
    float scale;
} Obj;

extern char D_000FDCB8[];

extern char *func_0FCE88(struct Q *a0, int a1, float a2);
extern void func_0FDC68(char *handle, char *target);

void func_103420(Obj *o)
{
    char *h;
    char *link;

    o->w8 = 0;
    link = o->link;
    h = func_0FCE88((struct Q *)o->ring, (int)D_000FDCB8, 0.095238097012043f);
    func_0FDC68(h, link + 0x108);
    o->handle = h;
    o->scale = 1.0f;
}
