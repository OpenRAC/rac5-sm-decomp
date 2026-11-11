/* LEVEL_16:0x0380F8 -- stores the value, then submits the object's handle
   with the shared record and the handle's current value. */
typedef struct {
    char pad[0x59C];
    int handle;
    char pad5a0[0x38];
    int value;
} Obj;

extern char D_001C43F8[];
extern int func_112D18(int handle);
extern void func_069D38(int handle, int record, int value);

void func_0380F8(Obj *obj, int value)
{
    obj->value = value;
    func_069D38(obj->handle, (int)D_001C43F8, func_112D18(obj->handle));
}
