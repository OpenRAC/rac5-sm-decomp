/* LEVEL_15:0x13B2E8 -- placement copy of LEVEL_08_20F8C8.c: publishes the object's word, runs the three update
   steps and copies the global result back into the object. */
typedef struct {
    char pad[0xB8];
    int in;
    int out;
} Obj;

extern int D_0014AEF4;
extern int D_00183860;
extern void func_0702B8(void);
extern void func_06D880(Obj *obj);
extern void func_070308(void);

void func_13B2E8(Obj *obj)
{
    D_0014AEF4 = obj->in;
    func_0702B8();
    func_06D880(obj);
    func_070308();
    obj->out = D_00183860;
}
