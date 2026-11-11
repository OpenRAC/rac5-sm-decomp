/* LEVEL_08:0x20F8C8 -- publishes the object's word, runs the three update
   steps and copies the global result back into the object. */
typedef struct {
    char pad[0xB8];
    int in;
    int out;
} Obj;

extern int D_0023F134;
extern int D_0028AA60;
extern void func_093D40(void);
extern void func_091308(Obj *obj);
extern void func_093D90(void);

void func_20F8C8(Obj *obj)
{
    D_0023F134 = obj->in;
    func_093D40();
    func_091308(obj);
    func_093D90();
    obj->out = D_0028AA60;
}
